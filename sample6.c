#include <stdio.h>
#include <math.h>

//Write a program that reads one integer n from input
//and then n values.
//It should then compute and print that standard deviation of the data

float calculateSD(float data[], int n){
    float sum = 0.0, mean, SD = 0.0, differ, varsum = 0.0;
    for(int i = 0; i < n; ++i){
        sum += data[i];
    }
    mean = sum / (float) n;
    for(int i = 0; i < n; ++i){
        differ = data[i] - mean;
        varsum += pow(differ, 2);
    }
    varsum = varsum / (float) n;
    SD = sqrt(varsum);
    return SD;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter %d numbers: \n", n);
    float data[n];
    for(int i = 0; i < n; i++){
        scanf("%f", &data[i]);
    }
    printf("\nStandard Deviation = %.6f", calculateSD(data, n));
    return 0;
}