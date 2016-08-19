#include "summarize.h"
#include "summarize_initialize.h"
#include "summarize_terminate.h"
#include <stdio.h>


int main()
{
	summarize_initialize();
	printf("%f\n", summarize(25, 5));
	summarize_terminate();
	getchar();
	return 0;
}