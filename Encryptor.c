
#include <stdio.h>
#include <string.h>

int main()
{
char mystring [100]; 
char a = 'a' ;

printf("\n\n\n");

printf("Enter the message to encrypt: \n");

scanf("%s", mystring);


int x=0; 
for (; x < strlen(mystring); x++ ) {
	mystring[x] = mystring[x] +7; 
}

printf("\n");

printf ("Encrypted message is: \n");

printf("%s\n",mystring); 

printf("\n");

printf("Press any key to continue");

scanf("%s", &a);

return 0;
}
