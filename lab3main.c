/**BY SUBMITTING THIS ASSIGNMEN TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE 
 * TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS
 * ASSIGNEMNT.
 * Name: YIHONE CHU
 * */



#include <stdio.h>
#include <stdlib.h>

void get_ingredients(char***, int);
void get_thispizza(char***, int);
void save_info(char***,char***,int,int);
void free_dmem(char***,char***, int, int);

int main(){
	int numPizza;
	int numAvailable;
	int i;
	char ***availableIngredients;
	char ***thisPizza;

	printf("How many available pizza ingredients do we have today:\n");
	scanf("%d",&numAvailable);
 	get_ingredients(availableIngredients,numAvailable);

	printf("Welcome to our Pizza ordering system!\nToday we have the following fresh ingredients:\n");
	for(i=0; i< numAvailable; i++){
		printf("%d.\t %s\n",i+1,*(*availableIngredients+i));
	}

	printf("Of our %d ingredients, how many do you plan to put on your pizza\n",numAvailable);
	scanf("%d",&numPizza);
	
	get_thispizza(thisPizza,numPizza);

	save_info(availableIngredients,thisPizza, numAvailable,numPizza);	
	
	free_dmem(availableIngredients,thisPizza,numAvailable,numPizza);
	
	return 0;
}
