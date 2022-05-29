#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int k,w,s,e;
	int time[5]={185,195,205,215,225};
	int m=0;
	cin>>k>>w>>s>>e;
	if(k>2)
		m=20+(k-2)*5;
	else
		m=20;
	m=m+(w/2)*5;
	for(int i=s+1;i<=e;i++){
		if(i>18){
			m=m+time[i-19];
		}
	}
	cout<<m;
	return 0;
} 
