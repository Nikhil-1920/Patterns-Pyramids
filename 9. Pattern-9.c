// Jumbled equilateral triangle of numbers

#include <stdio.h>

int main(void) {
    int row, k=0;
    printf("Input total number of rows: ");
    scanf("%d", &row);
    for(int i=1; i <= row; i++) {
        for(int j=1; j <= row+i; j++) {
            if(j >= (row+1)-i && j <= (row-1)+i && k) {
                printf("%d", j);
                k=0;
            }
            else {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
    return 0;
}