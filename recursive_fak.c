#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int n) {
   if(n == 0) {
      return 1;
   }
   else {
      return n * factorial(n-1);
   }
}

int main(int argc, char *argv[]) {
	
	int num;

   printf("Fakt�riyelini hesaplamak istedi�iniz say�y� girin: ");
   scanf("%d", &num);

   printf("%d! = %d\n", num, factorial(num));
   
   
   
   
   
   return 0;
}
