# [B - Various distances](https://atcoder.jp/contests/abc180/tasks/abc180_b)
```cpp
#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	long long a,n[100000]={},mix=0;
	cin>>a;
	long double m=0.0;
	for(int i=0;i<a;i++){
		cin>>n[i];
		if(n[i]<0)
			n[i]=abs(n[i]);
		mix=mix+n[i];
		m=m+pow(n[i],2);
	}
	sort(&n[0],&n[a]);
	cout<<mix<<"\n"<<fixed<<setprecision(15)<<sqrt(m)<<"\n"<<n[a-1]<<"\n";
}
```
