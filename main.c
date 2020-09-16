#include <math.h>
#include "AmstrongNumber.h"

int ArmstrongNumber(int n);

int main() {
   int n, flag;
   printf("Enter a positive integer: ");
   scanf("%d", &n);

   // check Armstrong number
   flag = ArmstrongNumber(n);
   if (flag == 1)
      printf("%d is an Armstrong number.", n);
   else
      printf("%d is not an Armstrong number.", n);
   return 0;
}

