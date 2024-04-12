#include <stdio.h>

int square(int arg);

int main(void){
   printf("%d \n",square(7));
   int arr [5];
   arr[0] = 753;
   arr[1] = 123654;
   arr[2] = -2145;
   arr[3] = 0;
   arr[4] = 10000;
  int countDown = sizeof(arr) / sizeof(arr[0]);
  while(countDown > 0){
    printf("Array element : %d \n" ,arr[countDown]);
    countDown--;
  }



    return 0;
}

int square(int arg){
   return arg*arg;
}