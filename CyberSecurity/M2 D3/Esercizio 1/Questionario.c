#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    int score = 0;
    char play_again = 'y';
    srand(time(NULL));
    
    // Chiede all'utente se vuole iniziare a giocare o uscire
    printf("Benvenuto al gioco delle domande! Vuoi giocare? (y/n) ");
    char start_game;
    scanf(" %c", &start_game);
    
    // Se l'utente decide di giocare, chiede il nome
    if (start_game == 'y') {
        char name[100];
        printf("Inserisci il tuo nome: ");
        scanf("%s", name);
        printf("Ciao %s, benvenuto al questionario!\n", name);
    } else {
        printf("Arrivederci!\n");
        return 0;
    }
    
    while (play_again == 'y') {
        // Prima domanda
        printf("1. Qual è la capitale dell'Italia?\n");
        printf("a) Roma\nb) Milano\nc) Napoli\nd) Firenze\n");
        char answer1;
        scanf(" %c", &answer1);
        if (answer1 == 'a') {
            printf("Risposta corretta!\n");
            score++;
        } else {
            printf("Risposta sbagliata.\n");
        }
        
        // Seconda domanda
        printf("2. Quale è l'elemento più comune nell'atmosfera terrestre?\n");
        printf("a) Ossigeno\nb) Azoto\nc) Anidride carbonica\nd) Idrogeno\n");
        char answer2;
        scanf(" %c", &answer2);
        if (answer2 == 'b') {
            printf("Risposta corretta!\n");
            score++;
        } else {
            printf("Risposta sbagliata.\n");
        }
        
        // Terza domanda
        printf("3. Chi ha scritto il romanzo \"1984\"?\n");
        printf("a) Aldous Huxley\nb) George Orwell\nc) Ray Bradbury\nd) Isaac Asimov\n");
        char answer3;
        scanf(" %c", &answer3);
        if (answer3 == 'b') {
            printf("Risposta corretta!\n");
            score++;
        } else {
            printf("Risposta sbagliata.\n");
        }
        
        // Calcola il punteggio finale e chiede se si vuole rigiocare
        printf("Il tuo punteggio finale è: %d\n", score);
        printf("Vuoi rigiocare? (y/n) ");
        scanf(" %c", &play_again);
        
        // Resetta il punteggio se si vuole rigiocare
        if (play_again == 'y') {
            score = 0;
        }
    }
    
    printf("Grazie per aver giocato!");
    return 0;
}