#include <iostream>

using namespace std;

int main(){


    // 2강 자료형 (byte)
    /**
     * bit : 메모리 최소 단위 , 0 또는 1
     * 1 byte = 8 bit
     * 
     * 1byte : 256(2^8) 개의 경우의 수 를 표현 할 수 있다.
     * 
     * 양의 정수 : 0 ~ 255 까지 표현 가능
     * 
     * 1024 (2^10) byte = 1 KB
     * 1024 KB = 1 MB
     * 1024 MB = 1 GB
     * 1024 GB = 1 TB
     * 
     * 
     */
    /**
     * 정수형 : char(1) , short(2), int(4) , long(4), 
     * 실수형 : float(4), double(8)
     */
    int i = 0;


    // 양의 정수만 표현 한다는 의미 : unsigned
    unsigned char j = 0;

    /**
     * = : 대입연산자
     * == , != , < , > : 비교연산자
     */



    // 3강 정수형 (양수/음수 어렵다)
    /**
     * 음수 표현 방식에 대하여 알아보자 
     * signed : 선언하지 않아도 기본적으로 등록이 되어 있다. 음수 양수 전부 표현 
     */
    /**
     * -128 ~ 127 개의 가지수가 표현 가능 하다. 
     */
    signed char k = 0;

    // 8bit 중 맨 처음 bit의 값이 0 이면 양수 1 이면 음수 이다. 

    /**
     * 1의 보수 , 부동소수점
     * signed , unsigned 에 따라서 메모리 내용은 같지만 표현 하는 값이 다르다. 
     */


    cout << "hello";
    return 0;
}