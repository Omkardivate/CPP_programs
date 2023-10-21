#include<stdio.h>
// C
#include<stdlib.h>

int main()
{
	int n;
	
	printf("Enter the no. of chars in name:");
	scanf("%d", &n);
	
	char* ptr=(char*) malloc(n*sizeof(char)+1);
	
	scanf("%s", ptr );
		
	printf("Hii %s", ptr);
	
	free(ptr);
}
