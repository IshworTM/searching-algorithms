#include <stdio.h>

int linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, item;

    printf("Enter the size of array:\n>> ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n>> ");
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
    }

    printf("Enter the item to search in the array.\n>> ");
    scanf("%d", &item);

    int result = linearSearch(arr, n, item);
    (result != -1) ? printf("The item was found at the index: %d\n\n", result) : printf("The item doesn't exist in the array.");
    
    return 0;
}