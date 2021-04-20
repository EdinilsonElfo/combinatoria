#ifndef CONTAGEM_H
#define CONTAGEM_H
#include <math.h>

int fatorial(int n) {
	int f=1;
	while(n>0) {
		f=f*n;
		n=n-1;
	}
	return f;
}

int permutacao(int n) {
	int p=1;
	p=fatorial(n);
	return p;
}

int arranjo(int n, int p) {
	int a=1;
	a=permutacao(n)/fatorial(n-p);
	return a;
}

int combinacao(int n, int p) {
	int c=1;
	c=arranjo(n, p)/permutacao(p);
	return c;
}

int per_circular(int n) {
	int pc=1;
	pc=fatorial(n-1);
	return pc;
}

int per_repeticao(int n) {
	int pr=1;
	//Codigo para Permutação com Repetição
	return pr;
}

int arr_repeticao(int n, int p) {
	int ar=1;
	ar=pow(n, p);
	return ar;
}

int com_repeticao(int n, int p) {
	int cr=1;
	cr=combinacao(n+p-1, p);
	return cr;
}

#endif
