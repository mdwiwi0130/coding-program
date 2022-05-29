# [TOJ 94 - 判斷季節](https://toj.tfcis.org/oj/pro/94/)
```cpp
#include <iostream>
using namespace std;
int main(){
     int a;
	 cin>>a;
	if(3<=a&&a<=5)
		cout<<"Spring!";
	else if(6<=a&&a<=8)
		cout<<"Summer!";
	else if(9<=a&&a<=11)
		cout<<"Autumn!";
	else 
		cout<<"Winter!";
	cout<<"\n";
    return 0;
}
```
