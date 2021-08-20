#include <stdio.h>
struct s{

	int a;


};

main(){


	struct s d;
	d.a=10;
	
    int a=10;
    char *ptr=&d.a;
    char *p;
    p=&a;
    if(*p==10)
        printf("Little Endian\n");
    else
        printf("Big Endian\n");
     
    if(*ptr==10)
        printf("Little Endian struct\n");
    else
        printf("Big Endian struct\n");
}
