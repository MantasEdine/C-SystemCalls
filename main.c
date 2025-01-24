#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void){

    
    while (int c ;(c = getchar())!= EOF)
    {
        if(c == '\.' || c == ';' || c == '?'){
            puts('\n');
        }
    }
    


    return 0;
}