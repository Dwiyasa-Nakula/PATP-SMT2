#include <stdio.h>
#include <string.h>

typedef struct peserta{
    char nama[100];
    char soal;
    int score;
} peserta;

int main(void){
    int n, m, maks_score = 0, nomer_peserta = 0;
    scanf("%d %d", &n, &m);

    peserta peserta[100] = {0};

    for(int i=0; i < n; i++){
    char name[100];
    int score;
    scanf("%s %c %d", peserta.name, &peserta[i].soal, &peserta.score);
    
    int index_peserta = -1;
        for(int j=0; j < nomer_peserta; j++){
            if(strcmp(name, peserta[j].nama) == 0){
            index_peserta = j;
            break;
            }
        }
    
    if(index_peserta == -1){
        strcpy(peserta[nomer_peserta].nama, name);
        index_peserta = nomer_peserta;
        nomer_peserta++;
        }
        peserta[index_peserta].score += score;
    }
    
    for(int i=0; i < nomer_peserta; i++){
       if(peserta[i].score > maks_score){
            maks_score = peserta[i].score;
       }
    }

    if(m >= maks_score){
        printf("YES MENANG\n");
    } else {printf("NICE TRY\n");}
    return 0;
}