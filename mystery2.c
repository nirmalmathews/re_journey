bool mystery2 (struct s1 *s)
{
if (s == NULL)
	return 1;
char c = s->field_0x63_b;
if  ( c == 0)
	return 0;
else 
	return 1;
}
