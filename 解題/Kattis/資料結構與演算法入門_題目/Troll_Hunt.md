# [Troll Hunt](https://open.kattis.com/problems/trollhunt)
```cpp
#include<iostream>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	long long k,b,g,group,day;
	cin>>k>>b>>g;
	k--;
	group=b/g;
	day=k/group;
	if(k%group>0)
		day++;
	if(day==0)
		day=1;
	cout<<day<<"\n";
}
```
