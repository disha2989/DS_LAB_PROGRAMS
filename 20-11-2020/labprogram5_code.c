#include <stdio.h>
#include <stdlib.h>
void create();
void display();
void insert_at_node(int);
void insert_before();
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
int main()
{
    int choice,ele;
    do
    {
    printf("\n1. Create \n2. Display\n3. Insert before \n4. Insert at particular position\n5. Exit \n");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: create(); break;
        case 2: display();break;
        case 3: insert_before();
                break;
        case 4 :printf("enter the position where new element has to be inserted\n"); 
                scanf("%d",&ele);
                insert_at_node(ele);
                break;
        default: exit(0);
    }
    }while(choice==1 || choice==2 || choice==3 || choice==4);
  return 0;
}

void create()
{
   struct node *newnode,*temp;
    int item;
    newnode =(struct node *) malloc (sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d",&item);
    newnode->data=item;
    if (head==NULL)
     { 
       newnode->next=NULL;
      head=newnode; 
      printf("Node created\n");
     }
     else 
    {
    temp=head;//transversing
       while(temp->next!=NULL)
       {
                temp=temp->next;
        }
      temp->next=newnode;
      newnode->next=NULL;
       printf("Node created\n");
   }  
}




 void insert_before()
 {
        struct node *newnode;
    int ele;
    printf("Enter the element : ");
    scanf("%d",&ele);
    
    newnode=(struct node*)malloc(sizeof(struct node));
    
    newnode->data =ele;
    newnode->next=head;
    head=newnode;
    

 }

void insert_at_node(int a)
 {
    struct node *newnode,*temp;
    int i=1,ele;
    printf("Enter the element : ");
    scanf("%d",&ele);
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data =ele;
    while (i<(a-1))
        {
          
           temp=temp->next;
    
           i++;
        } 
         newnode->next=temp->next; 
         temp->next=newnode;
           

 }



void display()
{
    struct node *ptr=NULL;
    ptr=head;
     
    if(ptr==NULL)
    {
        printf("list empty!!!\n");
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
