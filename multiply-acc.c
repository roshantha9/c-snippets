#include <stdio.h>
#include <stdint.h>

int main()
{
    printf("Hello World");
    
    int16_t result[256] = {0};
    int16_t srcA[6] = {1,2,3,4,5,6};
    int16_t srcB[6] = {10,20,30,40,50,60};
    int16_t length;
    length = 6;
    
    int16_t *presult = result;
    
    /* Initialize the result. */
    *presult = 0;
    uint16_t i;
    i=length;
    /* Loop through all vector elements. */
    while (i--) {
        /* Multiply srcA and srcB and accumulate to the result. */
        *presult += (int16_t)(*srcA)++ * (int16_t)(*srcB)++;
    }
    
    /* Scale result by 2. */
    *presult <<= 1;
    
    // print results
    printf("\n");
    for(i=0;i<length;i++){
        printf("%d,", *(presult+i));
    }
    
    
    return 0;
}
