#include <stdio.h>

/*Write a C function that takes a sentence (string) and 
computes and returns the percentage of vowels
in the sentence
*/

double countVowels(char s[]){
    int c = 0, count = 0;
    while(s[c] != '\0'){
        if(s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' ||
            s[c] == 'i' || s[c] == 'I' || s[c] == 'o' || s[c] == 'O' || s[c] == 'u' || s[c] == 'U'){
                count++;
            }
        c++;
    }

    return ((double) count / (double) c);
}