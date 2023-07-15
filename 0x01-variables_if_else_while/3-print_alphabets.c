#include <stdio.h>

/**
 * Main - Entry
 *
 * Return Always 0 (success)
 */

int main(void)
{
int LowerCase = 'a';
int UpperCase = 'A';
while(LowerCase <= 'z')
{
putchar(LowerCase);
LowerCase += 1;
}
while(UpperCase <= 'z')
{
putchar(UpperCase);
UpperCase += 1;
}
putchar('\n');
return (0);
}
