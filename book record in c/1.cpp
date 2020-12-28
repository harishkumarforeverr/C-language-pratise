#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
#include<string.h>
#include<fstream>
class book
{
    private : int bookid;
              char title[20];
              float price;
    public :  book()
    {
        bookid=0;
        strcpy(title,"notitle");
        price=0;
    }
    void getbookdata()
    {
        cout<<"\n\t enter the book_id and title and price = ";
        cin>>bookid>>title>>price;
    }
    void showbookdata()
    {
        cout<<"\n\t book deatiles : "<<bookid<<" "<<title<<" "<<price;
    }
    int storebook()
    {
        if(bookid==0||price==0)
        {
            cout<<"\n\t book data is not insalled ";
            return 0;
        }
        else
        {
            ofstream fout;
            fout.open("br.dat",ios::app|ios::binary);
            fout.write((char *)this,sizeof(*this));
            fout.close();
            return 1;
        }
    }
    void viewallbooks()
    {
         ifstream fin;
         fin.open("br.dat",ios::in|ios::binary);
         if(!fin)
            cout<<"\n\t file is not found ";
         else
         {
             fin.read((char *)this,sizeof(*this));
             while(!fin.eof())
             {
                 showbookdata();
                 fin.read((char *)this,sizeof(*this));
             }
             fin.close();
         }
    }
    void searchbook(char *t)
    {
        int counter=0;
        ifstream fin;
        fin.open("br.dat",ios::in|ios::binary);
        if(!fin)
            cout<<"\n\t no such files is found ";
        else
        {
            fin.read((char *)this,sizeof(*this));
            while(!fin.eof())
            {
                if(!strcmp(title,t))
                    counter++;
                fin.read((char *)this,sizeof(*this));
            }
            if(counter)
                cout<<"\n\t data is found ";
            else
                cout<<"\n\t data is not found ";
        }
    }
   /* void deletebook(char *t)
    {
        ifstream fin;
        ofstream fout;
        fin.open("br.dat",ios::in|ios::binary);
        if(!fin)
        {
            cout<<"n\t files doesnt exit ";
            return ;
        }
        else
        {
            fout.open("tempfile.dat",ios::app|ios::binary);
            fin.read((char *)this,sizeof(*this));
            while(!fin.eof())
            {
                if(strcmp(title,t));
                fout.write((char *)this,sizeof(*this));
                fin.read((char *)this,sizeof(*this));
            }
        }
        fin.close();
        fout.close();
        remove("br.dat");
        rename("temfile.dat","br.dat");
    }
    */
    void upadtebook(char *t)
    {
     fstream file;
     file.open("br.dat",ios::in|ios::out|ios::ate|ios::binary);
     file.seekg(0);
     file.read((char *)this,sizeof(*this));
     while(!file.eof())
     {
         if(!(strcmp(t,title)))
         {
             getbookdata();
             file.seekp(file.tellp()-sizeof(*this));
             file.write((char *)this,sizeof(this));
         }
        file.read((char *)this,sizeof(*this));
     }
     file.close();
    }
};
int main()
{
    book b;
    b.getbookdata();
    b.storebook();
    b.viewallbooks();
    b.searchbook("c++");
    //b.deletebook("java");
    b.viewallbooks();
    b.upadtebook("java");
    b.viewallbooks();

    getch();
    return 0;
}
