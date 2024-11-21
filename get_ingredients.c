/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I AHVE STRCTILY ADHERED
 * TO THE TEnURES OT HE OHIO SATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY 
 * WITH RESPECT TO THIS ASSIGNMNT.
 *
 *Name: Yihone Chu
 * */

#include <stdio.h>
#include <stdlib.h>

void get_item(char **ingredient);

void get_ingredients(char*** ingredients,int num){
	int i;
	
	*ingredients =(char**)malloc(num* sizeof(char*));
	
	if(*ingredients == NULL){
		printf("error: this pointer is empty)");
	}
	
	printf("Enter the %d ingredients one line at a time:\n",num);
	
	for(i=0; i<num;i++){
		get_item(*ingredients +i);
	}

	printf("The available ingredients today are:\n");

	for(i=0; i<num; i++){
		printf("%d.\t %s\n", i+1,*(*ingredients+i));
	}

}
