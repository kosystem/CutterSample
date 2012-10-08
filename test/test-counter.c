#include "../src/counter.h"
#include <cutter.h>

void test_init_counter()
{
	counter_d c;
	cut_assert(init_counter(&c, 0));
	cut_assert_equal_int(get_counter(&c), 0);
	cut_assert_equal_int(get_counter(&c), 0, cut_message("add"));
}
