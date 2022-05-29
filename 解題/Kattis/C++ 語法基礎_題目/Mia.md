# [Mia](https://open.kattis.com/problems/mia)
```cpp
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a[4],b[2],n=1;
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]){
		if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3]&&a[3]==0)
			break;
		else{
			b[0]=max(a[0]*10+a[1],a[0]+a[1]*10);
			b[1]=max(a[2]*10+a[3],a[2]+a[3]*10);
		}
		if((b[0]==21||b[1]==21)&&b[0]+b[1]!=42){
			if(b[0]==21)
				cout<<"Player 1 wins.\n";
			else if(b[1]==21)
				cout<<"Player 2 wins.\n";
		}
		else if(b[0]==b[1])
			cout<<"Tie.\n";			
		else if((b[0]+b[1])%11==0){
			cout<<"Player ";
			if(b[0]>b[1])
				cout<<"1";
			else
				cout<<"2";
			cout<<" wins.\n";
		}
		else if(b[0]%11==0)
			cout<<"Player 1 wins.\n";
		else if(b[1]%11==0)
			cout<<"Player 2 wins.\n";
		else{
			cout<<"Player ";
			if(b[0]>b[1])
				cout<<"1";
			else
				cout<<"2";
			cout<<" wins.\n";		
		}
	}
	return 0;
}
```
