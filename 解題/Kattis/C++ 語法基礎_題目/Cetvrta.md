# [Cetvrta](https://open.kattis.com/problems/cetvrta)
```cpp
#include <iostream>
using namespace std;
int main(){
	int a,b;
	int a1=0,b1=0,a2,b2,m1=0,m2=0;
	cin>>a>>b;
	a1=a1+a;
	b1=b1+b;
	a2=a;
	b2=b;
	for(int i=1;i<=2;i++){
		cin>>a>>b;
		a1=a1+a;
		b1=b1+b;
		if(a2!=a&&m1==0)
			m1=(a2+a)*2;
		if(b2!=b&&m2==0)
			m2=(b2+b)*2;
	}
	cout<<m1-a1<<" "<<m2-b1<<"\n";
	return 0;
}

```
