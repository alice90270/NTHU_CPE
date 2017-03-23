#include <vector>
#include <iostream>
#include <algorithm> 
using namespace std;

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	vector<int> a;
	vector<int> b;
	vector<int> intersection;
	int N1, N2, i, j;
	while(cin>>N1){
		if(N1==0) break;
		for(i=0;i<N1;i++){
			cin>>j;
			a.push_back(j);
		}
		cin>>N2;
		for(i=0;i<N2;i++){
			cin>>j;
			b.push_back(j);
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		set_intersection(a.begin(),a.end(),b.begin(),b.end(),back_inserter(intersection));
		if(intersection.empty()) cout<<"empty"<<endl;
		else{
			for(auto s=intersection.begin();s<intersection.end()-1;s++){
				cout<<*s<<" ";
			}
			cout<<intersection.back()<<endl;
		}
		a.clear();	
		b.clear();
		intersection.clear();	
	}
}
