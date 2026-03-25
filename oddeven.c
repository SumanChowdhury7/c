#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
   scanf("%d", &n);

   if(n%2 == 0){
    printf(" %d even number", n);
   }
   else{
    printf(" %d odd number", n);
   }
   return 0;
}
