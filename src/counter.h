#ifndef COUNTER_H
#define COUNTER_H

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int count;
}counter_d;

int init_counter(counter_d* a, int s);

int add_counter(counter_d* a);

int get_counter(counter_d* a);

#endif
