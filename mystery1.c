#include <stdio.h>
#include <stdint.h>

int mystery1(char *x, int *res)
{
	int is_neg = 0;
	if (*x == '-') {
		is_neg = 1;
		x ++;
	} else  if (*x == '+') {
		x ++;
	}
	// skip past leading zeros
	while (*x == 0)
		x ++;
	int index = 0;
	int init_val = 0xa;
	int64_t acc = 0, temp;

	char c = x[index ++];
	temp = acc * init_val;
	c = c - 0x30; 

	while (index <= 12) {
		if (c >= 0 && c <= 9) {
			acc = temp + c;		
			c = x[index ++];
			temp = acc * init_val;
			c = c - 0x30;
		}
		else {
			break;
		}
	} 
	if (index > 12 )
		return 0;
	if (is_neg == 1)
		acc = -acc;
	*res = acc;
	return 1;
}



int main(int argc, char *argv[])
{
	if (argc != 2)  {
		printf("usage : %s <string>\n", argv[0]);
		return -1;
	}
	int val, ret;
	ret = mystery1(argv[1], &val);
	if ( ret == 1)
		printf("atoi of %s is %d\n",argv[1], val);
	else 
		printf("length exceeded\n");
	return 0;
}
