#include<stdio.h>
int main(){
    int a=1;
    while(a<1000){
        if(a%2 != 0){
            printf("%d\n", a);
            a++;
        }
    }

    return 0;
}