#include <stdlib.h>
#include <stdio.h>
#include "wilksFormula.h"


int main( int argc, char *argv[] ){
	double res = 0;
	char *p;
	int i;
	
	for(i=0; i<argc; i++){
		p=argv[i];
		printf("argv[%d]= %s\n",i,p);
	}

	if (wilks_formula_get_men_formula(60.0,520) != 443.508){
		printf("wilks_formula_get_men_formula() failed\n");
	}

	if (wilks_formula_get_women_formula(60.0,520) != 579.748){
		printf("wilks_formula_get_women_formula() failed\n");
	}

	if (reverse_wilks_formula_get_men_total(60.0,500) != 587.5){
		printf("reverse_wilks_formula_get_men_total() failed\n");
	}

	if (reverse_wilks_formula_get_women_total(60.0,500) != 450){
		printf("wilks_formula_get_women_formula() failed\n");
	}
}
   