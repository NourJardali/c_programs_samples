#include <stdio.h>

//A sequence is defined by An = (n+1) / (2*n*n) for n = 1,2,3,...

void sequence(int m){
    double s[m];
    for(int i = 1; i <= m; i ++){
        s[i-1] = ((double) (i + 1)) / ((double) (2 * i * i));
    }
    printf("the first %d numbers in the sequence are: ", m);
    double sum = 0;
    for(int i = 0; i < m; i ++){
        printf("%f ", s[i]);
        sum += s[i];
    }
    printf("\n");
    printf("The sum of the first %d numbers in the sequence is: %f", m, sum);
}

int main(){
    sequence(10);
    return 0;
}