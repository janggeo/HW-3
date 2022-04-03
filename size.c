#include<stdio.h>

void main(void)
{
	int **x;	//이중포인터 x선언
	printf("sizeof(x) = %lu\n", sizeof(x));		//32bit 컴파일러로 컴파일 할 경우 포인터는 4바이트이다.
	printf("sizeof(*x) = %lu\n", sizeof(*x));	//이중포인터 x가 간접참조 하는것은 int *형 이므로 4바이트 
	printf("sizeof(**x) = %lu\n", sizeof(**x));	//포인터 x가 간접참조하는 것은 int형 이므로 4바이트

	printf("[-----[장정환]	[2021076029]-----]");
}