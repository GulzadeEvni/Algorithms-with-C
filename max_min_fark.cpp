#include <stdio.h>

int main() {
   int n, i;
   int arr[50];
   int max, min, diff;

   printf("Dizi boyutunu girin: ");
   scanf("%d", &n);

   printf("Diziyi girin: ");
   for(i=0; i<n; i++) {
      scanf("%d", &arr[i]);
   }

   // En b�y�k ve en k���k elemanlar� bul
   max = arr[0];
   min = arr[0];
   for(i=1; i<n; i++) {
      if(arr[i] > max) {
         max = arr[i];
      }
      if(arr[i] < min) {
         min = arr[i];
      }
   }

   // Fark� hesapla ve yazd�r
   diff = max - min;
   printf("En b�y�k eleman: %d\n", max);
   printf("En k���k eleman: %d\n", min);
   printf("Aralar�ndaki fark: %d\n", diff);

   return 0;
}

