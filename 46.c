#include <stdio.h>
#include <string.h>
int main() {
    char one[10];
    char two[10];
    printf("Enter input for the first string: ");
    scanf("%9s", one);  
    printf("Enter input for the second string: ");
    scanf("%9s", two);  
    if (strcmp(one, two) == 0) {
        printf("Strings are same\n");
    } else {
        printf("Strings are NOT same\n");
    }
    return 0;
}
