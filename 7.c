#include<stdio.h>
#define PI 3.14
int main(){
    int radius;
    printf("enter value of radius\n");
    scanf("%d", &radius);
    float area = PI*radius*radius;
    printf("area of circle = %f\n",area);

    return 0;
}