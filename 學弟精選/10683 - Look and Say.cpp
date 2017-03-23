#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(void)
{
	int N,i,j,k,round;
	string str;
	cin>>N;
	for(i=0;i<N;i++){
		cin>>str;
		cin>>round;		
		for(j=0;j<round;j++){
			ostringstream convert;
			int count=1;
			for(k=0;k<str.length();){
				while(str[k+count]==str[k]){
					count++;
					if(k+count==str.length()) break;
				}
				convert<<count<<str[k];
				k+=count;
				count=1;
			} 
			str.clear();
			str = convert.str();
		}
		cout<<str<<endl;
	}
	return 0;
}
