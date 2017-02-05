#include<stdio.h>
#include<conio.h>
#include<malloc.h>
typedef struct node
{
	int info;
	struct node* next;
}node;
node* create(node*,int);
void display(node*);
node* findptr(node*,int);
void del(node*);
int main()
{
	node* head=NULL;
	int ch,n;
	node* ptr;
     do
     { 
     printf("******MENU*******\n");
     printf("1.to create linked list \n");
     printf("2.to delete the specified node\n");
     printf("3.to display the contents of list\n");
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
     	printf("enter the key elemnt to b delted \n");
     	scanf("%d",&n);
     	ptr=findptr(head,n);
     	del(ptr);
     	break;
     	case 3:
		 display(head);
		 break;
		 case 4:break;
     	default:printf("wrong choice");
	        }
 }while(ch!=4);
 return 0;
	 }
	 node* create(node* head,int n)
	 {
	 	node* p,*t;
	 	p=(node*)malloc(sizeof(node));
	 	p->next=NULL;
	 	p->info=n;
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
	 node* findptr(node *head,int key)
	 {
	 	node *ptr;
	 	while(head!=NULL)
	 	{
	 		if(head->info==key)
	 		{
	 			ptr=head;
	 			printf("the given pointer is %d\n",ptr);
			 }
		 head=head->next;
		 }
		 return ptr;
	 }
void del(node *ptr)
{
	node* temp;
			temp=ptr->next;
			ptr->info=temp->info;
			ptr->next=temp->next;
			temp->next=NULL;
			free(temp);
}
void display(node *head)
{
	while(head!=NULL)
	{
		printf("%d\n",head->info);
		head=head->next;
	}
}
