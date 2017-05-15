#include<stdio.h>
#include<string.h>

int main(){
    char a[1000000], b[1000000];

    while(scanf("%s %s%*c", &a, &b)!=EOF){
        //printf("a=%lld, b=%lld\n", a, b);
        int sum=0;
        char A=0;
        char B=0;
        int carry=0;
        int lena =strlen(a);
        int lenb =strlen(b);
        //printf("%d\n",lena);
        //printf("%d\n",lenb);

        while((lena>-1)||(lenb>-1)){
            A=a[lena-1];
            //printf("%c=> %d\n", A, A-48);
            B=b[lenb-1];
            //printf("%c=> %d\n", B ,B-48);

            if((A-48)<0||lena<0) A=0;
            else         A=A-48;
            if((B-48)<0||lenb<0) B=0;
            else         B=B-48;
            //printf("A+B+carry=%d+%d+%d\n", A, B, carry);
            if(A+B+carry>=10){
                sum++;
                carry=1;
            }
            else{
                carry=0;
            }
            lena--;
            lenb--;
        }
                int i;
        for(i=0;i<lena;i++){
            a[i]='0';
        }
        for(i=0;i<lenb;i++){
            b[i]='0';
        }
        printf("%d\n", sum);
    }
    return 0;
}
