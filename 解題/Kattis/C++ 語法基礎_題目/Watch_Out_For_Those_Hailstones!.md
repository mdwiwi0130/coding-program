# [Watch Out For Those Hailstones!](https://open.kattis.com/problems/hailstone)
```cpp
#include<iostream>
using namespace std;
int main(){
	long long i,a;
	cin>>i;
	for(a=i;i>1;){
		if(i%2==0){
			i=i/2;
		}
		else if(i==1)
			break;
		else{
			i=i*3+1;
		}
		a=a+i;
	}
	cout<<a<<"\n";
}
```
