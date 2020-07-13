#include <stdio.h>
//포인터는 메모리 주소를 다룬다.

int main()
{
    int num1 = 10;

    printf("%p\n", &num1);//메모리 주소를 구할때는 변수앞에 &(주소연산자)를 붙이면 된다.
    //p는 포인터 서식지정자

    return 0;

}
