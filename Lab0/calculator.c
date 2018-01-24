#include <stdio.h>
int main()
{
int x,y;

printf("Enter x: ");
scanf("%d",&x);
printf("Enter y: ");
scanf("%d",&y);

printf("\nHere are the results: \n");
printf("x+y = %d\n", x+y);
printf("x*y = %d\n", x*y);
printf("x/y = %d\n", x/y);
printf("x%%y = %d\n", x%y);

return 0;
}
