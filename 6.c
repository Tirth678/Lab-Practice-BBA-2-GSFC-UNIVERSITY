#include<stdio.h>
int main(){
    int principle, rateOfIntrest, NumOfYears;
    float result;
    printf("enter value of principle\n");
    scanf("%d", &principle);
    printf("enter rate of intrest\n");
    scanf("%d", &rateOfIntrest);
    printf("enter number of years\n");
    scanf("%d", &NumOfYears); 
    result = (principle*rateOfIntrest*NumOfYears)/3;
    printf("simple intrest = %f\n", result);


    return 0;
}