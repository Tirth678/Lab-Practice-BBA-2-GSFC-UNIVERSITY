#include <stdio.h>
#include <string.h>
int main() {
    char one[20];  
    char two[10];
    printf("Enter input for the first string: ");
    scanf("%19s", one);  
    printf("Enter input for the second string: ");
    scanf("%9s", two);  
    strcat(one, two);
    printf("Concatenated string: %s\n", one);
    return 0;
}
