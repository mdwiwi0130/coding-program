#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	int n;
	cin>>n;
	int x1,y1,a,mn=1000000,x2,y2;
	for(int i=0;i<n;i++){
		cin>>x1>>y1;
		a=pow((x1-x),2)+pow((y1-y),2);
		if(mn>a){
			mn=a;
			x2=x1;
			y2=y1;
		}
	}
	cout<<x2<<" "<<y2;
	return 0;
} 
