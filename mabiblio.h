#ifndef MABIBLIO_H_INCLUDED
#define MABIBLIO_H_INCLUDED
typedef struct date{
		int jour;
		int mois;
		int annee;
	}date;

	typedef struct Article {
		int Code;
		char Desgin [20];
		char Fournisseur [20];
		int Qt;
		float Prix;
        date DtAchat;

	}Article;

Article t[200];
int n=0;

void article (void);
void modifie (void);
void supprimer (void);
void infoparcode(void);
void liste_Fournisseur(void);
void liste_annee_dachat(void);
int chercher(void);

int chercher()
{
 int c;
 int i;
    do
      {  printf("donner un code ");
        scanf("%d",&c);
        }while(c<0);
    if(n==0)
        return 200;
    else{
        for(i=0;i<n;i++)
            if(c==t[i].Code)
                return i;
        if(i==n)
            return 200;

        }

}

void article (){
 int i;
 int v;
        do{v=0;
        printf("donner le code \n");
		scanf("%d",&t[n].Code);

		for(i=0;i<n;i++){
		if (t[n].Code==t[i].Code){
                printf("Le code deja exicte veuillez donner un noveau code\n");
		          v=1;}}

		}while(t[n].Code<0||v==1);
		printf("Donner la  designation \n");
		scanf("%s",t[n].Desgin);
		printf("Donner le nom du fournisseur \n");
		scanf("%s",t[n].Fournisseur);
		printf("Donner la quantite: \n");
		scanf("%d",&t[n].Qt);
		printf("Donner le jour dachat\n");
		scanf("%d",&t[n].DtAchat.jour);
		printf("Donner le mois dachat\n");
		scanf("%d",&t[n].DtAchat.mois);
		printf("Donner l annee dachat\n");
		scanf("%d",&t[n].DtAchat.annee);
		printf("Donner prix de vente\n");
		scanf("%f",&t[n].Prix);
		n++;
}
void liste_Fournisseur(){
    char clsr[20];
    int i;
    do{printf("donner le fournisseur");
        fflush(stdin);
        gets(clsr);
        } while(strlen(clsr)>19);

    for(i=0;i<n;i++)
        if(strcmp(clsr,t[i].Fournisseur)==0)
            {printf("Code %d\nFournisseur:%s\n ",t[i].Code,t[i].Fournisseur);
            printf("Designation:%s\n ",t[i].Desgin);
            printf("Date: %d / %d / %d\n ",t[i].DtAchat.jour,t[i].DtAchat.mois,t[i].DtAchat.annee);
            printf("Quantite: %d\n ",t[i].Qt);
            printf("Prix d achat: %.2f DH\n ",t[i].Prix);
            }

}
void infoparcode(){
    int i;

    i=chercher();
        if(i==200)
            printf("n existe pas\n");
         else
            {
            printf("La designation:  %s\n",t[i].Desgin);
            printf("Le fournisseur:  %s\n",t[i].Fournisseur);
            printf("La quantite:  %d\n",t[i].Qt);
            printf("le prix:  %.2f DH\n",t[i].Prix);
            printf("La date dachat jour:  %d\n",t[i].DtAchat.jour);
            printf("La date dachat mois:  %d\n",t[i].DtAchat.mois);
            printf("La date dachat annee:  %d\n",t[i].DtAchat.annee);
        }



}

void  modifier(){
    int i;
    i=chercher();
        if(i==200)
            printf("n existe pas\n");
         else
         {do
            {printf("donner le noveu prix de vente");

            scanf("%f",&t[i].Prix);}
            while(t[i].Prix<=0);

        }

}

void supprimer(){
    int i,j,tr;
    tr=chercher();
    if(tr==200)

            printf("Article non existant\n");
    else{


            for(j=tr;j<=n-2;j++)
                    t[j]=t[j+1];
                    printf("Article supprime\n");
            n--;}
}



void liste_annee_dachat(){
    int i;
    int a;
    printf("Donner une annee");
    scanf("%d",&a);
    for (i=0;i<n;i++)
        if(a==t[i].DtAchat.annee)
            {printf("Code: %d\nFournisseur%s\n",t[i].Code,t[i].Fournisseur);
            printf("Designation:%s\n ",t[i].Desgin);
            printf("Date: %d / %d / %d \n ",t[i].DtAchat.jour,t[i].DtAchat.mois,t[i].DtAchat.annee);
            printf("Quantite: %d\n ",t[i].Qt);
            printf("Prix d achat: %.2f DH\n ",t[i].Prix);
            }

}





















#endif // MABIBLIO_H_INCLUDED
