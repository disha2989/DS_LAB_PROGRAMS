#include<stdio.h>
#include<stdlib.h>
#define size 5
//struct structure
struct stack{
int s[size];
int top;
}st;
int stfull()
{
if(st.top>=size-1)
return 1;
else
return 0;
}
void push(int item)
{
st.top++;
st.s[st.top]=item;
}
int stempty()
{
if(st.top==-1)
return 1;
else
return 0;
}
int pop()
{
int item;
item=st.s[st.top];
st.top--;
return(item);
}
void display()
{
int i;
if(stempty())
printf("stack is empty\n");
else
{
for(i=st.top;i>=0;i--)
printf("%d\n",st.s[i]);
}
}

int main()
{
int item,choice,cont;
st.top=-1;
printf("IMPLEMENTATION OF THE STACK\n");

do
{
 printf("Main Menu\n");
 printf("1.Push\t2.Pop\t3.Display\t4.exit\n");
 printf("Enter your choice\n");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1: printf("enter the item to be pushed\n");
          scanf("%d",&item);
          if(stfull())
            {
             printf("stack is full\n");

           }
          else

              push(item);
              break;
  case 2: if(stempty())
          { 
          printf("empty stack!underflow\n");

           }
          else
             {
               item=pop();
               printf("the popped element is %d\n",item);
             }
               break;
  case 3: display();
          break;
  case 4: exit(0);
}
printf("do you want to continue?(if yes enter 1)\n");
scanf("%d",&cont);
}while(cont==1);
return 0;
}





























































