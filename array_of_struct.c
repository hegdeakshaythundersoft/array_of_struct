/*3 wap to declare an array of struct with a char data type and initialize the character with "h" ,"e" ,"l","l","o" and sort the array in alphabetical order - use malloc / calloc for struct variable */
#include<stdio.h>
#include<stdlib.h>
struct s{
	char c;/*declared struct s with one char*/



};

void sort(struct s*);
int main(){
	
	struct s *str=(struct s*)malloc(sizeof(struct s)*5);/*DMA struct array*/
	register int i;

	printf("enter the string ex:hello\n");/*input str hello*/
	for(i=0;i<5;i++)
		scanf("%c",&str[i].c);
	
	
	for(i=0;i<5;i++)
	printf("%c\t",str[i].c);/*unsorted*/
	printf("\n");
	
	
	sort(str);
	
	for(i=0;i<5;i++)
	printf("%c\t",str[i].c);/*sorted in alphabetical order*/

	return 0;
}

void sort(struct s *p){
	int i,j;
	char temp;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){	/*ptr having struct array address exchange elements*/
	
			if((p+i)->c<(p+j)->c){
			temp=(p+i)->c;
			(p+i)->c=(p+j)->c;
			(p+j)->c=temp;
			}
		}	
	}
	return;
}



















