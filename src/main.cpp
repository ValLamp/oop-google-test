#include <cstdio>
#include "main.h"

int myFunc(int a, int b) {
	return a + (b*b);
}

#ifndef UNIT_TESTS
int main() {
	printf("Hello, World!");
	return 0;
}
#endif