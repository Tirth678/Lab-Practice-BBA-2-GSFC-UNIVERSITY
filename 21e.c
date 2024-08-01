#include<stdio.h>
int main(){
    for(int i=5; i<100000; i++){
        if(i%5 == 0){
            printf("%d\n", i);
        }
    }

    return 0;
}