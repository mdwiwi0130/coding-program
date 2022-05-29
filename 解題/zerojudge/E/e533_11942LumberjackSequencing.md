[e533: 11942 - Lumberjack Sequencing](https://zerojudge.tw/ShowProblem?problemid=e533)

```
#include <iostream>
using namespace std;
int main() {
  int n,a[10],z=1;
  cout<<"Lumberjacks:\n";
  cin>>n;
  while(n>0){
    for(int i=0;i<10;i++){
      cin>>a[i];
    }
    if(a[0]<a[1]){
      for(int i=0;i<9;i++){
        if(a[i]>a[i+1])
          z=0;
      }
    }
    else {
      for(int i=0;i<9;i++){
        if(a[i]<a[i+1])
          z=0;
      }
    }
    if(z==1)
      cout<<"Ordered\n";
    else 
      cout<<"Unordered\n";
    z=1;
    n--;
  }
  return 0;
}
```
