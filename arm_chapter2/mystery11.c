
#define PTR_ADD(s, off) ((void *)((uint64_t)(s) + (off)))
#define GET_VAL_CHAR(ptr, offset) (*((char *)(ptr) + (offset)))
#define GET_VAL_SHORT(ptr, offset) (*((short *)(ptr) + (offset)))
#define GET_VAL_INT(ptr, offset) (*((int *)(ptr) + (offset)))

mystery11(struct unknown1 *s, int arg2, int *arg3)
{
	struct unknown2 *s1, *s3;
	struct unknown3 *s2;
	struct unknown4 *s4, *s8;
	short index = s->field0x5a_h;
	s1 = PTR_ADD(s, index * 4);
	s8 = s1->field0x84_p;
	if (s->field0x3a_h == 0) {
		int *s7 = PTR_ADD(s, 0x20);
		index = s->field0x5a_h;
		s2 = PTR_ADD(s, index * 2);
		short index1 = s2->field0x5c_h;
		s3 = PTR_ADD(s, index * 4);
		s4 = s3->field0x84_p;
		short s_val;
		struct unknown5 *s5;
		struct unknown6 *s6;
		s_val = s4->field0xc_h;
		s5 = s4->field0x40_p;
		s_val = s_val + (index1  * 2);
		short c, d;
		int e;
		c = GET_VAL_SHORT(s5, s_val);
		d = GET_VAL_SHORT(s4, 0x12);
		e = c & d;
		s6 = PTR_ADD(s5, e);
		sub_101651c(s4, s6, s7);

	}
	short c, d;
	int e;
	c = GET_VAL_SHORT(s, 0x34);
	d = GET_VAL_SHORT(s, 0x28);
	e = c + d;
	char a;
	a = GET_VAL_CHAR(s8, 2);
	int ret_val = 0;
	if (a == 0) {
		ret_val = GET_VAL_INT(s, 0x20); 
	}
	short f = GET_VAL_SHORT(s, 0x36);
	if (arg2 == 0) { 
		*arg3 = f;
		return;
	}
	e = e + ret_val;
	f = f - e;
	*arg3 = f;
}

