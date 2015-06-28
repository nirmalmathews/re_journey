#include <stdio.h>

int mystery9(char *s1, char *s2)
{
	char *p, *q;
	p = s1;
	q = s2;
	while (*p != '\0' && *p == *q) {
		p ++;
		q ++;
	}
	return *p - *q;
}

int main(int argc, char *argv[])
{
	if (argc != 3) {
		printf("Usage: %s <string 1> <string 2>\n", argv[0] );
		return -1;
	}
	int c;
	c = mystery9(argv[1], argv[2]);
	printf("diff = %d\n", c);
	return 0;
}

