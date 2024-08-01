#include<stdio.h>
int add(int x, int y){
    int result;
    result = x+y;
    return result;
}
int main(){
    int a,b;
    printf("enter first value\n");
    scanf("%d", &a);
    printf("enter second value\n");
    scanf("%d", &b);
    printf("addition of 2 values = %d\n", add(a,b));

    return 0;
}