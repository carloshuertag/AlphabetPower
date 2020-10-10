/*****************************************************************
 * AlphabetPower
 * author: @huerta2502 Carlos Huerta García
 *         Marco Antonio Ocaña Navarrete
 * description: Displays a given alphabet to the power of a given int k.
 * **************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void displayAlphabetPower(const char * alphabet, const char * prefix, int n, int k){
    if(k == 0){
        printf("%s, ", prefix);
        return;
    }
    int i;
    for(i = 0; i < n; i++){
        char newPrefix[strlen(prefix) + 1];
        strcpy(newPrefix, prefix);
        strncat(newPrefix, &alphabet[i], 1);
        displayAlphabetPower(alphabet, newPrefix, n, k - 1);
    }
}

void alphabetPower(const char * alphabet, int k){
    if(k > 20 || k < 0){
        printf("Invalid k entry");
        return;
    }
    printf("\n∑^%d = {", k);
    if(k == 0){
        printf("€}\n");
        return;
    }
    displayAlphabetPower(alphabet, "", strlen(alphabet), k);
    printf("\b\b}\n");
}

void main() {
    int k;
    char alphabet[256];
    printf("\nAlphabetPower\n@author: Carlos Huerta Garcia, Marco Antonio Ocaña\nDescription: Displays a given alphabet to the power of a given int k.\n(€ is used as the empty string)\nEnter a string including the aplhabet symbols ∑ = ");
    scanf("%s", alphabet);
    printf("\nEnter an int k = ");
    scanf("%d", &k);
    alphabetPower(alphabet, k);
}