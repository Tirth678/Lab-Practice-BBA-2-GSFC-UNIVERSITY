#include<stdio.h>
int main(){
    int num;
    printf("enter a value\n");
    scanf("%d", &num);
    if(num%2 == 0){
        printf("value is even\n");
    }
    else{
        printf("value is odd\n");
    }

    return 0;
}