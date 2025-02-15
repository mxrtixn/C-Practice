#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIGNES 10
#define COLONNES 10

char feuille[LIGNES][COLONNES][50];

void afficherFeuille() {
    printf("\nTableur Actuel:\n");

    printf("   ");

    for (int j = 0; j < COLONNES; j++) {
        printf(" %10d ", j);
    }
    printf("\n");
    for (int i = 0; i < LIGNES; i++) {
        printf("%2d ", i);
        for (int j = 0; j < COLONNES; j++) {
            printf(" %10s ", feuille[i][j][0] ? feuille[i][j] : "-");
        }
        printf("\n");
    }
}

void editerCellule() {
    int ligne, colonne;
    char valeur[50];
    printf("Entrez la ligne et la colonne à modifier (0-9 0-9) : ");
    scanf("%d %d", &ligne, &colonne);
    if (ligne >= 0 && ligne < LIGNES && colonne >= 0 && colonne < COLONNES) {
        printf("Entrez la nouvelle valeur : ");
        scanf("%s", valeur);
        strcpy(feuille[ligne][colonne], valeur);
    } else {
        printf("Position de cellule invalide !\n");
    }
}

void editerCelluleMixte() {
    int ligne, colonne;
    char valeur[50];
    int nombre;
    printf("Entrez la ligne et la colonne à modifier (0-9 0-9) : ");
    scanf("%d %d", &ligne, &colonne);
    if (ligne >= 0 && ligne < LIGNES && colonne >= 0 && colonne < COLONNES) {
        printf("Entrez une chaine de caracteres : ");
        scanf("%s", valeur);

        printf("Entrez un nombre : ");
        scanf("%d", &nombre);
        sprintf(feuille[ligne][colonne], "%s%d", valeur, nombre);
    } else {
        printf("Position de cellule invalide !\n");
    }
}

int main() {
    memset(feuille, 0, sizeof(feuille));
    int choix;

    while (1) {
        printf("\nMini Excel - Tableur Simple\n");
        printf("1. Afficher la feuille\n");
        printf("2. Modifier une cellule (texte)\n");
        printf("3. Modifier une cellule (texte + nombre)\n");
        printf("4. Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                afficherFeuille();
                break;
            case 2:
                editerCellule();
                break;
            case 3:
                editerCelluleMixte();
                break;
            case 4:
                printf("Fermeture...\n");
                exit(0);
            default:
                printf("Choix invalide !\n");
        }
    }
    return 0;
}
