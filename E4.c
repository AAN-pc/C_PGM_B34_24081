#include <stdio.h>
int a=5;
int main()
{
printf("Value of of global variable g in main(): %d\n", a);
a = 20;
printf("Value of global variable g after display(): %d\n", a);
return 0;
}
