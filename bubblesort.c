/* Bubble sort is all about comparision between the adjacent bytes
Ex: a = {7,5,6,4,3}
Iteration 1:             Iteration 2:            Iteration 3:          Iteration 4: 
            5 7 6 4 3                5 6 4 3 7              5 4 3 6 7               4 3 5 6 7
            5 6 7 4 3                5 4 6 3 7              4 5 3 6 7               3 4 5 6 7
            5 6 4 7 3                5 4 3 6 7              4 3 5 6 7               3 4 5 6 7
            5 6 4 3 7                5 4 3 6 7              4 3 5 6 7               3 4 5 6 7
*/
#include<stdio.h>
void bubble_sort(int a[], int size)
{
    int i,j,temp=0,flag=0;
/* flag is to check if there are any comparisions between the current byte n next byte in the interation.*/
    for(i=0;i<size;i++)
    {
        flag=0;
        for(j=0;j<size-1-i;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag=1;
            }
        }
        if(flag==0)
        break;
    }
}

int main(void)
{
    int a[] = {7,45,4,8,76,56,90};
    int i,size = sizeof(a)/sizeof(a[0]);
    printf("before sorting\n");
    for(i=0;i<size;i++) printf("%d\t",a[i]);
    printf("\n");
    bubble_sort(a,size);
    printf("after sorting\n");
    for(i=0;i<size;i++) printf("%d\t",a[i]);
    printf("\n");

}