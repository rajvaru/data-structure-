#include<stdio.h>
void main()
{
	int n;
	printf("enter the number  : ");
	scanf("%d",&n);
	int fact=1;
	printf("%d",fact);
}
int factorial(int n)
{
	for(int i=1;i<=n;i++)
	{
		int fact=fact*i;
	}
	return fact;
}

// #include <stdio.h>

// void deleteFromSortedArray(int arr[], int n, int num) {
//     int i, j;
//     int found = 0;

//     // Find the position of the number to be deleted
//     for (i = 0; i < n; i++) {
//         if (arr[i] == num) {
//             found = 1;
//             break;
//         }
//     }

//     // If the number is found, delete it by shifting elements to the left
//     if (found) {
//         for (j = i; j < n - 1; j++) {
//             arr[j] = arr[j + 1];
//         }
//         printf("Number %d deleted from the array.\n", num);
//     } else {
//         printf("Number %d not found in the array.\n", num);
//     }
// }

// int main() {
//     int n, num;
//     printf("Enter the size of the array: ");
//     scanf("%d", &n);

//     int arr[n];
//     printf("Enter the elements of the array (sorted in ascending order):\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter the number to delete: ");
//     scanf("%d", &num);

//     deleteFromSortedArray(arr, n, num);

//     printf("Array after deletion:\n");
//     for (int i = 0; i < n - 1; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }