#include <stdio.h>

int main()
{
	
	if (__builtin_cpu_supports("avx") && __builtin_cpu_supports("avx512")) {
	    printf("Hello AVX!");
	}
	else {
	    printf("You are in the deep shit!");
	}
	
	return 0;
}
