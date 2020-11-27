#include <stdio.h>
#include <stdlib.h>
void create();
void display();
void sort();
void reverse();
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
    printf("\n1. Create \n2. Display\n3. Sort\n4. Reverse\n5. Exit \n");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: create(); break;
        case 2: display();break;
        case 3: sort();
                break;
        case 4: reverse();
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

void sort()
{
struct node *temp,*ptr,*ptr2;
int a;
temp=head;
ptr=head;
for(temp=head;temp!=NULL;temp=temp->next)
  {
     for(ptr=temp;ptr!=NULL;ptr=ptr->next)
        {
            if(ptr->data<temp->data)
               {
                  a=temp->data;
                  temp->data=ptr->data;
                  ptr->data=a;
               }
        }
   }


}


void reverse()
{
    struct node *prev=NULL,*current=head, *next=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
}








/*  while(temp->next!=NULL)
       {
                
                while(ptr->next!=NULL)
               {
                    ptr=ptr->next;
                  if ((ptr->data)<(temp->data));
                     {
                       while(ptr2->next!=ptr)
                          {
                             
                       a=ptr->data;
                       ptr->data=ptr2->data;
                       ptr2->data=a;
                            }
                     }
               }
          temp=temp->next;
        }

*/




























