#include <stdio.h>

#define MAX_SIZE 100			//MAX_SIZE를 100으로 매크로를 만든다.
float sum(float list[], int n);	//전달받은 주소의 배열원소의 값을  MAX_SiZE-1번째 원소까지 더해 반환하는 함수
float input[MAX_SIZE], answer;	//크기가 MAX_SIZE인 float형 배열 input과 float형 변수 전역적으로 선언,
int i;							//int형 변수 i 전역적으로 선언

void main(void)
{
	for(i=0; i < MAX_SIZE; i++)		//MAX_SIZE만큼 반복문을 반복
		input[i] = i;				//배열i번째 원소에 i값을 차례로 대입
	/* for checking call by reference */
	printf("address of input = %p\n", input);	//배열의 주소 출력
	answer = sum(input, MAX_SIZE);				//sum함수에 input과 MAX_SIZE를 인수로 전달하고 반환갑을 answer에 저장
	printf("The sum is: %f\n", answer);			//answer를 실수형으로 출력

	printf("[-----[장정환]	[2021076029]-----]");
}

//매개변수로 list와 n선언. list는 인수로 주어진 input배열을 가리키는 포인터. list를 사용하여 배열처럼 접근가능
float sum(float list[], int n)	//매개변수 list로는 배열의 실제크기를 알 수 없기때문에 다른매개변수(int n)로 배열의 크기를 받아야한다.
{
	printf("value of list = %p\n", list);		//list에 저장된 input 주소 출력
	printf("address of list = %p\n\n", &list);	//list의 주소 출력
	int i;					//지역변수 i 선언
	float tempsum = 0;		//float형 tempsum선언후 0으로 초기화
	for(i = 0; i < n; i++)	//n만큼 반복문 실행
		tempsum += list[i];	//list가 가리키는 input[0]~input[MAX_SIZE-1]을 반복문을 이용해 다 더한다
	return tempsum;			//다 더한 값을 반환
}