
#include <stdio.h> 
void CountingEvenOdd(int arr[], int arr_size) 
{ 
	int even_count = 0; 
	int odd_count = 0; 
	for (int i = 0; i < arr_size; i++) { 
		if (arr[i] & 1 == 1) 
			odd_count++; 
		else
			even_count++; 
	} 
	printf("Number of even elements = %d \nNumber of odd "
		"elements = %d\n", 
		even_count, odd_count); 
} 
int main() 
{ 
	int arr[] = { 2, 3, 4, 5, 6 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	CountingEvenOdd(arr, n); 
}
