#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[] ){
    int i,n;
    int sum = 0;
    sum = atoi(argv[1]);
    printf("%d ",sum);
    for(i=2; i<argc; i++){
    n = atoi(argv[i]);
    sum -= n;
    printf("- %d  ",n);
    }    
    printf("= %d\n",sum);
    return 0;
}