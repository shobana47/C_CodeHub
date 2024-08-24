#include <stdio.h>

void selectionSort(int arr[], int n)
{
    int i,j,min,temp;
    for (i=0;i<n-1;i++)
    {
        min= i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min= j;
            }
        }

        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}

int main()
{
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (i=0;i<n;i++)
        {
        scanf("%d",&arr[i]);
        }

    selectionSort(arr, n);         // Call selection sort function

    printf("\nSorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
