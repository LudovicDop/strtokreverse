#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int main(void){

    /*Initialisation/Déclaration de mes variables*/
    char stringAModif[14] = "06/12/2022";
    char delimiteur = '/';
    int programmeEnCours = 1;
    char *new = malloc(14);

    /*Tant que programmeEnCours est vrai*/
    while(programmeEnCours){

        strtokReverse(stringAModif,new,delimiteur);
        printf("la valeur de new : %s\n",new);

        printf("Continuer 0 pour stop\n");
        scanf("%d",&programmeEnCours);
    }
}