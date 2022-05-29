# [Last Factorial Digit](https://open.kattis.com/problems/lastfactorialdigit)
```cpp
#include <iostream>
using namespace std;
int main(){
	int y,a;
	cin>>y;
	for(int u=1;u<=y;u++){
		cin>>a;
		for(int i=a-1;i>0;i--){
			if(a==1)
				break;
			a=a*i;
		}
		if(a>=10)
			a=a%10;
		cout<<a<<"\n" ;
	}
	return 0;
}

```
