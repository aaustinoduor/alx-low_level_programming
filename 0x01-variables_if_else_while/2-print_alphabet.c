#include <stdio.h>
#include <ctype.h>

/**
 * Main - Entry
 *
 * Return Always 0 (success)
 */

int main(void)
{
int LowerCase = 'a';
while(LowerCase <= 'z')
{
putchar(LowerCase);
LowerCase += 1;
}
putchar('\n');
return (0);
}
