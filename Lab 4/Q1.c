#include <stdio.h>

int main() {
    int a[100], temp[100];
    int n, i, j, k;
    int low, mid, high;
    int size;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    
 for(size = 1; size < n; size = size * 2) {

  for(low = 0; low < n - 1; low = low + 2 * size) {

     mid = low + size - 1;
         high = low + 2 * size - 1;

       if(mid >= n)
           mid = n - 1;

        if(high >= n)
       high = n - 1;

           i = low;
           j = mid + 1;
           k = low;

       while(i <= mid && j <= high) {

           if(a[i] < a[j]) {
          temp[k] = a[i];
            i++;
                }
    else {
    temp[k] = a[j];
      j++;
      }

        k++;
     }

      while(i <= mid) {
         temp[k] = a[i];
         i++;
          k++;
            }

          while(j <= high) {
                temp[k] = a[j];
                j++;
                k++;
            }

            for(i = low; i <= high; i++)
                a[i] = temp[i];
        }
    }

    printf("Sorted array: ");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}