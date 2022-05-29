# [Stopwatch](https://open.kattis.com/problems/stopwatch)
```cpp
#include <iostream>
using namespace std;
int main(){
	int a;
	int c,b,m=0;
	for(cin>>a;a>0;a=a-2){
		if(a==1){
			cin>>c;
			break;
		}
		cin>>c;
		cin>>b;
		m=m+b-c;
	}
	if(a%2==1)
		cout<<"still running\n";
	else
		cout<<m<<"\n";
	return 0;
}
```
