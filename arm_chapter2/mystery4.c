int mystery4(void *s1)
{
	if (s1 == NULL)
		return 0;
	else
		return *((int32_t *)s1 - 2);

}
