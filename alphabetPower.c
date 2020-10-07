/*****************************************************************
 * AlphabetPower
 * author @huerta2502 Carlos Huerta García
 *         Marco Antonio Ocaña Navarrete
 * description: Displays a given alphabet to the power of a given int k.
 * **************************************************************/

#include <stdlib.h>
#include <stdio.h>

void alphabetPower(const char * alphabet, int k){
    int i;
    printf("\n∑^0={€} (€ = empty string)\n");
    for(i = 1; i < k; i++) {
        printf("∑^%d={}\n", i);
    }
}

void main() {
    int k;
    char alphabet[256];
    printf("\nAlphabetPower\n@author: Carlos Huerta Garcia, Marco Antonio Ocaña\nDescription: Displays a given alphabet to the power of a given int k.\nEnter a string including the aplhabet symbols: ");
    fflush(stdin);
    scanf("%s", alphabet);
    printf("\nEnter an int k: ");
    scanf("%d", &k);
    alphabetPower(alphabet, k);
}