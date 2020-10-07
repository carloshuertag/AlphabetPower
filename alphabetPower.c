/*****************************************************************
 * AlphabetPower
 * author @huerta2502 Carlos Huerta García
 *         Marco Antonio Ocaña Navarrete
 * description: Displays a given alphabet to the power of a given int k.
 * **************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void displayAlphabetPower(const char * alphabet, int k){
    int i, j;
    char element[k];
    for(i = 0; i < strlen(alphabet); i++){
        printf(", ");
        for(j = 0; j < k; j++)
            printf("%c", alphabet[i]);
    }
}

void alphabetPower(const char * alphabet, int k){
    int i;
    if(k == 0){
        printf("\n∑^0 = {€}\n");
    } else {
        if(k == 1) {
            printf("\n∑^1 = {%c", alphabet[0]);
            for(i = 1; i < strlen(alphabet); i++)
                printf(", %c", alphabet[i]);
            printf("}\n");
        } else {
            if (k < 20){
                printf("\n∑^%d = {", k);
                displayAlphabetPower(alphabet, k);
                printf("}\n");
            } else {
                printf("\nInvalid int k entry.");
            }
        }
    }
}

void main() {
    int k;
    char alphabet[256];
    printf("\nAlphabetPower\n@author: Carlos Huerta Garcia, Marco Antonio Ocaña\nDescription: Displays a given alphabet to the power of a given int k.\n(€ is used as the empty string)\nEnter a string with the aplhabet symbols: ");
    fflush(stdin);
    scanf("%s", alphabet);
    printf("\nEnter an int k: ");
    scanf("%d", &k);
    alphabetPower(alphabet, k);
}