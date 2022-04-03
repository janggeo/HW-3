#include <stdio.h>

struct student1 {	//student1의 형선언
	char lastName;
	int studentId;
	char grade;
};
typedef struct {	//student2의 형 선언. typedef로 간편하게 구조체 변수를 선언할 수 있게 한다.
	char lastName;
	int studentId;
	char grade;
} student2;

int main(void) 
{
	struct student1 st1 = {'A', 100, 'A'};			//student1형 구조체 변수 선언후 순서대로 초기화
	printf("st1.lastName = %c\n", st1.lastName);	//st1의 멤버 lastName에 접근하여 출력
	printf("st1.studentId = %d\n", st1.studentId);	//st1의 멤버 studentId에 접근하여 출력
	printf("st1.grade = %c\n", st1.grade);			//st1의 멤버 grade에 접근하여 출력
	
	student2 st2 = {'B', 200, 'B'};					//student2형 구조체 변수 선언후 순서대로 초기화
	printf("\nst2.lastName = %c\n", st2.lastName);	//st2의 멤버 lastName에 접근하여 출력
	printf("st2.studentId = %d\n", st2.studentId);	//st2의 멤버 studentId에 접근하여 출력
	printf("st2.grade = %c\n", st2.grade);			//st2의 멤버 grade에 접근하여 출력

	student2 st3;		//student2형 구조체변수 st3를 선언
	st3 = st2;			//st3에 st2를 대입한다. (멤버들 모두 복사된다.)
	printf("\nst3.lastName = %c\n", st3.lastName);	//복사된 멤버lastName 출력
	printf("st3.studentId = %d\n", st3.studentId);	//복사된 멤버studnetId 출력
	printf("st3.grade = %c\n", st3.grade);			//복사된 멤버grade 출력
	
	/* equality test */
	/*if(st3 == st2) 		//구조체 변수는 대입은 가능하지만 전체를 한번에 비교는 불가. 따로따로 비교 해야한다.
		printf("equal\n");
	else
		printf("not equal\n");
	*/

	printf("[-----[장정환]	[2021076029]-----]");
	return 0;
}