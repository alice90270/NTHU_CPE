#include <stdio.h>

int main(){
    int n, i, point;
    char in[1001], buf;
    scanf("%d", &n);
    scanf("%c", &buf);
    point = 0;
    for(i = 0; i < n; i++){
        while(1){
            scanf("%c", &buf);
            //printf("%c\n", buf);
            if(buf == '\n'){
                if(point == 0)
                    printf("Case %d: Yes\n", i+1);
                else
                    printf("Case %d: No\n", i+1);
                point = 0;
                break;
            }
            //printf("%c\n", in[point+1]);
            if(buf == '(' || buf == '[' || buf == '{' || buf == '<'){
                in[point] = buf;
                //printf("%c\n", in[point]);
                point++;
            }
            else if(buf == ')'){
                if(in[point-1] == '(')
                    point--;
                else{
                    in[point] = buf;
                    point++;
                }
            }
            else if(buf == ']'){
                if(in[point-1] == '[')
                    point--;
                else{
                    in[point] = buf;
                    point++;
                }
            }
            else if(buf == '}'){
                if(in[point-1] == '{')
                    point--;
                else{
                    in[point] = buf;
                    point++;
                }
            }
            else if(buf == '>'){
                if(in[point-1] == '<')
                    point--;
                else{
                    in[point] = buf;
                    point++;
                }
            }
            //printf("%d\n", point);
        }
    }
    return 0;
}
