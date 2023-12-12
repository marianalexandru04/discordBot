#include <stdio.h>
#include <stdlib.h>


int main() {
	int *m;
	m = malloc(10 * sizeof int);
	free(m);
}
