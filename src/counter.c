#include "counter.h"

int init_counter(counter_d* a, int s)
{
	if(s >= 0){
		a->count = 0;
		return 1;
	} else {
		return 0;
	}
}

int add_counter(counter_d* a)
{
	a->count += 1;
	return 1;
}

int get_counter(counter_d* a)
{
	return a->count;
}

