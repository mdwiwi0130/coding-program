# [LicenseToLaunch](https://open.kattis.com/problems/licensetolaunch)
```CPP
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	long long i,a[100000],m;
	cin>>i;
	for(int n=0;n<i;n++){
		cin>>a[n];
		if(a[0]>a[n]){
			a[0]=a[n];
			m=n;
		}
	}
	cout<<m;
	return 0;
}
```
