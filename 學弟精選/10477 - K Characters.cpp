#include <iostream>
#include <string.h>

using namespace std;
string s;
char C[26];
void kc(int c,int len)
{
	if(c>'K'-'A') return;
	if(len==0){
		cout<<s<<"\n";
		return;
	} 
	if(C[c]){
		s.push_back(c+'A');
		C[c]--;
		kc(c,len-1);
		C[c]++;
		s.pop_back();		
	}
	kc(c+1,len);
	
}
int main(void)
{
	ios_base::sync_with_stdio(false);
	int N, len;
	string in;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>in>>len;
		memset(C,0,26);
		for(char c:in) C[c-'A']++;
		s.clear(); 
		kc(0,len);
		cout<<"\n";
	}
}
