#include <stdio.h>
char arr[256];

void init()
{
	int i;
	for (i = 0; i < 256;  i++)
		arr[i] = i;
}

int mystery8(char *s1, char *s2, int len)
{
	if (len <= 0)
		return 0;
	char *p, *q;
	p = s1;
	q = s2;
	/* it would be much simpler to write len-- != 0 and then check if len > 0 after the while loop, but this is more
	 * closer to the disassembly */
	while (--len != 0 && *p != '\0') {
		if (arr[*p] == arr[*q]) {
			p ++;
			q ++;
		}
		else 
			break;
	}
	if (len >= 0) {
		return *p - * q;	
	}
	return 0;

}

int main(int argc, char *argv[])
{
	if (argc != 4)  {
		printf("%s <string 1> <string 2> <no of chars to compare>\n", argv[0]);
		return -1;
	}
	init();
	int n = atoi(argv[3]), c;

	c = mystery8(argv[1], argv[2], n);
	printf("diff is %d\n", c);
}
