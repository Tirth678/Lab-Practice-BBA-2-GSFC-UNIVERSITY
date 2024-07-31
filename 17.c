#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int x;
    printf("enter any value\n");
    scanf("%d", &x);
    printf("orginal value = %d\n", x);
    int result = abs(x);
    printf("aboslute value = %d\n", result);
    return 0;
}