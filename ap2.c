#include <stdio.h>
#include <stdlib.h>	//malloc과 free함수 사용을 위해 불러온다.
void main(void)
{
	int list[5];	//크기가 5인 int형 배열 선언
	int *plist[5];	//크기가 5인 포인터배열 선언
	list[0] = 10;	//list[0]에 10 저장
	list[1] = 11;	//list[1]에 11 저장
	plist[0] = (int*)malloc(sizeof(int));	//4바이트를 힙영역에 동적할당하고 주소를 int포인터형으로 변환 하여plist[0]에 저장
	printf("list[0] \t= %d\n", list[0]);	//list[0]에 저장한 값 10 출력
	printf("address of list \t= %p\n", list);			//배열의 이름으로 배열의 주소를 출력
	printf("address of list[0] \t= %p\n", &list[0]);	//list[0]의 주소를 출력. 배열의 주소와 같다.
	printf("address of list + 0 \t= %p\n", list+0);		//list[0]의 주소출력. 배열의 주소와 같다.
	printf("address of list + 1 \t= %p\n", list+1);		//list[1]의 주소출력. int형 배열이므로 &list[0]+4이다.
	printf("address of list + 2 \t= %p\n", list+2);		//list[2]의 주소출력
	printf("address of list + 3 \t= %p\n", list+3);		//list[3]의 주소출력
	printf("address of list + 4 \t= %p\n", list+4);		//list[4]의 주소출력
	printf("address of list[4] \t= %p\n", &list[4]);	//list[4]의 주소출력
	free(plist[0]);			//힙영역에 동적할당한 영역을 풀어준다.

	printf("[-----[장정환]	[2021076029]-----]");
}