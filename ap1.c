#include <stdio.h>
#include <stdlib.h> //malloc과 free함수호출을 위해 불러온다.

void main(void)
{
	int list[5]; // int형 크기가 5인 배열 스택에 선언
	int *plist[5] = {
		NULL,
	}; //크기가 5인 포인터배열 스택에 선언하고 쓰레기 값들을 없애기위해 NULL값으로 초기화.

	plist[0] = (int *)malloc(sizeof(int)); // 4바이트를 힙영역에 동적할당 한후 그 주소를 plist[0]으로 반환

	list[0] = 1;   // list[0]에 1을 저장
	list[1] = 100; // lsit[1]에 100을 저장

	*plist[0] = 200; // plist[0]이 가리키는 동적할당한 영역에 200을 저장

	printf("value of list[0] = %d\n", list[0]);		// list[0]에 저장한 1출력
	printf("address of list[0] = %p\n", &list[0]);	// list[0]의 주소출력
	printf("value of list = %p\n", list);			//배열의 이름은 배열의 주소. 즉, 배열의 첫번째 list[0]의 주소 출력
	printf("address of list(&list) = %p\n", &list); //배열의 주소 출력 list와 &list는 같은 의미

	printf("----------------------------------\n\n");

	printf("value of list[1] = %d\n", list[1]);		  // list[1]에 저장한 100출력
	printf("address of list[1] = %p\n", &list[1]);	  // list[1]의 주소 출력. int형 배열 이므로 list[0]+4이다.
	printf("value of *(list+1) = %d\n", *(list + 1)); //*(list+1)은 list[1]과 같은 의미이다. *(list+sizeof(int)*1)
	printf("address of list+1 = %p\n", list + 1);	  // list+1의 주소출력 &list[1]과 같은 의미이다.

	printf("----------------------------------\n\n");

	printf("value of *plist[0] = %d\n", *plist[0]); //간접참조로 저장한 값 200 출력
	printf("&plist[0] = %p\n", &plist[0]);			//스택에 선언된 plist의 plist[0]의 주소 출력
	printf("&plist = %p\n", &plist);				//스택에 선언된 포인터 배열의 주소 출력
	printf("plist = %p\n", plist);					//배열의 이름은 배열의 주소
	printf("plist[0] = %p\n", plist[0]);			//힙영역에 동적할당되어 plist[0]에 저장된 주소 출력
	printf("plist[1] = %p\n", plist[1]);			// NULL값으로 초기화한후 주소값을 저장하지 않았으므로  0이다.
	printf("plist[2] = %p\n", plist[2]);
	printf("plist[3] = %p\n", plist[3]);
	printf("plist[4] = %p\n", plist[4]);

	free(plist[0]); //동적할당된 영역의 사용이 다끝났으므로 free함수로 놓아준다.
					//놓아주지 않을경우 메모리누수 발생할 수 있다.

	printf("[-----[장정환]	[2021076029]-----]");
}