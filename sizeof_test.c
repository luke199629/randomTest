#include <stdio.h>

int main(){
	char ary[] = "Hello";
	char *ptr = "Hello";
	printf("size of ary: %lu\n", sizeof(ary));
	printf("size of ptr: %lu\n", sizeof(ptr));
	return 0;
}