#include <stdio.h>

int main() 
{
	
    char s[100];
    printf("Hello,World!\n");
    scanf("%[^\n]%*c", s);
  	printf("%s",s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}