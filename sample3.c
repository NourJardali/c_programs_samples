#include <stdio.h>

//A very simple encryption technique is the one in which each character
//in a string message is replaced by a character some fixed number
//of positions down to it

//This fucntion receives text and shift and
//returns the encrypted text
void encrypt(char s[], int key){
    char ch;
    int i;
    //traverse text
    for(i = 0; s[i] != '\0'; ++i){
        ch = s[i];
        //apply transformation to each character
        //Encrypt Uppercase letter
        if(s[i] >= 'A' && s[i] <= 'Z'){
            ch = ch + key;
            if(ch > 'Z'){
                ch = ch - 'Z' + 'A' - 1;
            }
            s[i] = ch;
        }
        else if(ch >= 'a' && ch <= 'z'){
            ch = ch + key;
            if(ch > 'z'){
                ch = ch - 'z' + 'a' - 1;
            }
            s[i] = ch;
        }
    }
}

void decrypt(char s[], int key){
    char ch;
    int i;
    for(i = 0; s[i] != '\0'; ++i){
        ch = s[i];
        if(ch >= 'a' && ch <= 'z'){
            ch = ch - key;
            if(ch < 'a'){
                ch = ch + 'z' - 'a' + 1;
            }
            s[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z'){
            ch = ch - key;
            if(ch < 'A'){
                ch = ch + 'Z' - 'A' + 1;
            }
            s[i] = ch;
        }
    }
}

int main(){
    char s[] = "XYZABCDEF";
    int key = 3;
    encrypt(s, key);
    printf("Encrypted message: \n %s", s);
    decrypt(s, key);
    printf("\ndecrypted message: \n %s", s);
    return 0;
}

