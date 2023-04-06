#include <stdio.h>

struct student1{            //구조체 이다. 2가지 구조체 선언하는 방법을 표현했다.
    char lastName;          //student1(구조체이름)에 멤버 변수 char, int char가 있고 
    int studentId;          //멤버변수의 이름은 각각 lastName studentId grade 이다.
    char grade;             //초기값을 아직 설정해 주지 않았다.
};

typedef struct {
    char lastName;          //student2(구조체이름)에 멤버 변수 char, int char가 있고 
    int studentId;          //멤버변수의 이름은 각각 lastName studentId grade 이다.
    char grade;             //초기값을 아직 설정해 주지 않았다.
}student2;
/*[----- [김승진] [2017038092] -----]*/
int main(){
    printf("[----- [김승진] [2017038092] -----]\n");
    struct student1 st1 = {'A', 100, 'A'};      //student1의 구조체 변수, 이름이 st1이고 lastname에 'A'
                                                //studentId에 100 grade에 'A'를 넣는다. 
    printf("st1.lastName = %c\n", st1.lastName);    //st1의 lastname을 출력한다.
    printf("st1.studentId= %d\n", st1.studentId);   //st1의 studentId를 출력한다.
    printf("st1.grade = %c\n\n", st1.grade);        //st1의 grade를 출력한다.

    student2 st2 = {'B', 200, 'B'};             //student1의 구조체 변수, 이름이 st2이고 lastname에 'B'
                                                //studentId에 200 grade에 'B'를 넣는다. 
    printf("st2.lastName = %c\n", st2.lastName);    //st2의 lastname을 출력한다.
    printf("st2.studentId= %d\n", st2.studentId);   //st2의 studentId를 출력한다.
    printf("st2.grade = %c\n", st2.grade);      //st2의 grade를 출력한다.

    student2 st3;                               //student1의 구조체 변수, 이름이 st3을 만든다.
    st3 = st2;                                  //st3의 초기값을 st2와 같게한다.
    printf("st3.lastName = %c\n", st3.lastName);      //st3의 lastname을 출력한다.
    printf("st3.studentId= %d\n", st3.studentId); //st3의 studentId를 출력한다.
    printf("st3.grade = %c\n", st3.grade); //st3의 grade를 출력한다.

    if((st2.lastName == st3.lastName)&&(st2.studentId == st3.studentId)&&(st2.grade== st3.grade))     
        printf("equal \n");             //st2의 lastname, studentid, grade가 st3과 모두 같으면 equal을 출력한다. 
    else
        printf("not equal \n");

    return 0;

}