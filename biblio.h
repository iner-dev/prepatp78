#ifndef BIBLIO_H   //compilation conditionnelle
#define BIBLIO_H


#include "livre.h"

#define CAPACITE_BIBLIO 640 // nb maximum de livres ds la bibliotheque
#define tri_biblio_titre(ptrB) tri_biblio(ptrB,0,((ptrB)->nbLivres-1),0)

typedef  T_livre 	T_tabloDeLivres[CAPACITE_BIBLIO];

typedef struct
{
	T_tabloDeLivres etagere;
	int nbLivres;  //nb de livres actuellement ds la bibliotheque

} T_Bibliotheque;




//prototypes
void init (T_Bibliotheque *ptrB);
int ajouterLivre(T_Bibliotheque  *ptrB);
int afficherBibliotheque(const T_Bibliotheque  *ptrB);
int rechercherBibliothequeTitre(const T_Bibliotheque  *ptrB,T_Titre* Titre_demandé,int* ID_livre);
int rechercherBibliothequeAuteur(const T_Bibliotheque  *ptrB,T_Aut* aut_demandé,int* ID_livre);
int supprimerLivre(T_Bibliotheque  *ptrB,int id);
void tri_biblio(T_Bibliotheque *ptrB,int min,int max,const int line);

#endif