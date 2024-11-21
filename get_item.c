/**BY SUBMITTING THIS ASSIGNMENT TO CARMEN, I CERTIFY THAT I HAVE STRICTly ADHERED TO THE 
 * TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLUICY WITH RESPECT TO 
 * THIS ASSIGNEMNT
 *Name: Yihone Chu
 * */

#include <stdio.h>
#include <stdlib.h>

void get_item(char** ingredients){


	(*ingredients) =(char*)malloc(61*sizeof(char));
	
	if(*ingredients == NULL){
		printf("error: this pointer is empty");
	}
	
	scanf(" %[^\n]",(*ingredients));	
}
