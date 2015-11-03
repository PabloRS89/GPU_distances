#include <stdio.h>
#include <math.h>
#include <curses.h>

FILE *fr;

int main(){
	iniciar();
	float a[3] = {2.4, 2.9, 4.1};
	float b[3] = {2.4, 2.9, 4.1};
	init_nbody(3, a, b);
	compute_potential();

	char line[256];
	char header[256];	
	fr = fopen("32Mpc_050.0256.fvol", "rt");
	while(fgets(line, 256, fr) != NULL){
		sscanf(line, "%s", header);		
	}

	fclose(fr);

	printf("%s\n", header);

	

	return 0;
}

/* 
	char buff[256];
	fr = fopen("32Mpc_050.0256.fvol", "r");
	fscanf(fr, "%s", buff);
	printf("%s\n", buff);

	fgets(buff, 256, (FILE*)fr);
	printf("%s\n", buff);

	fclose(fr);
*/