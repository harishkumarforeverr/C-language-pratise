#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// create the non-primative data type;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
// creaye a new node
struct node * newnode(struct node *temp,int data)
{
  temp=(struct node *)malloc(sizeof(struct node ))   ;
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    printf("\n\t %d value is insereted ",temp->data);
    return temp;
}
// creatte a binary treee insertion operation
struct node * createBinaryTree(struct node *root, int data)
{
 if(root==NULL) // base case if root is null and calling newnode
  return (newnode(root,data));
  //finding position in right sub treee
  else if(data>root->data)
  root->right=createBinaryTree(root->right,data);
  //finding position in left sub treee
  else
   root->left=createBinaryTree(root->left,data);
  return root;
}
void show(struct node *root)
{
      if(root)
      {
         printf("\t %d",root->data);
          show(root->left);
          show(root->right);
      }
}
struct node *pointer[100];
int front=-1;
int rear=-1;
void enqueue(struct node *temp)
{
   rear=rear+1;
   pointer[rear]=temp;
   if(front==-1)
    front=0;
}
struct node * dequeue()
{
    struct node *t1=pointer[front];
    front=front+1;
    return t1;
}
void levelorder(struct node *root)
{
    if(root==NULL)
        return NULL;
    struct node *curr=root;
    enqueue(curr);
    while(curr)
    {
        curr=dequeue();
        printf("\t %d ",curr->data);
        if(curr->left)
        enqueue(curr->left);
        if(curr->right)
            enqueue(curr->right);
    }

}
int main()
{
    struct node *n=NULL;
    struct node *root=NULL;
    printf("enter the value = ");
    int a[8];
    for(int i=0;i<7;i++){
            scanf("%d",&a[i]);
    root=createBinaryTree(root,a[i]);
    }
    printf("\n\t values using preorder = ");
    show(root);

    printf("\n\t values using levelorder = ");
    levelorder(root);

    getch();
    return 0;
}
