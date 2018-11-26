
#include <stdio.h>

int main()
{
    printf("Hello World \n");

    char array[3] = {'a','b','c'};
    
    char* p = &array;
    
    
    int i;
    for (i=0;i<3;i++){
        p[i] = 'D';
    }
    
    for (i=0;i<3;i++){
        printf("%c",p[i]);
    }
    

    return 0;
}
