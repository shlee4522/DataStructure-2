#include <stdio.h>

int main()
{
 char charType; //문자형 char 변수 선언
 int integerType; //정수형 int 변수 선언
 float floatType; //실수형 float 변수 선언
 double doubleType; //실수형 double 변수 선언
 printf("[----- LeeSeungHun 2023041045 -----]\n");

 printf("Size of char: %ld byte\n",sizeof(charType)); //문자형 char의 자료형의 크기 출력
 printf("Size of int: %ld bytes\n",sizeof(integerType)); //정수형 int의 자료형의 크기 출력 
 printf("Size of float: %ld bytes\n",sizeof(floatType)); //실수형 float의 자료형의 크기 출력
 printf("Size of double: %ld bytes\n",sizeof(doubleType)); //실수형 double의 자료형의 크기 출력
 printf("-----------------------------------------\n"); 
 printf("Size of char: %ld byte\n",sizeof(char)); //char 자료형의 크기 출력
 printf("Size of int: %ld bytes\n",sizeof(int)); //int 자료형의 크기 출력
 printf("Size of float: %ld bytes\n",sizeof(float)); // float 자료형의 크기 출력
 printf("Size of double: %ld bytes\n",sizeof(double)); //double 자료형의 크기 출력
 printf("-----------------------------------------\n");
 printf("Size of char*: %ld byte\n",sizeof(char*)); //char 타입의 데이터를 가리키는 포인터 자료형의 크기 출력
 printf("Size of int*: %ld bytes\n",sizeof(int*)); //int 타입의 데이터를 가리키는 포인터 자료형의 크기 출력  
 printf("Size of float*: %ld bytes\n",sizeof(float*)); //float 타입의 데이터를 가리키는 포인터 자료형의 크기 출력 
 printf("Size of double*: %ld bytes\n",sizeof(double*)); //double 타입의 데이터를 가리키는 포인터 자료형의 크기 출력 
 return 0;
}

//11~14줄 16~19줄은 각 자료형의 크기를 출력하지만, 21~24줄은 모두 포인터의 메모리 사이즈인 4byte를 나타낸다