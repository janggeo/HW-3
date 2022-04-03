#include <stdio.h>

struct student {	//구조체 형선언
	char lastName[13]; /* 13 bytes */
	int studentId; /* 4 bytes */
	short grade; /* 2 bytes */
};

int main(void)
{
	struct student pst;	// 구조체 변수 pst 선언

	/*구조체의 크기 계산대로 라면 19바이트가 나와야하지만 24바이트가 나온다. 
	데이터를 빠르게 읽고 쓰기위해 일정한 크기 단위로 메모리에 접근하기 때문.
	따라서 구조체 멤버의 크기가 다를 경우 멤버 사이에 패딩바이트를 넣어 멤버들을 정리한다.*/
	printf("size of student = %ld\n", sizeof(struct student));

	printf("size of int = %ld\n", sizeof(int));		//int형 변수의 크기는 4바이트
	printf("size of short = %ld\n", sizeof(short));	//short형 변수의 크기는 2바이트

	printf("[-----[장정환]	[2021076029]-----]");
	
	return 0;
}