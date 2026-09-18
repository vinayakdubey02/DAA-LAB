#include<stdio.h>
int main()
{ int n ,i;
    int arr[n];
      printf("Enter the number of elements:");
    scanf("%d",&n);
     for(i=0;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The elements in the array are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
      return 0;
}