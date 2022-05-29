# [JumboJavelin](https://open.kattis.com/problems/jumbojavelin)
```cpp
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int i,a,b=0;
	for(cin>>i;i>0;i--){
		cin>>a;
		b=b+a-1;
	}
	cout<<b+1;
	return 0;
}
```
