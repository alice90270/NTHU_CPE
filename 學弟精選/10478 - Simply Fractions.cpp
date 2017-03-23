#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	int N;
	long long a, b, c, d;
	long long gcd;
	while(cin>>N){
		for(int i=0;i<N;i++){
			cin>>a>>b;
			c=b*c+a*d;
			d=b*d;
			gcd = __gcd(c,d);
			c=c/gcd;
			d=d/gcd;
		}
		cout<<c<<"/"<<d<<"\n";
		c=0;d=1;
	}
	return 0;	
}
