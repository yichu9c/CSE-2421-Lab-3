/**BY SUBMITTING THIS ASSIGNMENT TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE 
 * TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS
 * ASSIGNEMNT
 *
 * Name: YIHONR CHU
 * */



#include <stdio.h>
#include <stdlib.h>

void save_info(char***, int);

void get_thispizza(char*** ingredients,char*** desiredIngredients,int num){

	int i,itemNum;

	*desiredIngredients = (char**)malloc(num* sizeof(char*));
		
	if(*ingredients == NULL){
		printf("Error: this pointer is null\n");
	}

	for(i=0; i< num; i++){
		*(*desiredIngredients+i) = (char*)malloc(61*sizeof(char));
	}
		
	printf("Enter the number of each ingredient you want on your pizza:\n");
	
	for(i=0; i< num; i++){
		scanf("%d",&itemNum);
		getchar();	
		*(*desiredIngredients +i) = *(*ingredients + itemNum-1);		
	}
	printf("The ingredients on your pizza will be:\n");

	for(i=0; i< num; i++){
		printf("%d.\t %s\n",i+1,*(*desiredIngredients +1));

	}	
}
