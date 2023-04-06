#include <stdio.h>
#include <stdlib.h>
/*[----- [김승진] [2017038092] -----]*/
void main(){
    printf("[----- [김승진] [2017038092] -----]\n");
    int list[5];                                //크기가 5인 배열 list      
    int *plist[5] = {NULL,};                    //포인터 배열 : 크기가 5인 plist 인데 모두 NULL값을 넣는다.

    plist[0] = (int *)malloc(sizeof(int));      //plist라는 포인터 변수에 Heap에 동적으로 할당한 배열의 시작 주소를 저장했다는 뜻

    list[0] = 1;                                //list[0]에 1 값을 넣는다.
    list[1] = 100;                              //list[1]에 100 값을 넣는다.

    *plist[0] = 200;                            //plist가 포인트하는 값에 200을 넣는다. 

    printf("list[0]             =%d\n", list[0]);       //list[0]에 있는 값을 출력한다.
    printf("&list[0]            =%p\n", &list[0]);      //list[0]의 주소값을 출력한다.
    printf("list                =%p\n", list);          //배열에서 list라함(변수의이름)은 list[0]의 주소를 말한다.
    printf("&list               =%p\n", &list);         //list의 주소는 list[0]의 주소와 같다. 

    printf("=====================================\n\n");
    printf("list[1]             =%d\n", list[1]);       //list[1]에 있는 값을 출력한다.
    printf("&list[1]            =%p\n", &list[1]);      //list[1]의 주소를 출력한다.
    printf("*(list+1)           =%d\n", *(list+1));     //list = list[0]의 주소이고 list+1은 list[1]의 주소이다. 거기에 포인트를 하였으니 list[1]에 
                                                        //있는 값이 출력된다.
    printf("list+1              =%p\n", list+1);        //위에도 설명했지만 list+1은 list[1]의 주소이다.

    printf("=====================================\n\n");
    printf("*plist[0]           =%d\n", *plist[0]);     //plist[0]을 포인트 했으므로 plist[0]이 가르키는 값을 출력한다.
    printf("&plist[0]           =%p\n", &plist[0]);     //plist[0]의 주소를 출력한다.
    printf("&plist              =%p\n", &plist);        //위쪽(18,19번라인)에 설명과 같다.)
    printf("plist               =%p\n", plist);         //위랑 똑같다. 
    printf("plist[0]               =%p\n", plist[0]);   //plist[0]에 들어있는 값을 출력한다. 포인트변수이므로 주소값이 저장되어 있다.   
    printf("plist[1]               =%p\n", plist[1]);   //plist[1]에 들어 있는 값을 출력한다. 아까 위쪽에서 NULL로 설정해서 0000 0000 이 출력된다.
    printf("plist[2]               =%p\n", plist[2]);   //설명이 바로 윗줄과 같다.
    printf("plist[3]               =%p\n", plist[3]);   //설명이 바로 윗줄과 같다.
    printf("plist[4]               =%p\n", plist[4]);   //설명이 바로 윗줄과 같다.



    free(plist[0]);                 //malloc 메모리 할당 해제 
    
}