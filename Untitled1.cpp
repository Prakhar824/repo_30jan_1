#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	int n,i;
	struct node *head,*p;
	printf("\n enter the no. of nodes");
	scanf("%d",&n);
	head=(node*)malloc(sizeof(node));
	printf("\n enter the linked list elements");
	scanf("%d",&head->data);
	head->next=NULL;
	p=head;
	for(i=2;i<=n;i++)
	{
	
		p->next=(node*)malloc(sizeof(node));
		printf(" \n%u\n",p->next);
		p=p->next;
		scanf(" \n %d",&p->data);
		p->next=NULL;
	}
	p=head;
	while(p!=NULL)
	{
		printf(" \n%d",p->data);
		printf(" \n%u",p->next);
		p=p->next;
 }
	
	
}
