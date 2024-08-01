#include<stdio.h>
int addition(int x){
    if(x == 0){
        return 0;
    }
    else{
        return x+addition(x-1);
    }
}
int main(){
    int num;
    printf("enter a value\n");
    scanf("%d", &num);
    printf("%d\n", addition(num));

    return 0;
}