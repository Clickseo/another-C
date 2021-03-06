#include <stdio.h>

void SWAP(int **, int **);

int main(void)
{
	int	a = 10, b = 20;
	int	*pa = &a, *pb = &b;

	printf("a : %d, b : %d \n", a, b);		// a : 10, b : 20
	SWAP(&pa, &pb);
	printf("a : %d, b : %d \n", a, b);		// a : 20, b : 10

	return 0;
}

// pi --> pa --> a
// pj --> pb --> b
void SWAP(int **pi, int **pj) {
	int	temp;

	temp = **pi;		// temp = a;
	**pi = **pj;		// a = b;
	**pj = temp;		// b = temp;
	
	return;
}
