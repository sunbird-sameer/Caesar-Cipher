
#include <stdio.h>
#include <string.h>

int main()
{
char mystring [10]; 
char a = 'a' ;

printf("\n\n\n");

printf("Enter the encrypted message: \n");

scanf("%s", mystring);


int x=0;
for (; x < strlen(mystring); x++ ) {
	mystring[x] = mystring[x] -7; 
}

printf("\n");

printf ("Decrypted message is: \n");

printf("%s",mystring);

printf("\n"); 

printf("Press any key to continue");

scanf("%s", &a);

return 0;
}
