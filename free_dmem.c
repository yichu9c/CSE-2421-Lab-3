/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE
 * TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTREGRITY POLICY WITH RESPECT TO
 * THIS ASSIGNMENT:
 * 
 * Name: YIHONE CHU
 *
 * 
 * */

#include <stdio.h>
#include <stdlib.h>

void free_dmem(char*** availableIngredients, char*** thisPizza, int numAvailable, int numPizza){
	int i;
	
	for(i=0; i<numAvailable; i++){
		free(**availableIngredients +i);
	}	
	free(*availableIngredients);

	for(i=0; i< numPizza; i++){
		free(**thisPizza +i);
	}

	free(*thisPizza);
}
