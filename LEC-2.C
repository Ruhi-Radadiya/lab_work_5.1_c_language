#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter A:");
scanf("%d",&a);
if(a>0){
       printf("this number is positive...");
       }else if(a<0){
		printf("this number is negative...");
		    }else if(a==0){
				printf("this number is neutral...");
				  }
getch();
}