#include <stdio.h>

int main(){
    long long int size;
    while(scanf("%lld", &size)!=EOF){
        long long int num, in, buf;
        num = 0;
        buf = 0;
        while(1){
            scanf("%lld", &in);
            if(in == 0){
                if(buf != 0)
                    num++;
                printf("%lld\n", num);
                break;
            }
            if(buf + in > size){
                buf = in;
                num++;
            }
            else if(buf + in == size){
                buf = 0;
                num++;
            }
            else{
                buf = buf + in;
            }
        }
    }
    return 0;
}
