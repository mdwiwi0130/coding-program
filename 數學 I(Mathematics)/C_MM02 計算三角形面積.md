# [C_MM02-易] 計算三角形面積
成績: 0 / 倒扣: 0.8
## 問題描述：
請以JAVA運算式計算下面三角形面積，並輸出面積結果。

※三角形面積公式為：底 × 高 ÷ 2。

[圖片](https://e-tutor.itsa.org.tw/e-Tutor/file.php/284/picture2-01.jpg)

輸入說明 ：
每一組需輸入兩正整數，分別代表三角形的底及高。

輸出說明 ：
輸出三角形面積。

## 範例：

輸入範例:

170 210

輸出範例:

17850.0
## 題解
```markdown
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float a,c,z;
 	cin>>a>>c;
 	z=a*c/2;
 	cout<<fixed<<setprecision(1)<<z<<"\n";
	return 0;
}

```
[計算三角形面積](https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6858)
