#include <stdio.h>
#include <string.h>


struct musica {
    char titulo[50];
    char artista[50];
    int plays;
};

void tocarMusica(struct musica *ptr_musica);

int main (void) {

    struct musica wilder;
    strcpy(wilder.titulo, "To The Wilder");
    strcpy(wilder.artista, "Woodkid");
    wilder.plays = 99;

    tocarMusica(&wilder);
    tocarMusica(&wilder);
}

void tocarMusica(struct musica *ptr_musica) {
    ptr_musica->plays += 1;

    if (ptr_musica->plays > 100) {
        printf("🔥 %s virou um HIT Mundial!\n", ptr_musica->titulo);
    } else {
        printf("Tocando... Plays: %d\n", ptr_musica->plays);
    }
}
