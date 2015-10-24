#include <stdio.h>
#include <math.h>

int main(){
	iniciar();
	float a[3] = {2.4, 2.9, 4.1};
	float b[3] = {2.4, 2.9, 4.1};
	init_nbody(3, a, b);
	compute_potential();
	return 0;
}
