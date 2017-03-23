#include <iostream>
#include <queue>
using namespace std;
int main(void)
{
	string cmd;
	string name;
	queue<string> s;
	while(cin>>cmd){
		if(cmd[1]=='u'){
			cin>>name;
			s.push(name);
		}else if(cmd[1]=='o'){
			if(!s.empty())s.pop();
		}else{
			if(s.empty()) cout<<"empty"<<endl; 
			else cout<<s.front()<<endl;
		}
	}
	return 0;
}
