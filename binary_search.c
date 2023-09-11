#include <stdio.h>
#include <stdlib.h>
int binary_search(int a[], int size, int key)
{
    int low = 0, high = size, mid;
    while (low <= high)
    {
        mid = (low+high)/2;
        if (a[mid]== key) return mid;
        else if (a[mid] < key) low = mid + 1 ; 
        else high = mid - 1;
    }
    return -1;
}
int binary_search_recursive(int a[], int low, int high, int key)
{
    int mid;
    if(low > high) return -1;
    else
    {
        mid = (low+high)/2;
        if (a[mid]== key) return mid;
        else if (a[mid] < key) binary_search_recursive(a, mid + 1,high,key) ; 
        else binary_search_recursive(a,low,mid-1,key);
    }
    
}
 int main(void)
{
    int a[] = {5,8,10,44,67,87,89,90,101};

    int size = sizeof(a)/sizeof(a[0]);
    int key=0;
    printf("enter key to search\n");
    scanf("%d",&key);
    int index = binary_search_recursive(a,0,size,key);
    if (index >= 0)
    {
        printf("position of the key is %d\n",index);
    }else
    {
       printf("key not found\n"); 
    }
    return 0;
}