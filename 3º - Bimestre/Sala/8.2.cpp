#include <stdio.h>
#include <conio.h>
#include <iostream>

int fib(int n) {
	if (n == 1 || n == 2)
	return 1;
	
	return fib (n - 1) + fib(n - 2);
}
int main(int argc, char *argv[]) {
	cout << fib(3) << endl;
	return 0;
}
