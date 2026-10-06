#include <stdio.h>

// Partie 1 facteur
/*

int main() {
	int x, y,z,i;
	printf("Entrez la valeur de x : ");
	scanf_s("%d", &x);
	printf("Entrez la valeur de y : ");
	scanf_s("%d", &y);
	z = 1;
	for (i = 0; i < y; i++) {
		z = z * x;
	}
	printf("Le resultat de %d puissance %d est : %d\n", x, y, z);

}
*/

// partie 2 prix unitaire
/*
int main() {
	int prixht, prixTTC, quantite, taxe = 0.2;
	printf("Entrez le prix unitaire HT : ");
	scanf_s("%d", &prixht);
	printf("Entrez la quantite : ");
	scanf_s("%d", &quantite);
	prixTTC = prixht * quantite * 1.2;
	printf("Le prix TTC est : %d\n", prixTTC);
	return 0;
}

*/

// partie 3 H+1
/*
int main(void)
{
	int h, m;

	printf("Heures : ");
	scanf_s("%d", &h);
	printf("Minutes : ");
	scanf_s("%d", &m);

	m=m+1;
	if (m == 60) {
		m = 0;
		h=h+1;
		if (h == 24)
			h = 0;
	}

	printf("Une minute apres : %02dh%02d\n", h, m);

	return 0;
}

*/

int main(void)
{
	int n;
	int centimes;

	printf("Nombre de photocopies : ");
	scanf_s("%d", &n);

	if (n < 0) {
		printf("Nombre invalide\n");
		return 1;
	}

	if (n <= 10)
		centimes = 20 * n;
	else if (n <= 30)
		centimes = 20 * 10 + 10 * (n - 10);
	else
		centimes = 20 * 10 + 10 * 20 + 8 * (n - 30);

	printf("Prix total : %.2f euros\n", centimes / 100.0);
	return 0;
}