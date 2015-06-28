

int mystery7(char *s)
{
	if (s == NULL)
		return 0;
	char *p = s; // just to make sure the source code resembles the disassembly

	while (*p != '\0') 
		p++;
	int len;
	len = p - s;	
	return len & 0x3FFFFFFF; // this clears the last 2 bits
}
