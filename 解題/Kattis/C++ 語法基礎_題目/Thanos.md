# [Thanos](https://open.kattis.com/problems/thanos)
```cpp
#include<iostream>
using namespace std;
int main(){
	long long i,p,r,f;
	cin>>i;
	for(;i>0;i--){
		int d=0;
		for(cin>>p>>r>>f;;){
			if(p>f){
				cout<<d<<"\n";
				break;
			}
			else{
			 p=p*r; 
			 d++;
			}
		}
	}
}
```
