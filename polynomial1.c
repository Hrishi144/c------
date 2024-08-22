#include <stdio.h>
struct polynomial {
    int expo;
    int coeff;
} poly[100];

void main() {
    int i, d;
    printf("Enter the number of terms in the polynomial: ");
    scanf("%d", &d);
    for(i = 0; i < d; i++) {
        printf("Enter the coefficient and exponent of term %d: ", i + 1);
        scanf("%d%d", &poly[i].coeff, &poly[i].expo);
    }
    int x= 1;
    for(i = 0; i < d - 1; i++) {
        if(poly[i].expo < poly[i + 1].expo) {
            x = 0;
            break;
        }
    }
    
    if(x!=1) {
        printf("The polynomial is in incorrect order\n");
    } else{
        printf("The polynomial is: ");
        for(i = 0; i < d; i++) {
            printf("(%dx^%d)", poly[i].coeff, poly[i].expo);
            if(i < d - 1) {
                printf(" + ");
            }
        }
        printf("\n");
        }}

