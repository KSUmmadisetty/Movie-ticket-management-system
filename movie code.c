
#include<stdio.h>
#include<stdlib.h>
int max=50;
struct costumer
{
 int id;
 char c_name[50];
 char M_name[50];
 char M_time[50];
 int tickets;
 int top;
}c[50];
int top=-1;
void push()
{
 top++;
 int id,tickets,screen;
 char name[50];
 printf("\nEnter Ticket Id: ");
 scanf("%d",&c[top].id);
 printf("\nEnter name: ");
 scanf("%s",&c[top].c_name);
 printf("\nEnter Movie name: ");
 scanf("%s",&c[top].M_name);
 printf("\nEnter Movie time: ");
 scanf("%s",&c[top].M_time);
 printf("\nEnter no of seats: ");
 scanf("%d",&c[top].tickets);
}
void pop()
{
 if(top==-1)
 printf("\nStack is empty\n");
 else
 {
 printf("\nid:%d\tname:%s is deleted",c[top].id,c[top].c_name);
 top--;
 }
}
int main()
{
 int i,choice,option=1,s=1;
 while(option)
 {
 printf("\nMenu\n");
 printf("1.Insert new ticket\n");
 printf("2.Cancel of ticket\n");
 printf("3.Display total tickets\n");
 printf("4.exit\n");
 printf("\nEnter your choice:");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 push();
 break;
 case 2:
 pop();
 break;
 case 3:
 printf("\n ******XYZ Cinemas******\n");
 printf("---------------------------------------------------------------------------------
\n");
 printf("\nS.no\tName\t ID\tMovie Name\tMovie Time\tNo.of 
seats\tTotalCost\n");
 for(i=top;i>=0;i--)
 {
 printf("%d\t",s++);
 printf("%s\t",c[i].c_name);
 printf("%d\t",c[i].id);
 printf("%s\t\t",c[i].M_name);
 printf("%s\t\t",c[i].M_time);
 printf("%d\t\t",c[i].tickets);
 printf("Rs.%d\n",(c[i].tickets)*130);
 }
 printf("----------------------------------------------------------------------------------
\n");
 case 4:
 exit(1);
 break;
 }
 fflush(stdin);
 printf("\nTo continue enter 1, to exit enter 0: ");
 scanf("%d",&option);
 }
 return 0;
}