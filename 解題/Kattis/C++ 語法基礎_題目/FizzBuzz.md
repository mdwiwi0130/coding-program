# [FizzBuzz](https://open.kattis.com/problems/fizzbuzz)
```cpp
#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	for(int i=1;i<=c;i++){
		int m=0;
		if(i>=a&&i%a==0)
			m++;
		if(i>=b&&i%b==0)
			m=m+2;
		if(m==3)
			cout<<"FizzBuzz\n";
		else if(m==1)
			cout<<"Fizz\n";
		else if(m==2)
			cout<<"Buzz\n";
		else
			cout<<i<<"\n";
	}
	return 0;
}

```
