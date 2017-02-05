#include<stdio.h>
#include<conio.h>
#include<malloc.h>
typedef struct node
{
	int data;
	struct node *next;
	
}node;
void swap(int *a,int *b);
void pairswap(node *head)
{
	node *temp=head;
	while(temp!=NULL && temp->next!=NULL)
	{
		swap(&temp->data,&temp->next->data);
		temp=temp->next->next;
	}
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}


 node* create(node* head,int n)
	 {
	 	node *p,*t;
	 	p=(node*)malloc(sizeof(node));
	 	p->next=NULL;
	 	p->data=n;
	 	if(p!=NULL)
	 	{
	 	if(head==NULL)
	 	{
	 		head=p;
	 		}
	 		else
	 		{
	 			t=head;
	 			while(t->next!=NULL)
	 			t=t->next;
	 			t->next=p;
	 			}
	 		}
	 		else
	 		printf("not enough memory");
	 			return head;
	 }
void print(node *node)
{
	while(node!=NULL)
	{
		printf("%d",node->data);
		node=node->next;
	}
}
int main()
{
	node *head=NULL;
	int n,ch;
	do
     { 
     printf("******MENU*******\n");
     printf("1.to create linked list \n");
     printf("2.to swap nodes\n");
     printf("3.to display the contents  \n");
     printf("4.to exit\n");
     printf("enter your choice\n");
     scanf("%d",&ch);
     switch(ch)
     {
     	case 1:
     	printf("enter the elemnt to b inserted\n");
     	scanf("%d",&n);
     	head=create(head,n);
     	break;
     	case 2:
     	pairswap(head);
     	break;
     	case 3:
		 print(head);
		 break;
		 case 4:break;
     	default:printf("wrong choice");
	        }
 }while(ch!=4);
			  	  	return 0;
			  	  	getch();
}
