#include <stdio.h>
#include <string.h>
//#include "function.h"
int isPalindrome(char *start, char *end)
{
	 
	while(start<=end){
		if(*start!=*end) return 0; 
		start++;
		end--;
	} 
	return 1; 
 } 
int main()
{
        char str[5000];
        while (EOF != scanf("%s", str))
        {
                char *start = str;
                char *end = start + strlen(str) - 1;
                if (isPalindrome(start, end))
                {
                        printf("Yes\n");
                }
                else
                {
                        printf("No\n");
                }
        }
}
