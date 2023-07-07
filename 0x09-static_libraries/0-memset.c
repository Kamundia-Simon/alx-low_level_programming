/**
 *_memset - code that fills memory with a constant byte
 *@s: memory area for pointer
 *@n: bytes
 *@b: constant byte
 *Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
