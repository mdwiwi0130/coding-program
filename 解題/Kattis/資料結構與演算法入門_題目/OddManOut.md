# [Odd Man Out](https://open.kattis.com/problems/oddmanout)
```cpp
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,g;
	cin>>n;
	for(int i=0;i<n;i++){
		int ans=0,c[1000]={};
		cin>>g;
		for(int j=0;j<g;j++)
			cin>>c[j];
		sort(c,c+g);
		for(int j=0;j<g;j++){
			if(c[j]==c[j+1])
				j++;
			else
				ans=c[j];
		}
		cout<<"Case #"<<i+1<<": "<<ans<<"\n";
	}
	return 0;
}
```
