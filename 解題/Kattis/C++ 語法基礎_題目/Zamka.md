# [Zamka](https://open.kattis.com/problems/zamka)
```cpp
#include<iostream>
using namespace std;
int main(){
	long long l,d,x;
	cin>>l>>d>>x;
	for(int i=l,a;i<=d;i++){
		a=0;
		for(int j=i;j>0;){
			a=a+j%10;
			j=j/10;
		} 
		if(a==x){
			cout<<i<<"\n";
			break;
		}
	}
	for(int i=d,a;i>=l;i--){
		a=0;
		for(int j=i;j>0;){
			a=a+j%10;
			j=j/10;
		} 
		if(a==x){
			cout<<i<<"\n";
			break;
		}
	}
}
```
