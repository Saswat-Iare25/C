/* Linear Search Algorithm
 *
 * This program demonstrates the linear search technique, where each element
 * of the array is checked sequentially until the target value is found.
 *
 * Time Complexity:
 *  - Best case: O(1)
 *  - Worst case: O(n)
 *
 * Space Complexity:
 *  - O(1)
 *
 * Works on both sorted and unsorted arrays.
 */
#include <stdio.h>
#include <stdlib.h>
/*
 * Performs linear search on an integer array.
 *
 * @param arr   Pointer to the array
 * @param size  Number of elements in the array
 * @param val   Value to search for
 *
 * @return 1 if the value is found, otherwise 0
 */
int linearsearch(int *arr, int size, int val)
{
    int i;
    for (i = 0; i < size; i++)
    {
        // Compare each element with the target value
        if (arr[i] == val)
            return 1;
    }
    return 0;
}

int main()
{
    int n, i, v;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);  // Taking input for the size of Array

    int *a = (int *)malloc(n * sizeof(int));
    printf("Enter the contents for an array of size %d:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);  // accepts the values of array elements until the
                             // loop terminates

    printf("Enter the value to be searched:\n");
    scanf("%d", &v);  // Taking input the value to be searched
    if (linearsearch(a, n, v))
        printf("Value %d is in the array.\n", v);
    else
        printf("Value %d is not in the array.\n", v);

    free(a);
    return 0;
}
