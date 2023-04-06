#include <stdio.h>

void print_one(int *ptr, int rows);
/*[----- [김승진] [2017038092] -----]*/
int main(){
    printf("[----- [김승진] [2017038092] -----]\n");

    int one[] = {0,1,2,3,4};                            //원 배열에 0,1,2,3,4를 넣는다.
    printf("one     = %p\n", one);                      //one[0]의 주소를 출력한다= one을 출력한다. 
    printf("&one     = %p\n", &one);                    //one의 주소를 출력한다.
    printf("&one[0]     = %p\n", &one[0]);              //one[0]의 주소를 출력한다 모두 같은 소리다 
    printf("\n");

    printf("------------------------------------\n");
    printf(" print_one(&ont[0], 5) \n");
    printf("------------------------------------\n");
    print_one(&one[0], 5);                              //print_one()함수에 one[0]의 주소와 5를 보낸다.

    printf("------------------------------------\n");
    printf(" print_one(ont, 5) \n");
    printf("------------------------------------\n");
    print_one(one, 5);                                  //print_one()함수에 one[0]의 주소와 5를 보낸다. 위에 적은거랑 똑같다. 
                                                        //one = &one[0] = &one 라는 것을 알 수 있다.
    
    return 0;
}
void print_one(int *ptr, int rows)
{
        int i;
        printf("Address \t Contents\n");                //이대로 출력하는거 출력하는거 생략
        for(i=0; i<rows;i++)                    
            printf("%p \t %5d\n",ptr +i, *(ptr+i));     //받는 one[0]주소를 ptr에 넣고 for문을 통해 외쪽에는 
                                                        //onw[i]의 주소를 오른쪽에는 그 주소에 있는 값을 출력한다. 
        printf("\n");
}