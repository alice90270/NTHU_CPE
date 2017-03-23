#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	int space, box, in, size;
	while(cin>>size){
		box=0;
		space=size;
		cin>>in;
		if(in!= 0){
            box++;
            space = size - in;
            while(cin>>in)
            {
                if(in==0) break;
                else{
                    if(space<in){
                        box++;
                        space = size;
                    }
                    space -= in;
                }
            }
        }
        cout<<box<<endl;
	}
	return 0;
 } 
