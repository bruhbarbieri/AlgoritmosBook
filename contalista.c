#include <stdio.h>
#include <string.h>
#include <cs50.h>

int count(int *arr, int index) {
	if (arr[index] == 0)
		return 0;
	return 1 + count(arr, index + 1);
}

int main(void) {
	int arr[5] = { 1,2,3,4,5 };
	printf("%d\n", count(arr, 0));

	return 0;
}