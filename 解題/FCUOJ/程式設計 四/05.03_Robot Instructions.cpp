#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  scanf("%d",&t);
  for(int i = 0;i<t;i++){
    int n,a[101]={},x=0;
    char arr[10];
    scanf("%d",&n);
    if(i)  printf("\n");
    for(int j=1;j<n+1;j++){
    	scanf("%s",&arr);
    	if(arr[0]=='L'){
    		x--;
    		a[j]=-1;
		}
		else if(arr[0]=='R'){
			x++;
			a[j]=+1;
		}
		else if(arr[0]=='S'){
			int temp;
			scanf("%s",&arr);
			scanf("%d",&temp);
			x+=a[temp];
			a[j]=a[temp];
		}		
	}
	printf("%d",x); 
  }
  return 0;
}
