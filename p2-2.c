#include <stdio.h>

void print1 (int *ptr, int rows);

int main(void)
{
	int one[] = {0, 1, 2, 3, 4};		//크기가 5인 int형 배열 선언하고 값을 초기화
	printf("one = %p\n", one);			//배열의 주소 출력
	printf("&one = %p\n", &one);		//배열의 주소 출력
	printf("&one[0] = %p\n", &one[0]);	//one[0]의 주소 출력
	printf("\n");
	print1(&one[0], 5);		//one[0]의 주소와 5를 인수로 주어 print1함수 호출
	
	printf("[-----[장정환]	[2021076029]-----]");
	return 0;
}

void print1 (int *ptr, int rows)	//매개변수로 ptr, rows 선언
{/* print out a one-dimensional array using a pointer */
	int i;	//지역변수 i 선언
	printf ("Address \t Contents\n");
	for (i = 0; i < rows; i++)		//반복문을 이용해 배열의 모든 원소와 주소 출력
		printf("%p \t %5d\n", ptr + i, *(ptr + i));	//포인터를 이용해 간접참조하여 배열의 주소와 원소 출력
													//int형 배열이므로 주소의 크기는 4차이난다.
	printf("\n");
}