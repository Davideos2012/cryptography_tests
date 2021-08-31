#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// CIFRA DE CEZAR TESTE
// 32 espaco 
int main(){
    char palavra[50]; //buffer overflow warning

    printf("Word: ");
    scanf("%[^\n]", &palavra);

    for (int x; x < strlen(palavra); x++){
        palavra[x] = tolower(palavra[x]);
        if (palavra[x] == 120){
            palavra[x] = 97;
            printf("%c", palavra[x]);
            continue;
        }else if (palavra[x] == 121){
            palavra[x] = 98;
            printf("%c",palavra[x]);
            continue;
        }else if (palavra[x] == 122){
            palavra[x] = 99;
            printf("%c", palavra[x]);
            continue;
        } else if(palavra[x] == 32){
            printf("%c",palavra[x]);
            continue;
        }
        printf("%c",palavra[x] + 3);
    }
    return 0;
}
