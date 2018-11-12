#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int alpha_comp(char *arra_address[],int,int);
void select_sort_str(char *arra_address[], int n);

int main(){
	char origi[6][40]={{"Ryan, Elizabeth       62"},{"McIntyre, Osborne       84"},{"DuMond, Kristin         18"},{"Larson, lois         42"},{"Thorpe, trinity          15"},{"Ruiz, pedro             35"}};
	char *alpha[20];
	int i =0;

	for(i =0; i<6;++i)
		alpha[i]=origi[i];//copies only address
	char *temp;
		for(int j=0;j<5;j++){
			for(int i=0;i<5;i++){
				if(strcmp(alpha[i],alpha[i+1])>0){
					temp=alpha[i];
					alpha[i]=alpha[i+1];
					alpha[i+1]=temp;

					
				}
			}
		}	
    printf("Original list\n-------------------------\n");
	
	for(i=0;i<6;++i)
	printf("%-s\n",origi[i]);

	printf("Alphabetized list\n---------------------\n");
	for(i=0;i<6;++i)
	printf(" %-s\n",alpha[i]);
	
	system("PAUSE");
	return 0;
}

