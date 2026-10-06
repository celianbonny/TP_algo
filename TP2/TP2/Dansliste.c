
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 1.1 EGAL 
int EGAL(char* gauche, char* droite)
{
    int i = 0;

    while (gauche[i] != '\0' && droite[i] != '\0')
    {
        if (tolower(gauche[i]) != tolower(droite[i]))
        {
            return 0;
        }
        i = i + 1;
    }
    return gauche[i] == droite[i];   
}


int DANSLISTE(char* val, char liste[][50], int taille, int ignorerCasse)
{
    int i;

    for (i = 0; i < taille; i = i + 1)
    {
        if (ignorerCasse == 1)
        {
            if (EGAL(val, liste[i]) == 1)
            {
                return 1;
            }
        }
        else
        {
            if (strcmp(val, liste[i]) == 0)
            {
                return 1;
            }
        }
    }
    return 0;
}

// 1.3 POGNON 
double POGNON(int tour)
{
    double argent = 1000;
    int i;

    for (i = 2; i <= tour; i = i + 1)
    {
        argent = argent * 2.16;
    }
    return argent;
}

// Petits tests
int main()
{
    char fruits[3][50] = { "pomme", "Poire", "banane" };
    int t;

    printf("EGAL : %d (attendu 1)\n", EGAL("Bonjour", "bONJOUR"));
    printf("EGAL : %d (attendu 0)\n", EGAL("Bonjour", "Salut"));
    printf("DANSLISTE sans ignorer la casse : %d (attendu 0)\n", DANSLISTE("poire", fruits, 3, 0));
    printf("DANSLISTE en ignorant la casse  : %d (attendu 1)\n", DANSLISTE("poire", fruits, 3, 1));

    for (t = 1; t <= 10; t = t + 1)
    {
        printf("Tour %d : %.0f euros\n", t, POGNON(t));
    }
    return 0;
}