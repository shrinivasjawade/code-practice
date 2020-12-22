#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *left;
struct node *right;
};
struct node *root=NULL;

void display(struct node*);
struct node *insert(struct node*,int);
int count(struct node *root);
void main()
{
int ch,ele,re;
do
{
printf("\n\n enter your choice\n1.insert\n2.display\n3.exit\n");
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
case 3:
re=count(root);
printf("%d\t",re);
break;
case 4:
exit(0);
break;
}
}
while(ch!=4);
}
struct node *insert(struct node *root,int ele)
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=ele;
if(root==NULL)
{
newnode->left=newnode->right=NULL;
root=newnode;
}
else
{
if(root->data>ele)
{
root->left=insert(root->left,ele);
}
else
{
root->right=insert(root->right,ele);
}
}
return root;
}
void display(struct node *root)
{
if(root!=NULL)
{
printf("%d\t",root->data);
display(root->left);
display(root->right);
}
}



int count(struct node *root)
{
if(root==NULL)
return 0;
if(root->left==NULL&&root->right==NULL)
return 1;
else
return(count(root->left)+count(root->right));
}
