int _putchar(char c)
{
    return (write(1, &c, 1));
}
int _islower(int c)
{
    if ('a' <= c && c <= 'z')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int _isalpha(int c)
{
    if ('A' <= c && c <= 'Z')
    {
        return (1);
    }
    if ('a' <= c && c <= 'z')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int _abs(int n)
{
    if (n >= 0)
    {
        return (n);
    }
    if (n < 0)
    {
        return ((n * -1));
    }
    return (0);
}

int _isupper(int c)
{
    if ('A' <= c && c <= 'Z')
        return (1);
    else
        return (0);
}

int _isdigit(int c)
{
    if ('0' <= c && c <= '9')
        return (1);
    else
        return (0);
}

int _strlen(char *s)
{
    int len = 0;

    while (*s != '\0')
    {
        s++;
        len++;
    }
    return (len);
}

void _puts(char *str)
{
    while (*str != '\0')
    {
        _putchar(*str);
        str++;
    }
    _putchar('\n');
}

char *_strcpy(char *dest, char *src)
{
    char *cpyresult = dest;

    if ((dest != '\0') && (src != '\0'))
    {
        while (*src != '\0')
        {
            *dest++ = *src++;
        }
        *dest = '\0';
    }
    return cpyresult;
}

char *_strncpy(char *dest, char *src, int n)
{
    int k;

    for (k = 0; k < n && src[k] != '\0'; k++)
        dest[k] = src[k];
    for (; k < n; k++)
        dest[k] = '\0';
    return (dest);
}

// TODO
int _atoi(void)
{

    return 0;
}

char *_strcat(char *dest, char *src)
{
    int i, j;

    for (i = 0; dest[i] != '\0'; i++)
        ;
    for (j = 0; src[j] != '\0'; j++)
    {
        dest[i + j] = src[j];
    }
    dest[i + j] = '\0';
    return (dest);
}

char *_strncat(char *dest, char *src, int n)
{
    int i, j;

    for (i = 0; dest[i] != '\0'; i++)
        ;
    for (j = 0; src[j] != '\0' && j < n; j++)
    {
        dest[i + j] = src[j];
    }
    dest[i + j] = '\0';
    return (dest);
}

int _strcmp(char *s1, char *s2)
{
    while (*s1)
    {
        if (*s1 != *s2)
            break;
        s1++;
        s2++;
    }
    return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

char *_memset(char *s, char b, unsigned int n)
{
    char *p = s;

    while (n--)
    {
        *p++ = b;
    }
    return (s);
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *p = dest;

    while (n--)
    {
        *p++ = *src++;
    }
    return (dest);
}

char *_strchr(char *s, char c)
{
    char *p = s;

    for (; *p != '\0'; p++)
    {
        if (*p == c)
            return (p);
    }
    if (*p == c)
        return (p);
    return (0);
}

int _strlen_recursion(char *s)
{
    if (*s == '\0')
    {
        return (0);
    }
    else
    {
        return (1 + _strlen_recursion(s + 1));
    }
}

unsigned int _strspn(char *s, char *accept)
{
    char *p = s;
    char *o = accept;
    int len = 0, j, z;

    for (j = 0; p[j] != '\0'; j++)
    {
        if (len != j)
            break;
        for (z = 0; o[z] != '\0'; z++)
        {
            if (p[j] == o[z])
                len++;
        }
    }
    return (len);
}

char *_strpbrk(char *s, char *accept)
{
    int j, k, pos, Z = 0;

    for (j = 0; s[j] != '\0'; j++)
        ;

    pos = j;

    for (j = 0; accept[j] != '\0'; j++)
    {
        for (k = 0; s[k] != '\0'; k++)
        {
            if (accept[j] == s[k])
            {
                if (k <= pos)
                {
                    pos = k;
                    Z = 1;
                }
            }
        }
    }
    if (Z == 1)
    {
        return (&s[pos]);
    }
    else
    {
        return (0);
    }
}

char *_strstr(char *haystack, char *needle)
{
    char *h, *n;

    if (haystack == '\0' || needle == '\0')
        return (0);
    for (; *haystack; haystack++)
    {

        for (h = haystack, n = needle; *h && *n && (*h == *n); h++, n++)
            ;
        if (*n == '\0')
            return (haystack);
    }
    return (0);
}

