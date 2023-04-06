#include <stdio.h>

#define MAX_SIZE 100 //MAX_size의 값이 100이다.

float sum1(float list[], int);      //sum1,2,3의 함수 선언 (아래설명)
float sum2(float *list, int);
float sum3(int n, float *list);

float input [MAX_SIZE], answer; //input[100] = input[MAX_SIZE] 같은 의미 크기가 100인 배열 생성 
int i;

/*[----- [김승진] [2017038092] -----]*/
void main(){
    printf("[----- [김승진] [2017038092] -----]\n");

    for(i=0; i < MAX_SIZE; i++)                 //0부터 99까지 돈다.
        input[i] = i;                           //input[i]에 i를 넣는다. ex) input[0]=0 , input[1]=1~~~~~ 99까지
    printf("-------------------------------\n");
    printf(" sum1(input, MAX_SIZE )\n");
    printf("-------------------------------\n");
    printf("input \t= %p\n", input);             // input[0] 의 주소를 출력한다.

    answer = sum1(input, MAX_SIZE);             //sum1()함수에 input 주소와 MAX_SIZE = 100 을 보내고 answer에 함수를 돌고 난 리턴값을 받는다.
    printf("The sum is: %f\n\n", answer);       //anwer 값을 출력한다. 0~ 99를 더했으므로 4950 이 나온다. float값으로 출력해서 .0000까지 나온다.

    printf("-------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("-------------------------------\n");
    printf("input \t = %p\n", input);

    answer = sum2(input, MAX_SIZE);             //sum2()함수에 input 주소와 MAX_SIZE = 100 을 보내고 answer에 함수를 돌고 난 리턴값을 받는다.
    printf("The sum is : %f\n\n", answer);      //anwer 값을 출력한다. 0~ 99를 더했으므로 4950 이 나온다. float값으로 출력해서 .0000까지 나온다.

    printf("-------------------------------\n");
    printf("sum3(MAX_SIZE), input \n");
    printf("-------------------------------\n");
    printf("input = %p \n", input);
    
    answer = sum3(MAX_SIZE, input);             //sum3()함수에 input 주소와 MAX_SIZE = 100 을 보내고 answer에 함수를 돌고 난 리턴값을 받는다.
    printf("The susm is : %f\n\n", answer);     //anwer 값을 출력한다. 0~ 99를 더했으므로 4950 이 나온다. float값으로 출력해서 .0000까지 나온다.
}


float sum1(float list[], int n)            //list[]로 input 배열의 주소를 받았다. sum1,2,3를 통해 주소를 받는 방법에 대한 다양한 방법을 알 수 있다.
{                                          //n = MAX_SIZE = 100 을 의미한다. 
    printf("list \t=%p\n", list);       //input의 주소를 출력한다.  
    printf("&list \t=%p\n\n", &list);   //list의 주소를 출력한다. 

    int i;
    float tempsum =0;
    for(i=0; i<n; i++)
        tempsum += list[i];
    return tempsum;
}

float sum2(float *list, int n)              //*list로 input 배열의 주소를 받았다
{                                           //n = MAX_SIZE = 100 을 의미한다. 
    printf("list \t= %p\n", list);
    printf("&list \t=%p\n\n", &list);

    int i;
    float tempsum =0;
    for(i=0; i<n; i++)
        tempsum += *(list+i);
    return tempsum;
}

/*stack variable reuse test*/


float sum3(int n, float *list )             //sum2와 다른점은 n을 먼저 받고 *list로 input의 배열의 주소를 받았따. 이러면 sum3(MAX_SIZE, input)으로 
{                                           //sum2(input,MAX_SIZE)와 다르게 main() 괄호안에 MAX_SIZE 부터 적고 input을 척는다.
    printf("list \t= %p\n", list);
    printf("&list \t=%p\n\n", &list);

    int i;
    float tempsum =0;
    for(i=0; i<n; i++)
        tempsum += *(list+i);
    return tempsum;
}


//참고(전 과제 주소 피드백 받음) : input의 주소 004070A0  ,list의 값 : 004070A0 ,  list의 주소 : 0061FF00






