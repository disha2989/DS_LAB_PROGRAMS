#include<stdio.h>
struct student_info
{
int age;
int marks;
};
typedef struct student_info std;
std input()
{
std s;
printf("enter the age of the student\n");
scanf("%d",&s.age);
printf("enter the marks of the student\n");
scanf("%d",&s.marks);
return s;
}
int main()
{
std s1;
s1=input();
if(s1.age>20 && s1.marks<=100 && s1.marks>=0)
{
  printf("data entered is valid\n");
    if(s1.marks>65)
      printf("student is eligible to seek admission\n");
    else
      printf("student is not eligible to seek admission\n");
}
else
{
printf("data entered is invalid\n");
}
return 0;
}
