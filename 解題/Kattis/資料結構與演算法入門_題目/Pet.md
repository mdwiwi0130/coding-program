# [Pet](https://open.kattis.com/problems/pet)
```cpp
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a[4][5]={},b[5]={};
	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			cin>>a[j][i];
		}
	}
	int m=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			b[i]=b[i]+a[j][i];
		}
		if(b[m]<b[i])
			m=i;
	}
	cout<<m+1<<" "<<b[m]<<"\n";
		
}
```
