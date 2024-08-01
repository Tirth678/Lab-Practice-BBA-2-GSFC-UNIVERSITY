#include<stdio.h>
int main(){
    int burger=10;
    float result;
    do
    {   
        result *= 0.10;
        printf("%f\n", result);
        result++;
        burger++;
    } while (burger<5);
    
// will solve it later

    return 0;
}