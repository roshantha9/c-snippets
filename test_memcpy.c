
#include <stdio.h>
#include <stdint.h>

#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

#define N 10

uint8_t gbuff1[N];
uint8_t *pbuff1 = (uint8_t *)&gbuff1;


uint8_t gbuff1_backup[N] = {0};

// prototype
void _debug(uint8_t *buff, unsigned int n);

int main()
{
    printf("Hello World\n\n");
    
    int i;
    
    /* populate */
    for(i=0;i<N;i++){
        pbuff1[i] = 0xAA;
    }
    
    //printf("%d\n", NELEMS(pbuff1));
    //printf("%d\n", sizeof(pbuff1));
    //printf("%d\n", sizeof(gbuff1));
    printf("After populating :\n");
    _debug(pbuff1, N);
  
    memcpy(gbuff1_backup, pbuff1, N);
    
    /* erase */
    for(i=0;i<N;i++){
        pbuff1[i] = 0x00;
    }
    printf("After erasing (orig) :\n");
    _debug(pbuff1,N);
    printf("After erasing (backup) :\n");
    _debug(gbuff1_backup,N);
    
    /* restore */
    memcpy(pbuff1, gbuff1_backup, N);
    printf("After restoring (orig) :\n");
    _debug(pbuff1,N);
    
    

    return 0;
}


void _debug(uint8_t *buff, unsigned int n){
    int i;
    for(i=0;i<n;i++){
        printf("0x%X,", buff[i]);
    }
    printf("\n");
}

