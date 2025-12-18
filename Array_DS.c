#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, i;
    int *iarray;
    
    scanf("%d", &N);
    if ((N < 1) || (N > 1000))
        return 0;
    
    iarray = (int *)malloc(sizeof(int) * N);
    
    for(i=0; i<N; i++) {
        scanf("%d", &iarray[i]);
        if ((iarray[i] < 1) || (iarray[i] > 10000))
            return 0;
    }
    for(i=N-1; i>=0; i--) {
        printf("%d ", iarray[i]);
    }
    return 0;
}
