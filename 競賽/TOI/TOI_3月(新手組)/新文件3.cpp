#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int x,r,v;
	cin>>x>>r>>v;
	int n,p,s;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>p>>s;
		if(x>p&&p>=x-r){
			if(s>v){
				x+=15;
			}
			else
				x=p;
		}
		else if(x<p&&p<=x+r){
			if(s>v){
				x-=15;
			}
			else
				x=p;
		}
		else if(x==p){
			if(s>v)
				x-=15;
		}
	}
	cout<<x;
	return 0;
} 
