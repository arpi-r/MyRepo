#include<stdio.h>
#include<string.h>
#include<unistd.h>

int main() {

	char buffer[100];
	read(0, buffer, sizeof(buffer));

	void (*executeme)();
	executeme = buffer;
	executeme();
	
	return 0;
}