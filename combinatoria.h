#ifndef COMBINATORIA_H
#define COMBINATORIA_H

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
	a=permutacao(n)/permutacao(n-p);
	return a;
}

int combinacao(int n, int p) {
	int c=1;
	c=arranjo(n, p)/permutacao(p);
	return c;
}

#endif
