/**
 * _isupper - Prints if the characters are lowercase or not
 * 1 for uppercase 0 for lowercase
 * @c: Character being tested
 * Return: 1 for uppercase, 0 for lowercase
 */
int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}
