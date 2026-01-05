#include <stdio.h>		
int main()
{
    int var1= 11; 
 	int var2 = 22; 
 	int var3 = 33;

//print the addresses of these variables
	 printf("%x\n", &var1);      
	 printf("%x\n", &var2);
	 printf("%x\n",&var3);
  
  return 0;
}