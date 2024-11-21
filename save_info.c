#include <stdio.h>
#include <stdlib.h>

void save_info(char*** thisPizza,char*** availableIngredients,int pizzaElements, int numAvailable){
	
	int input;
	
	printf("Do you want to save them?(1=yes, 2=no):\n");
	scanf("%d",&input);

	if(input == 1){
		FILE *out_file;
		char *fileName;
		int i;
		fileName = (char*) malloc(256);
		
		printf("What file name do you want to use:\n");
		scanf("%s",fileName);
		
		out_file = fopen(fileName,"w");	
		
		fprintf(out_file,"Available Pizza Ingredients Today:\n");

		for(i=0; i< numAvailable; i++){
			fprintf(out_file,"%s\n",(*availableIngredients+i));
		}
		
		fprintf(out_file,"Ingredients on This Pizza are:\n");	
		for(i=0; i<pizzaElements; i++){
			fprintf(out_file,"%s\n",i+1,(*thisPizza));
		}
		fclose(out_file);	
	}	
}
