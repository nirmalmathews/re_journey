struct s1 {
SYSTEMTIME t;
int32_t process_id;
int32_t ticks;
int64_t perf_counter;
};

int mystery10(int count, struct s1 *s)
{
	int bytes_copied = 0;
	SYSTEMTIME local_t;
	if (count < 0x10 && count < 4 && count < 8) {
		return bytes_copied;
	}

	if (count >= 0x10) {
		GetSystemTime(&local_t);
		/* Note that the memcpy is implemented in the disassembly as 4 dword copies */
		memcpy(&s->t, local_t, sizeof(local_t));
		bytes_copied += 0x10;
		count -= bytes_copied;
	}
	if (count >= 4) {
		s1->process_id = GetCurrentProcessId();
		bytes_copied += 4;
		count -= 4;	
	}
	if (count >= 4) {
		s1->ticks = GetTickCount();
		bytes_copied += 4;
		count -= 4;
	}
	if (count >= 8) {
		/* in the disassembly the address of a local variable is passed to the function 
		 * this is for simplicity */
		QueryPerformanceCounter(&s->perf_counter);
		bytes_copied += 8;
	}

	return bytes_copied;
}

