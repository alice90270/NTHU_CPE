#include <stdio.h>

#include "10808.h"
#include "function.cpp" 

int main(void){

    char c;

    int length, n, i;

    scanf("%c %d %d", &c, &length, &n);

    if (length>1)

    length_greater_than_one(c, length, n);

    else {

        for (i=0; i<n-1; i++)

            printf("%c\n", c);

    }

    // print the last line

    printf("%c", c);

    return 0;

}
