# include "biblio.h"


void init (T_Bibliotheque *ptrB)
{

ptrB->nbLivres=0;
// ou (*ptrB).nbLivres=0;
}

int ajouterLivre(T_Bibliotheque  *ptrB)
{
if (ptrB->nbLivres<CAPACITE_BIBLIO)// reste t il de la place?
	{
	saisirLivre(&(ptrB->etagere[ptrB->nbLivres]));
	ptrB->nbLivres++;
	return 1;
	}
	
	
return 0;
	
}


int  afficherBibliotheque(const T_Bibliotheque  *ptrB)
{
int i;
if(ptrB->nbLivres==0)
	return 0;
	else
		{
		for(i=0;i<ptrB->nbLivres;i++)
			{
			afficherLivre( &(ptrB->etagere[i])  );
			
			}


		
		return 1;
		}
}


int  rechercherBibliotheque(const T_Bibliotheque  *ptrB,char* Titre_demandé,T_livre* livre_resultat){
	int nb = 0, i;
	for (i=0;(ptrB->nbLivres)>i;i++){
		if(strcmp(ptrB->etagere[i].titre,Titre_demandé)==0){
			nb++;
			if(nb == 1) livre_resultat = &(ptrB->etagere[i]);
		}
	}
	return i;
}