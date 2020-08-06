#include <stdio.h> 
 
int main()
 
{
 
   int n, rev = 0;
 
   printf("Please enter a number to reverse\n");
 
   scanf(""%d"",&n);
 
 
 
   while (n != 0)
 
   {
 
      rev = rev * 10;
 
      rev = rev + n%10;
 
      n = n/10;
 
   }
 
 
 
   printf("The reverse of entered number is %d\n", rev);
 
   return 0;
 klsfnslfn
}
