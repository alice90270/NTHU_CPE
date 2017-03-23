#include <iostream>
#include <map>
#include <stack>
using namespace std;
/*
map<char,char> p={
    {'{','}'},
    {'[',']'},
    {'(',')'},
    {'<','>'},
};
*/

int main(void)
{
	map<char,char> p;
	p['{']='}';
	p['[']=']';
	p['(']=')';
	p['<']='>';
	int n, i;
	string s;
	cin>>n;
	getline(cin,s);
	for(i=1;i<=n;i++){
		stack<char> sta;
		getline(cin,s);
		bool valid=true;
		for(char c:s){
			if(c=='{'||c=='['||c=='('||c=='<'){
				sta.push(c);
			}else if(c=='}'||c==']'||c==')'||c=='>'){
				if(sta.empty()){
					valid=false;
					break;
				}else if(p[sta.top()]!=c){
					valid=false;
					break;
				}else{
					sta.pop();
				}
			}
		}
		if(!sta.empty()){			
			valid=false;
		}
		cout<<"Case "<<i<<": ";
		if(valid){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
 } 
