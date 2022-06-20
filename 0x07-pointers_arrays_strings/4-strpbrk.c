#include "main.h"

/**
 * _strpbrk - matches any character specified
 * @s: This is the C string to be scanned.
 * @accept:character in str1 that matches one of the characters in str2
 *Return: string s that matches any character specified in accept
 **/
char *_strpbrk(char *s, char *accept)
{
int i, j;
char *p;

i = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (accept[j] == s[i])
{
p = &s[i];
return (p);
}
j++;
}
i++;
}

return (0);
}
