#include <stdio.h>
int main(void)
{
   int num = 12;
   printf("%d\n", num);
   printf("hello");
   printf("%d %d \n", num, num++);
   printf("%d %d %d %d %d", ++num, num++, num++, num, ++num);
   return 0;
}
