#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_qsort(void* base , long unsigned arr_len , long unsigned type , int (*compare)(const void *a, const void *b)
 ){
 
   void *temp;
   temp = (char *)malloc(sizeof(type));
   void *temp_arr = (char *) base;

   if(!temp){
    perror("Error Allocating Memory for temp_var !");
    return;
   }
 
    for (size_t i = 0; i < arr_len - 1; i++)
    {
       for (size_t j = 0; j < arr_len - i - 1; j++)
       {
     
       if (compare(temp_arr + j * type, temp_arr + (j + 1) * type) > 0)
       {

        memcpy(temp,(temp_arr + j * type),type);
        memcpy((temp_arr + j * type),(temp_arr + (j + 1) * type),type);
        memcpy((temp_arr + (j + 1) * type),temp,type);


       }
       

         
          
       }
       
    }
    
 
   free(temp);
  
}



int compare(const void *a , const void *b){
    return strcmp(*(const char **)a , *(const char **)b);
}




int main(void){
   
    const char *test[] = {"hello","bye","bonjour","world","love"};
    size_t test_length = sizeof(test) / sizeof(test[0]);
    my_qsort(test,test_length,sizeof(char *),compare);
    for (size_t i = 0; i < test_length; i++)
    {
         printf("%s\n",test[i]);
    }
    
    return 0;
}