# [Reverse](https://open.kattis.com/problems/ofugsnuid)
```cpp
#include <iostream>
using namespace std;
int main(){
	int i,n=0,a[100000];
	for(cin>>i;i>0;i--){
		cin>>a[n];
		n++;
	}
	for(int i=n-1;i>=0;i--){
		cout<<a[i]<<"\n";
	}
	return 0;
}
```
