#include <stdio.h>
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void printArray(int arr[], int size)
{
    int i;
    i = size - 2;
    printf("%d\n", arr[i]);
}
int main(void)
{
    int ele, arr[3];
    scanf("%d", &ele);
    for (int i = 0; i < ele; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[j]);
        }
        int n = sizeof(arr) / sizeof(arr[0]);
        quickSort(arr, 0, n - 1);
        printArray(arr, n);
    }
    return 0;
}
