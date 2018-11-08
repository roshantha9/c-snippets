/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#define ROW     4
#define COL     5

int main()
{
    printf("Hello World \n");
    
    
    int arr [ROW][COL] = {  9, 6, 1 ,5, 10,   
                            144, 70, 50,6, 20, 
                            10, 12, 78, 7, 30,
                            20, 22, 88, 8, 40};
                            
    int *ptr = arr; 
    int *backup_ptr;
    
    backup_ptr = ptr;
    
    int temp_byte;
    
    int x,y;
    
    
    int s,e;
    s=2; e=4;
    
    ptr = backup_ptr + (s*COL);
    
    
    for (int y=s; y<e; y++){
        for (int x=0; x<COL; x++){
            
            
            
            temp_byte = *ptr++;
            
            
            
            
            
            printf("%i \t", temp_byte);
        }
        printf("\n");
    }
    

    return 0;
}
