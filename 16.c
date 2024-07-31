#include<stdio.h>  
 int main(){    
int a=10, b=20;      
printf("Before swap a=%d b=%d\n",a,b);      
a=a+b; 
b=a-b;   
a=a-b;   
printf("\nAfter swap a=%d b=%d\n",a,b);    
return 0;  
}  