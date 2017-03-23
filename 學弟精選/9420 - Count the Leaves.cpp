#include <iostream>
using namespace std;
int a[1002];
int main(void)
{
    while(1){
        int i,p,c,cont=0,N,root;
        cin>>N;
        if(N==0) break;
        for(i=0;i<N;i++){
            cin>>p>>c;
            a[p]+=2;
            a[c]+=1;
        }
        cin>>root;
        for(i=1;i<1002;i++) if(a[i]==1) cont++;
        for(i=0;i<1002;i++) a[i]=0;
        cout<<cont<<endl;
    }
    return 0;
}
