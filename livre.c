#include "livre.h"


void saisirLivre(T_livre * ptrL)
{
lireChaine("TITRE :", (ptrL->titre), MAX_TITRE );
lireChaine("AUTEUR :", (ptrL->auteur ), MAX);
}

void afficherLivre(const T_livre *ptrL)
{
afficherChaine("TITRE :", (ptrL->titre));
printf(" - ");
afficherChaine("AUTEUR :", (ptrL->auteur ));
printf("\n");
}

int emprunterLivre(T_livre *livre){
    if(livre->emprunteur[0]=='\0'){
        lireChaine("quelle est le nom de l'emprunteur\n> ",livre->emprunteur,K_MaxEmp);
        printf("enregistrement effectué\n");
        return EXIT_SUCCESS;
    }else printf("[ERROR] -> livre deja emprunter\n");
    return EXIT_FAILURE;
}


int restituerLivre(T_livre *livre){
    if(livre->emprunteur[0]!='\0'){
        livre->emprunteur[0]='\0';
        printf("restitusion effectuer effectué\n");
        return EXIT_SUCCESS;
    }else printf("[ERROR] -> livre deja non emprunter\n");
    return EXIT_FAILURE;
}