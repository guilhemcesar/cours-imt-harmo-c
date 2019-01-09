#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

FILE *file;
#define WORD_MAX_LENGTH 26
#define WORD_MAX_NUMBER 338088
typedef char Word[WORD_MAX_LENGTH];

int isWordOK(char *word, char *model){
    if(strlen(word) != strlen(model)) return 0;
    for(int i = 0; model[i]; i++) if(model[i] != '?' && model[i] != word[i]) return 0;
    return 1;
}

int main(){

    char model[26];
    printf("Entrer un mot avec des '?' a la place des lettres inconues : ");
    scanf("%s",model);
    char word[WORD_MAX_LENGTH];
    file=fopen("dico.txt","r");
    if (!file) fprintf(stderr,"pb ouverture du fichier !");
    for(int i=0; i<WORD_MAX_NUMBER; i++) {
        fscanf(file, "%s",word);
        if( isWordOK(word, model) ) printf("%s\n",word);
    }
    return 0;
}