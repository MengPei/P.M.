#include<stdio.h>

int main()
{
	int i = 0x11223344;
	char *p = (char *)(&i);
	printf("memory to number: %x->%x\n", (int)p, *p);
	printf("memory to number: %x->%x\n", (int)p+1, *(p+1));
	printf("memory to number: %x->%x\n", (int)p+2, *(p+2));
	printf("memory to number: %x->%x\n", (int)p+3, *(p+3));
	if ( *p > *(p+1)){
		printf("is big endian\n");
	} else if (*p < *(p+1)) {
		printf("is little endian\n");
	} else {
		printf("is unknow endian\n");
	}
}
