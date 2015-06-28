struct s1 {
	int size;
	char arr[SIZE]; // size and SIZE should be the same for proper working, size >= 64 might lead to incorrect results..see notes
};


int64_t mystery6(struct s1 *s, int no)
{
	if (s->size <= 0)
		return 0;
	int index = 0;
	while (s->arr[index] != no && index < size) {
		index ++;
	}
	if (index >= size) {
		return 0; //unsuccessful search
	}
	return (int64_t)1 << index;

}
