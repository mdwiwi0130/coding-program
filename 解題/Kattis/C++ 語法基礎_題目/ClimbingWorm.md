# [Climbing Worm](https://open.kattis.com/problems/climbingworm)
```cpp
#include <iostream>
using namespace std;
int main(){
	int a,c,y,t=0;
	cin>>a>>c>>y;
	while(y>0){
		y=y-a;
		t++;
		if(y>0)
			y=y+c;
	}
	cout<<t<<"\n";
	return 0;
}

```
