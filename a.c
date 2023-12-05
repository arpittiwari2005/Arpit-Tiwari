#include<stdio.h>
void main()
{
float x,y;
char ch;
printf("enter initials/n");
scanf("%d",&x);
printf("Enter\n c for credit\n d for debit\n b for statement\n");
scanf("%s",&ch);
switch(ch)
{
case 'c':
printf("enter credit amount\n");
scanf("%f",&y);
x=x+y;
printf("NEw amount=%f",x);
break;
case 'd':
printf("enter debit amount\n");
scanf("%f",&y);
if(x>=y)
{
x=x-y;
printf("NEwamount=%f",x);
}
else{
printf("insufficent amount in your account");
}
}
}
