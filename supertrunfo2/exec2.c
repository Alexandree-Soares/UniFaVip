#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {


    int note1, note2, note3;
    float resultG;  

    printf("Defina a nota 1: ");
    scanf("%d", &note1);
    printf("Defina a nota 2: ");
    scanf("%d", &note2);
    printf("Defina a nota 3: ");
    scanf("%d", &note3);
    printf("\n\n");


    resultG = (float)(note1 + note2 + note3 ) / 3; //força o resultado a ser float 

    printf("Média de notas: %.2f\n", resultG);


    return 0;



}