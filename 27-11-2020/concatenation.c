#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void create(struct node **);
void display(struct node *);
void concat(struct node *, struct node *);

int main(int argc, char **argv)
{
    struct node *head1=NULL, *head2=NULL;
    printf("Create two list\n");
    printf("Creating List one\n");
    create(&head1);
    printf("Creating List two\n");
    create(&head2);
    concat(head1,head2);
    display(head1);
}

void create(struct node **hptr)
{
   struct node *newnode,*temp;
    int item;
    int  choice=1;

    do
    {
    newnode =(struct node *) malloc (sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d",&item);
    newnode->data=item;
    newnode->next=NULL;
    printf("Do u want add element in the list:(if yes enter 1)\n");
    scanf("%d", &choice);
    
   
    
    if (*hptr==NULL)
     { 
       
      *hptr=newnode; 
     
     }
     else 
    {
    temp=*hptr;
       while(temp->next!=NULL)
       {
                temp=temp->next;
        }
      temp->next=newnode;
      newnode->next=NULL;
      
   }  
    }while (choice==1);
}

void concat (struct node *temp1, struct node *temp2)
{

     while(temp1->next!=NULL)
         temp1=temp1->next;
        
      temp1->next=temp2;
   
}

void display(struct node *ptr)
{
    
       
    if(ptr==NULL)
    {
        printf("Nothing to print\n");
    }
    else
    {
        while(ptr!=NULL)
       {
        printf("%d ",ptr->data);
        ptr=ptr->next;
       }
    }
printf("\n");
    
}
