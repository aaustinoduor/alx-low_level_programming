/**
 * _isdigit - Prints if the character is a digit or not
 * @c: Character being tested
 * Return: 0 for not a digit, 1 for a digit
 */
int _isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}
