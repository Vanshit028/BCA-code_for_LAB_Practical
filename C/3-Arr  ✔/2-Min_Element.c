#include<stdio.h>
#include<conio.h>

void main(){

int arr[100],range,i,min;
clrscr();
printf("Enter the range of numbers");
scanf("%d",&range);

min=arr[0];
for(i=1;i<range;i++){
    if(min>arr[i]){
        min=arr[i];
    }
}

printf("Minimum value is %d",min);

getch();
}