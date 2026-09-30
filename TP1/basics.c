#include <stdio.h>

int algo1(int a, int b) {
	int r = 0; 
	a = a + 1;
	b = b * a; 
	r = b - a;
	return r;
}


int algo2(int x, int y) {
	int a = 1;
	int b = 1;
	int c = 1;
	int r;             

	a = a * x + y;
	b = b * y + x;
	r = c * (x + y);    
	return r;
}

int algo3(int c, int d) {
	int z = algo1(c, d);
	return algo2(c - d, z);
}

int main() {
	printf("r1  = %d\n", algo1(1, 0));   
	printf("r2  = %d\n", algo1(0, 5));
	printf("r3  = %d\n", algo1(-1, 5));
	printf("r4  = %d\n", algo2(3, 3));
	printf("r5  = %d\n", algo2(3, 0));
	printf("r6  = %d\n", algo2(0, 3));
	printf("r7  = %d\n", algo2(5, 2));
	printf("r8  = %d\n", algo2(0, 1));
	printf("r9  = %d\n", algo3(1, 0));
	printf("r10 = %d\n", algo3(1, 2));
	printf("r11 = %d\n", algo3(0, 3));
	printf("r12 = %d\n", algo3(0, 5));
}