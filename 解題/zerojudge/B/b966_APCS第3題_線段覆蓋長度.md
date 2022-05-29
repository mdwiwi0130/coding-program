# [b966: 第 3 題 線段覆蓋長度](https://zerojudge.tw/ShowProblem?problemid=b966)
```cpp
#include <iostream>
#include <algorithm>
using namespace std;
pair<int,int> m[10000];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m[i].first>>m[i].second;
	}
	sort(m,m+n);
	int now=0,ans=0;
	for(int i=0;i<n;i++){
		if(now<m[i].first){
			ans=ans+m[i].second-m[i].first;
			now=m[i].second;
		} 
		else if(m[i].first<=now&&now<m[i].second){
			ans=ans+m[i].second-now;
			now=m[i].second;
		}
	}
	cout<<ans;
	return 0;
}
```
