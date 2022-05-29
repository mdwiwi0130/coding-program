# [Basketball One-on-One](https://open.kattis.com/problems/basketballoneonone)
```cpp
#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main()
{
	string x;
	int a=0,b=0;
	cin>>x;
	for(int i=0;i<=x.size();i=i+2){
		if(x[i]=='A'){
			a=a+x[i+1]-48;
		}
		else if(x[i]=='B'){
			b=b+x[i+1]-48;
		}
	}
	if(a>b)
		cout<<"A\n";
	else
		cout<<"B\n";
	return 0;
}
```
