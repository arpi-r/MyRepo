#include<stdio.h>

int main(){
	//method 1
	
	char *blah[2];
	blah[0]="/bin/sh";
	blah[1]=NULL;
	execve(blah[0],blah,NULL);
	

	//method2
	/*
	char *str="/bin/sh";
	printf("%s",str);
	char **ptr=*str;
	printf("%x",*ptr);
	//**ptr=str;
	//*ptr[0]=str;
	//*ptr[1]=NULL;
	execve(str,ptr,NULL);
	*/
	return 0;
}
