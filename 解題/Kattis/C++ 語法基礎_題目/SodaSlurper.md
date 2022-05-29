# [Soda Slurper](https://open.kattis.com/problems/sodaslurper)
```cpp
#include <iostream>
using namespace std;
int main(){
	int a,b,c,t=0;
	cin>>a>>b>>c;
	a=a+b;
	while(a>c-1){
		a=a-c+1;
		t++;
	}
	cout<<t<<"\n";
	return 0;
}

```
