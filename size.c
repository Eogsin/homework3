#include <stdio.h>
#include <stdlib.h>
/*[----- [김승진] [2017038092] -----]*/
void main(){
    printf("[----- [김승진] [2017038092] -----]\n");
    int **x;

    printf("sizeof(x) = %lu\n",sizeof(x));              //주소를 저장하고 있어서 64비는 8을 출력해야되는데 
    printf("sizeof(*x) = %lu\n",sizeof(*x));            //제 컴퓨터는 컴파일이 32비트로 되어있어서 4가 출력되는거 같다.
    printf("sizeof(**x) = %lu\n",sizeof(**x));          //이거는 인트값의 사이즈기때문에 4가 출력된다.

}