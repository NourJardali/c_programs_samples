#include <stdio.h>
#include <string.h>

/*Write a C program that accepts a sentence of words (strings) as input,
then determines which words are repeated.
*/

int main(){
    char s[1000];
    printf("Input a String\n");
    gets(s);
    char words[100][100];  
    int i = 0, j = 0, k, length, count;   
    for(k=0; s[k]!='\0'; k++){  
        if(s[k] != ' ' && s[k] != '\0'){    
            words[i][j++] = tolower(s[k]);  
        }  
        else{  
            words[i][j] = '\0';   
            i++;   
            j = 0;  
        }  
    }  
    length = i+1;  
      
    printf("Repeated words: ");  
    for(i = 0; i < length; i++){  
        count = 1;  
        for(j = i+1; j < length; j++){  
           if(strcmp(words[i], words[j]) == 0 && (strcmp(words[j],"0") != 0)){  
               count++;    
               strcpy(words[j],"0");  
           }   
        }   
        if(count > 1 )  
            printf("%s ", words[i]);  
    }  

    return 0;
}