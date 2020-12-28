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
struct node * searching (struct node *root , int data)
{
 if(root==NULL||root->data==data)
   return root;
   else if(data>root->data)
    searching(root->right,data);
   else
    searching(root->left,data);
}
struct node * minValueFromRightSubTree(struct node *root)
{
    struct node *current=root;
    while(current!=NULL && current->left!=NULL)
    current=current->left;
    return current;
}
struct node * deleteNode(struct node *root, int data)
{
  if(root==NULL)
    return root;
  else if(data>root->data)
    root->right=deleteNode(root->right,data);
  else if(data<root->data)
    root->left=deleteNode(root->left,data);
  else
  {
      if(root->left==NULL)
      {
          struct node *temp=root->right;
          free(root);
          return temp;
      }
      else if(root->right==NULL)
      {
          struct node *temp=root->left;
          free(root);
          return temp;
      }
      else
      {
          struct node *minnode=minValueFromRightSubTree(root->right);
          root->data=minnode->data;
          root->right=deleteNode(root->right,root->data);
      }
  }
    return root;
}
// proreder transver
//preorder means (+ab) means root left sub tree then right subtreee
void show(struct node *root)
{
      if(root)
      {
         printf("\t %d",root->data);
          show(root->left);
          show(root->right);
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
    printf("\n\t values = ");
    show(root);
    deleteNode(root,60);printf("\n\t values = ");

    show(root);
    deleteNode(root,30);printf("\n\t values = ");

    show(root);
    deleteNode(root,70);printf("\n\t values = ");

    show(root);
//    for (int i=0;i<3;i++)
//    {
//        printf("enter the element to be search = ");
//        int iteam;
//        scanf("%d",&iteam);
//        n=searching(root,iteam);
//        if(n==NULL)
//        {
//        printf("\n\t %d element not found");
//        }
//        else
//        {
//        printf("\n\t element is found and your value = %d ",n->data);
//        }
//    }
//    struct node *hm=minValueFromRightSubTree(root->right);
//    printf("\n\t min value from the right sub tree = %d",hm->data);
//
     getch();
}
