/*4 wap to declare an array of struct containing student data - name , branch , cgpa 
   - write student_count(..) fn to take input on no.of students 
   - write input_data(..) fn to input details of student data 
    - write print(..) fn to print details of all students 
*/
#include<stdio.h>
#include<stdlib.h>

struct s{
	
	char name[10];
	float cgpa;
	char branch[10];
				/*declared struct s with student data*/



};
struct s* count();
void insert(struct s*);
void print(struct s*);
int n;
int main(){
	
	//struct s *str=(struct s*)malloc(sizeof(struct s)*5);/*DMA struct array*/
	//struct s str[3];
	register int i;

	
	
	
	
	struct s *str=count(1);
	insert(str);
	print(str);
	

	return 0;
}
struct s* count(){

	//struct s *str=
	printf("Enter the student count\n");
	scanf("%d",&n);
	return (struct s*)malloc(sizeof(struct s)*n);/*DMA struct array*/
	



}
void insert(struct s *p){

	int i,j;
	printf("enter the name string:branch string:cgpa float\n");/*input str hello*/
	
	for(i=0;i<n;i++)
		scanf("%s %s %f",(p+i)->name,(p+i)->branch,&(p+i)->cgpa);
	return;
}

void print(struct s *q){

	int i;
	printf("the details are name string:branch string:cgpa float\n");/*input str hello*/
	for(i=0;i<n;i++)
		printf("%s\t%s\t%f\n",(q+i)->name,(q+i)->branch,(q+i)->cgpa);
	
	return;
}

















