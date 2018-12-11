#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *rchild;
	struct node *lchild;
	};
struct node *root=NULL;
int item;
int is_lchild(struct node *ptr)
{
	printf("Do you want to enter Lchild of %d ?\n Enter 1 for Yes and 2 for No. ",ptr->data);
	int ch;
	scanf("%d",&ch);
	if(ch==1)
	return 1;
	else 
	return 0;
}
int is_rchild(struct node *ptr)
{
	printf("Do you want to enter Rchild of %d ?\n Enter 1 for Yes and 2 for No. ",ptr->data);
	int ch;
	scanf("%d",&ch);
	if(ch==1)
	return 1;
	else 
	return 0;
}
void create(struct node *ptr)
{
	struct node *temp;
	if(is_lchild(ptr))
	{
		temp=(struct node*)malloc(sizeof(struct node));
		ptr->lchild=temp;
		printf("Enter the data\n");
		scanf("%d",&temp->data);
		create(temp);

	}
	else
	ptr->lchild=NULL;

	if(is_rchild(ptr))
	{
		temp=(struct node*)malloc(sizeof(struct node));
		ptr->rchild=temp;
		printf("Enter the data\n");
		scanf("%d",&temp->data);
		create(temp);
	}
	else
	ptr->rchild=NULL;
}
void inorder(struct node *ptr)
{
	if(ptr!=NULL)
	{
	inorder(ptr->lchild);
	printf("%d\t",ptr->data);
	inorder(ptr->rchild);
	}
}

void main()
{
	printf("Enter the root value");
	root=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&root->data);
	create(root);
	inorder(root);
}
	
	

	
