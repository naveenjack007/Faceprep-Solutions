#include <stdio.h>
 
void segregate0and1(int array[], int size)
{
    int left = 0, right = size-1;
 
    while (left < right)
    {
        while (array[left] == 0 && left < right)
            left++;
        while (array[right] == 1 && left < right)
            right--;
        if (left < right)
        {
            array[left] = 0;
            array[right] = 1;
            left++;
            right--;
        }
    }
}
 
int main()
{
    
    int array_size, i;
    scanf("%d",&array_size);
    int arr[array_size];
    for (i = 0; i < array_size; i++)
        scanf("%d ",&arr[i]);
 
    segregate0and1(arr, array_size);
    for (i = 0; i < array_size; i++)
        printf("%d", arr[i]);
    getchar();
    return 0;
}
