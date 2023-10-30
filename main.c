#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include "mabiblio.h"

void main()
{
    int choix;
    int Coder;
    float Coderp;



do{


    printf("+++++++++++++++++ [ MENU GESTION ARTICLES ] +++++++++++++++++ \n");

	printf("*Nouvel article: ===> TAPEZ[1]* \n   ");
	printf("*Modifier le prix: ===> TAPEZ[2]*\n      ");
	printf("*Supprimer un article: ===> TAPEZ[3]*\n         ");
	printf("*Rechercher un articles: ===> TAPEZ[4]*\n            ");
	printf("*Liste des articles d'un fournisseur: ===> TAPEZ[5]*\n               ");
	printf("*Liste des articles par annee d'achat: ===> TAPEZ tapez[6]*\n                  ");

	printf("*Pour quitter: ===> TAPEZ tapez[7]*\n                     ");

	printf("*Donner un choix [1->7]*\n");
	scanf("%d",&choix);
	switch (choix){
	    case 1 : {article();break;}
	    case 2  : {modifier();break;}
	    case 3  : {supprimer() ;break;}
	    case 4  : {infoparcode();break;}
	    case 5  : {liste_Fournisseur();break;}
	    case 6  : {liste_annee_dachat();break;}
	    case 7  : {printf("fin du programme");break;}
	    default : printf("choix errone\n");
	}
	getch();
}while(choix!=7);












}
