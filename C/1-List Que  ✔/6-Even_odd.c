// Check whether a number is Even or Odd
#include<stdio.h>
#include<conio.h>

void main(){

int num;
clrscr();
printf("Enter the Number");
scanf("%d",&num);

if(num%2==0){
    printf("%d is even",num);
}else{
    printf("%d is odd",num)    ;
}

getch();
}