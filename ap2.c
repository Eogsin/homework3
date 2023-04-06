#include <stdio.h>
#include <stdlib.h>
/*[----- [김승진] [2017038092] -----]*/
void main(){
    printf("[----- [김승진] [2017038092] -----]\n");

    int list[5];                        //배열 생성 크기 5짜리
    int *plist[5];                      //포인트 배열 생성 크기 5짜리

    list[0] = 10;                       //list[0]에 값 10넣기
    list[1] = 11;                       //list[1]에 값 11넣기

    plist[0] = (int*)malloc(sizeof(int));   //plist 동적 메모리 할당

    printf("list[0] \t= %d\n", list[0]);    //list [0]을 출력한다.
    printf("list \t\t= %p\n", list);        //list[0]의 주소 = list 주소를 출력
    printf("&list[0] \t= %p\n", &list[0]);  //list[0]의 주소출력

    printf("list + 0 \t= %p\n", list+0);    //list에 0을 더하면 그냥리스트랑 똑같습니당.!
    printf("list + 1 \t= %p\n", list+1);    //list에 1을 더하면 list[1]의 주소와 똑같습니당.
    printf("list + 2 \t= %p\n", list+2);    //list에 2를 더하면 list[2]의 주소
    printf("list + 3 \t= %p\n", list+3);    //list에 3을 더하면 list[3]의 주소
    printf("list + 4 \t= %p\n", list+4);    //list에 4를 더하면 list[4]의주소
    printf("&list[4] \t= %p\n", &list[4]);  //list[4]의 주소
    
    free(plist[0]);                         //malloc 메모리 할당 해제 
}