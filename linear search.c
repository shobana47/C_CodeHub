#include <stdio.h>

int linearSearch(int arr[], int n, int search)
{

    for (int i=0;i<n;i++)
    {
        if (arr[i]==search) {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n,search,index;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d",&search);

    index = linearSearch(arr,n,search);

    if (index != -1) {
        printf("Element %d found at index %d\n",search,index);
    } else {
        printf("Element %d not found in the array\n",search);
    }

    return 0;
}
