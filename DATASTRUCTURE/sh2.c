#include<stdio.h>
#include<stdlib.h>


struct node
{
int data;
struct node*left;
struct node*right;
};
struct node*root=NULL;
int count=1;

void display(struct node*);
struct node*insert(struct node*,int);


void main()
{
int ch,ele;
do
{
printf("\n1.insert\n2.display\n3.exit\n\nenter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("enter the data\n");
scanf("%d",&ele);
root=insert(root,ele);
break;
case 2:
display(root);
break;
case 3:exit(0);
break;
}
}while(ch!=3);
}



struct node* insert(struct node*root,int ele)
{
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node*));
newnode->data=ele;
if(root==NULL)
{
newnode->left=newnode->right=NULL;
root=newnode;
count++;
}
else
{
if(count%2==0)
{
root->left=insert(root->left,ele);
}
else
{
root->right=insert(root->right,ele);
}
}
return(root);
}
void display(struct node* root)
{
if(root!=NULL)
{

display(root->left);
printf("%d\t",root->data);
display(root->right);
}
}
