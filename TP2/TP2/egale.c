#include <stdio.h>
#include <string.h>


/* 1.1 EGAL : compare deux chaines sans tenir compte de la casse */
/*
int EGAL(char gauche[], char droite[])
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

 
    if (gauche[i] == droite[i])
    {
        return 1;
    }
    return 0;
}

int main()
{
    printf("%d\n", EGAL("Bonjour", "bONJOUR")); 
    printf("%d\n", EGAL("Bonjour", "Salut"));      
    return 0;
}
*/