#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int x,r,v;
	cin>>x>>r>>v;
	int n,p,s;
	for(cin>>n;n>0;n--){
		cin>>p>>s;
		if(s<=v){
			if(p>=x-r&&p<=x+r)
				x=p;
		}
		else if(s>v&&p>=x-r&&p<x)
			x+=15;
		else if(s>v&&p==x) 
			x-=15;
		else if(s>v&&p<=x+r&&p>x)
			x-=15;
	}
	cout<<x;
	return 0;
} 
