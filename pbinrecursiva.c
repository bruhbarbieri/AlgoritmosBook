#include <stdio.h>
#include <cs50.h>

int binarySearch(int *arr, int, int, int);

int main()
{
    int arr[5] = {1, 3, 5, 7, 9};
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("%d\n", binarySearch(arr, 9, 0, len));  // 1
    //printf("%d\n", binarySearch(arr, -1, 0, len)); //-1
    return 0;
}

int binarySearch(int *arr, int item, int low, int len)
{
    int mid = (low + len)/2;
    int guess = arr[mid];

    if (low > len)
    {
        return -1; //Not Found
    }

    else if (guess > item)
    {
        return binarySearch(arr, item, low, mid - 1);
    }
    else if (guess < item)
    {
        return binarySearch(arr, item, mid + 1, len);
    }
    return mid;
}
