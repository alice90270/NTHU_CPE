#include<stdio.h>
#include<string.h>
/* check whether two symbols are of same bracket type */
int check_pair(char a, char b)  {

    if(a=='(' && b==')') return 1;
    else if(a=='<' && b=='>') return 1;
    else if(a=='[' && b==']') return 1;
    else if(a=='{' && b=='}') return 1;
    return 0;
}

int main(){
    int testcase, i, j, error, length, cp_index;
    char sp;
    // %c for handling \n
    scanf("%d%c", &testcase, &sp);

    for(i=1; i<=testcase; i++){

        char s[1005], cp[1005];
        gets(s);
        // empty string
        if(strlen(s)==0) {
            printf("Case %d: Yes\n", i);
            continue; //next loop
        }

        length = strlen(s);
        cp_index=0;
        error=0;
        for(j=0; j<length; j++){
            /* left: push in stack */
            if(s[j]=='(' || s[j]=='<' || s[j]=='[' || s[j]=='{'){
                cp[cp_index++]=s[j];
            }
            /* right: */
            else if(s[j]==')' || s[j]=='>' || s[j]==']' || s[j]=='}'){
                /* (1) current char and stack top are not a pair... */
                /* (2) first can't be a right bracket ) > } ] */
                if(cp_index==0 || !check_pair(cp[cp_index-1], s[j])){
                    /* set error and directly stop the process */
                    error=1;
                    break;
                }
                // got a pair, delete it from stack
                else cp_index--;
            }
        }
        if(cp_index!=0 || error==1)
            printf("Case %d: No\n", i);
        /* no error detected and all symbols are in pair */
        else
            printf("Case %d: Yes\n", i);
    }
    return 0;
}
