# [Job Expenses](https://open.kattis.com/problems/jobexpenses)
```cpp
#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	int x,m=0;
	for(int i=1;i<=a;i++){
		cin>>x;
		if(x<0)
			m=m+x;	
	}
	cout<<0-m<<"\n";
	return 0;
}
```
