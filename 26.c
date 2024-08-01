#include<stdio.h>
int main(){
    int n;
    printf("enter a random value\n");
    scanf("%d", &n);
    for(int i=0; i<10; i++){
        printf("%dx%d=%d\n", n,i,n*(i+0));
    }

    return 0;
}