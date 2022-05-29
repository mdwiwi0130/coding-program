# [C_MM01-易] 計算梯型面積
  成績: 0 / 倒扣: 0.8

## 問題描述：

  請以 JAVA 運算式計算下面梯形面積，並輸出面積結果。

  ※ 梯形面積公式為：（上底 + 下底） × 高 ÷ 2 。

[圖片](https://e-tutor.itsa.org.tw/e-Tutor/file.php/284/picture01-1.jpg)

輸入說明 ：

  每一組依序分別輸入梯形的上底、下底及高的整數。

輸出說明 ：

  輸出梯形面積。

## 範例：

輸入範例:

  94 190 120

  99 54 47

輸出範例:

  Trapezoid area:17040.0

  Trapezoid area:3595.5

## 題解
```markdown
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float a,b,c,z=0.0;
 	cin>>a>>b>>c;
 	z=(a+b)*c/2;
 	cout<<"Trapezoid area:"<<fixed<<setprecision(1)<<z<<"\n";
	return 0;
}
```

[計算梯型面積](https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6855)
