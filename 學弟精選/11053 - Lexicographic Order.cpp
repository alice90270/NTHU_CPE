#include <iostream>
#include <map>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	int N;
	string str;
	map<string,int> s;
	while(cin>>N&&N!=0){
		for(;N>0;N--){
			cin>>str;
			if(s.find(str)==s.cend()){
				s[str]=1;
			}else{
				s[str]++;
			}
		}
		for(auto c:s){
			for(int i=0;i<c.second;i++){
				cout<<c.first<<endl;
			}
		}
		cout<<endl;
		s.clear();
	}
	return 0;
}
