#include <stdio.h>

unsigned short int i;			/* counter */
const char *str = "Goodbye Universe";

int
main()
{
   printf("What I mention %d times is probably true\n", 10);
   for (i = 0; i < 10; ++i) {
      printf("%d %s\n", i, str);
   }

   exit(0);
}
