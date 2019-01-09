#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int jj,mm,aa;
} Date;

typedef struct {
    int ref;
    double prixHT;
    int quantite;
    char taille;
    Date date;
} Vetement;

Vetement vet;
int main() {
    printf("Entrer la reference du vetement : ");
    scanf("%d",&vet.ref);
    printf("Entrer le prix HT du vetement : ");
    scanf("%lf",&vet.prixHT);
    printf("Entrer la quantité restant en stock de ce vetement : ");
    scanf("%d",&vet.quantite);
    do {
        printf("Entrer la taille du vetement (x, m ou l): ");
        scanf("%c",&vet.taille);
    } while (vet.taille != 'x' && vet.taille != 'l' && vet.taille != 'm');
    printf("Entrer la date de derniere operation (jj mm aa) : ");
    scanf("%d%d%d",&vet.date.jj,&vet.date.mm,&vet.date.aa);
    printf("Verification de la saisie :\n");
    printf("REF : %d\n", vet.ref);
    printf("PRIX HT : %lf\n", vet.prixHT);
    printf("PRIX TTC : %lf\n", vet.prixHT*616.79/520.50);
    printf("EN STOCK : %d\n", vet.quantite);
    printf("VALEUR HT DU STOCK %lf\n", vet.quantite*vet.prixHT);
    printf("TAILLE : ");
    switch (vet.taille){
    case 'x' :
        printf("PETIT");
        break;
    case 'm' :
        printf("MOYEN");
        break;
    case 'l' :
        printf("GRAND");
        break;
    default :;
    }
    printf("DERNIERE OP : %d-%d-%d\n",vet.date.jj,vet.date.mm,vet.date.aa);
    return 0;
}