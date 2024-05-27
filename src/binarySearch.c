#include <stdio.h>

int binarySearch(int array[], int low, int high, int item)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (array[mid] == item){
            return mid;
        }
        else if (array[mid] < item){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int size, item;

    printf("Enter the size of array:\n>> ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements:\n>> ");
    for (int i = 0; i < size; i++)
    {
        scanf(" %d", &arr[i]);
    }

    printf("Enter the item to search in the array.\n>> ");
    scanf("%d", &item);

    int result = binarySearch(arr, 0, size - 1, item);
    (result != -1) ? printf("The item was found at the index: %d\n\n", result) : printf("The item doesn't exist in the array.");
    return 0;
}