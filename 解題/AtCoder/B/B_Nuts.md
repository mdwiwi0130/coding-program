# [B - Nuts](https://atcoder.jp/contests/abc204/tasks/abc204_b)
```cpp
#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	int x,m=0;
	for(int i=1;i<=a;i++){
		cin>>x;
		if(x>10){
			x=x-10;
			m=m+x;	
		}
	}
	cout<<m<<"\n";
	return 0;
}

```
