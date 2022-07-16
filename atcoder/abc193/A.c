// Source: https://usaco.guide/general/io

#include <stdio.h>

int main() {
	float a, b;
	scanf("%f%f" , &a, &b) ;
	printf("%f" , ((a-b)/a*100)*1.0) ;
}
