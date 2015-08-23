#include <stdio.h>

void main()
{
	int x;  // First  number
	int y;  // Second number
	int z;  // Output 
	int m;	// Result of substraction
	
	scanf("%d", &x);
	scanf("%d", &y);

	z = x + y;
	m = x - y;
	
	printf("%d", z);
	printf("%d", m);
}
