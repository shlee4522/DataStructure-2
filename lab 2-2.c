#include <stdio.h>
int main()
{
int i;
int *ptr;
int **dptr;
i = 1234;
printf("[----- LeeSeungHun 2023041045 -----]\n");
printf("[checking values before ptr = &i] \n");
printf("value of i == %d\n", i); //i의 값 출력
printf("address of i == %p\n", &i); //i의 주소 출력
printf("value of ptr == %p\n", ptr); //포인터 ptr의 값 출력, 포인터 선언만 했기에 초기화되지 않아 의미 없는값이 출력됨 
printf("address of ptr == %p\n", &ptr); //포인터 ptr의 주소 출력
ptr = &i; /* ptr is now holding the address of i */
printf("\n[checking values after ptr = &i] \n");
printf("value of i == %d\n", i); //i의 값 출력
printf("address of i == %p\n", &i); //i의 주소 출력
printf("value of ptr == %p\n", ptr); //ptr에 i의 주소를 넣었기에 i의 주소 출력
printf("address of ptr == %p\n", &ptr); //포인터 ptr의 주소 출력
printf("value of *ptr == %d\n", *ptr); //포인터 ptr은 i를 가리키기에 i의 값 출력
dptr = &ptr; /* dptr is now holding the address of ptr */
printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i); //i의 값 출력
printf("address of i == %p\n", &i); //i의 주소 출력
printf("value of ptr == %p\n", ptr); //ptr은 i의 주소를 가리키기에 i의 주소 출력
printf("address of ptr == %p\n", &ptr); //ptr의 주소 출력
printf("value of *ptr == %d\n", *ptr); //포인터 ptr은 i를 가리키기에 i의 값 출력
printf("value of dptr == %p\n", dptr); //dptr은 ptr의 주소를 가리키기에 ptr의 주소 촐력
printf("address of dptr == %p\n", &dptr); //dptr의 주소 출력
printf("value of *dptr == %p\n", *dptr); //포인터 dptr은 ptr의 값을 출력하는데 ptr의 값은 i의 주소이기에, i의 주소 출력
printf("value of **dptr == %d\n", **dptr); //이중포인터 dptr은 ptr이 가리키는것의 값을 출력하기에 결국 i의 값이므로 1234를 출력 
*ptr = 7777; /* changing the value of *ptr */ 
printf("\n[after *ptr = 7777] \n"); //*ptr은 i를 가리킨다
printf("value of i == %d\n", i); //*ptr을 통해 i의 값을 7777로 바꾸었기에 7777 출력 
printf("value of *ptr == %d\n", *ptr); //i를 가리키기에 i의값 7777 출력
printf("value of **dptr == %d\n", **dptr); //*ptr을 가리키고 결국 i를 가리키기에 i의값 7777 출력
**dptr = 8888; /* changing the value of **dptr */
printf("\n[after **dptr = 8888] \n"); //**dptr은 결국 *ptr을 가리키고 결국 i를 가리킨다
printf("value of i == %d\n", i); //**dptr을 통해 i의 값을 8888로 바꾸었기에 8888 출력
printf("value of *ptr == %d\n", *ptr); //i를 가리키기에 i의값 8888 출력
printf("value of **dptr == %d\n", **dptr); //*ptr을 가리키고 결국 i를 가리키기에 i의 값 8888 출력
return 0;
}