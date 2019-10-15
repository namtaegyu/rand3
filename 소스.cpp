#include <stdio.h>
int main() {
	int a = 9411, b = 6738;
	int i;
	for (i = 0; i < 10; i++) {
		a = (a * b) % 10000;
		printf("%d\n", a);
	}
}