#include <stdlib.h> //malloc, free 함수가 담겨있는 헤더파일

int main()
{
    int num1 = 20;
    int *numPtr1;

    numPtr1 = &num1;

    int *numPtr2;

    numPtr2 = malloc(sizeof(int)); //int의 크기 4바이트만큼 동적 메모리 할당

    printf("%p\n", numPtr1);

    printf("%p\n", numPtr2);

    free(numPtr2);


    return 0;

}
