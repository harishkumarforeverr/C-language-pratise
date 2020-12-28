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
struct node *harish[100];
 // creaye a new node
struct node * newnode(struct node *temp,int data)
{
  temp=(struct node *)malloc(sizeof(struct node ))   ;
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    num=num+1;
   // printf("\n\t %d value is insereted ",temp->data);
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
};
struct queue * createqueue(int size)
{
    struct queue *temp=(struct queue *)malloc(sizeof(struct queue));
    temp->front=temp->rear=-1;
    temp->capacity=size;
    return temp;
}

void enqueue(struct queue *Q, struct node *root)
{
    Q->rear=(Q->rear+1)%Q->capacity;
    harish[Q->rear]=root;
    if(Q->front==-1)
    Q->front=0;

  //  printf("\n\t im enqueue () and value in harish is = %d",(harish[Q->rear])->data);
   // printf("\n\t font and read value %d %d ",Q->front,Q->rear);
}
struct node * dequeue(struct queue *Q)
{
    struct node *anode=harish[Q->front];
     Q->front=(Q->front+1)%Q->capacity;
 //   printf("\n\t im dequeue f1() and front value = %d and deleting value %d",Q->front,anode->data);
     return anode;
}
void levelorder(struct node *root)
{
    if(root==NULL)
        return ;
     struct queue *Q=createqueue(num);
    // printf("\n\t queue is created and front and rear and capacity value %d %d %d ",Q->front,Q->rear,Q->capacity);
     enqueue(Q,root);
     while(harish[Q->rear])
     {
         printf("\n\t  hi harish ");
         struct node *dq=dequeue(Q);
        printf("\t  %d",dq->data);
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
