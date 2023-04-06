#include <stdio.h>

struct student {            //조체
    char lastName[13];      //13bytes
    int studentId;          //4바이트
    short grade;            //2바이트 
};

/*[----- [김승진] [2017038092] -----]*/
int main(){
    printf("[----- [김승진] [2017038092] -----]\n");

    struct student pst;  //pst 구조체 변수 생성 

    printf("size of student = %ld\n", sizeof(struct student));      //구조체의 사이즈 - 인트형이 가장 큰사이즈므로 
    //사이즈가 4바이트씩 나눠서 멤버 변수를 저장한다. 여기 padding.c를 보면 char이 13바이트므로 16바이트까지 자리를 생성하고
    //13바이트의 char가 들어간다. 그리고 3바이트가 남는데 이 남는 구역을 padding이라고한다. 또한 인트 4바이트 할당되고 short도 
    //4바이트 할당되지만 2바이트만 씀으로 2바이트가 남고(padding) 총 24바이트(16+4+4)가 출력된다. 
    printf("size of int     = %ld\n", sizeof(int));                 //int의 사이즈
    printf("size of short   = %ld\n", sizeof(short));               //short의 사이즈 

    return 0;
}