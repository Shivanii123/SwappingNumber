#include<stdio.h> 
#include<iostream.h>
 int main()    
{    
int a,b;   
printf("Enter the value of A \n");
scanf("%d", &a);
printf("Enter Value of B ");
scanf("%d", &b); 
printf("Before swap a=%d b=%d",a,b);      
a=a+b; 
b=a-b;    
a=a-b;    
printf("\nAfter swap a=%d b=%d",a,b);    
return 0;  
}   
