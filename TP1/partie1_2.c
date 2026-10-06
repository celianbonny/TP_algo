#include <stdio.h>

// Partie 2.1 echange naif
/*
int main() {
	int xa, xb, tmp;
	printf("Entrez la valeur de xa : ");
	scanf_s("%d", &xa);
	printf("Entrez la valeur de xb : ");
	scanf_s("%d", &xb);

	tmp = xa;
	xa = xb;
	xb = tmp;

	printf("Après l'échange : xa = %d, xb = %d\n", xa, xb);

	return 0;
}
*/

// partie 2.2 echange malin
/*
int main() {
	int xa, xb, tmp;
	printf("Entrez la valeur de xa : ");
	scanf_s("%d", &xa);
	printf("Entrez la valeur de xb : ");
	scanf_s("%d", &xb);

	xa = xa + xb;
	xb = xa - xb;
	xa = xa - xb;

	printf("Après l'échange : xa = %d, xb = %d\n", xa, xb);

	return 0;

}

*/

// partie 2.3 polynome basique

int main() {
	int calcul1, calcul2, calcul3, calcul4, w = -2, x = 10, y = 5, z = 3;
	calcul1 = (3 * w * w) - (8 * w) + 7;
	calcul2 = (3 * x * x) - (8 * x) + 7;
	calcul3 = (3 * y * y) - (8 * y) + 7;
	calcul4 = (3 * z * z) - (8 * z) + 7;

	printf("Pour w = %d, le polynome vaut : %d\n", w, calcul1);
	printf("Pour x = %d, le polynome vaut : %d\n", x, calcul2);
	printf("Pour y = %d, le polynome vaut : %d\n", y, calcul3);
	printf("Pour z = %d, le polynome vaut : %d\n", z, calcul4);

}
