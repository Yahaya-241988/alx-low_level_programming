/**
* _memset - fills the fisrt n bytes
* of the memory area pointed to by s
* with the constant byte b
* @s: the pointer
* @b: the byte
* @n: first n bytes
* Return: s
*/
char *_memset(char *s, int b, unsigned int n)
{
	char *ptr = s;

	while (n--)
{
	*ptr++ = (unsigned char)b;
}
	return (s);
}
