#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// create the non-primative data type;
int num=0;
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
    num=num+1;
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
struct queue
{
    int front,rear;
    int capacity;
    struct node *pointer;
};
struct queue * createqueue(int size)
{
    struct queue *temp=(struct queue *)malloc(sizeof(struct queue));
    temp->front=temp->rear=-1;
    temp->capacity=size;
    temp->pointer= (struct node *)malloc(sizeof(struct node )*size);
    return temp;
}
int isemptyqueue(struct queue *Q)
{
    if(Q->front==-1)
        return 1;
    else
        return 0;
}
int isfullqueue(struct queue *Q)
{
    if(( (Q->rear+1)%Q->capacity)==Q->front)
    return 1;
    else
        return 0;
}
void enqueue(struct queue *Q, struct node *root)
{
 if(isfullqueue(Q))
 {
     printf("\n\t overflow");
     return ;
 }
 else
 {
     Q->rear=(Q->rear+1)%Q->capacity;
     int myno=Q->rear;
     Q->pointer[myno]=root;
 }
 if(Q->front==-1)
    Q->front=Q->rear;
}
struct node * dequeue(struct queue *Q)
{
    struct node *root;
 if(isemptyqueue(Q))
 {
     printf("\n\t underflow ");
     return ;
 }
 else
 {
     int myno=Q->front;
      root=((Q->pointer)+myno);
      Q->front=(Q->front+1)%Q->capacity;
 }
 return root;
}
void levelorder(struct node *root)
{
    if(root==NULL)
        return ;
     struct queue *Q=createqueue(num);
     enqueue(Q,root);
     while(!isemptyqueue(Q))
     {
         struct node * dq=dequeue(Q);
        printf("\t %d",dq->data);
        if(dq->left)
            enqueue(Q,dq->left);
        if(dq->right);
            enqueue(Q,dq->right);
    }
}
int main()
{
    struct node *n=NULL;
    struct node *root=NULL;
    printf("enter the value = ");
    int a[8];
    for(int i=0;i<3;i++){
            scanf("%d",&a[i]);
    root=createBinaryTree(root,a[i]);
    }
    printf("\n\t values = ");
    levelorder(root);
}
