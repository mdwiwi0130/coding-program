# [二項式係數 Binomial_Coefficient](https://oj.fcu.edu.tw/contest/845/problem/013)
## 描述

在數學上，二項式係數是二項式定理中各項的係數，二項式係數常見於各數學領域中，尤其是組合數學。

(n, m)可以被理解為從 n 個相異元素中取出 m 個元素的方法數，記為(n, m)。

二項式係數的定義為(N, M) = N! / (M! * (N - M)!)



建立一個函式名稱為Binomial_Coefficient的副函式，需使用遞迴計算



In mathematics, binomial coefficients are the coefficients of the terms in the binomial theorem. Binomial coefficients are commonly encountered in various mathematical fields, especially in combinatorics.

The notation (n, m) can be understood as the number of ways to choose m elements from n distinct elements, denoted as (n, m).

The formula for binomial coefficients is(N, M) = N! / (M! * (N - M)!)



Create a function named Binomial_Coefficient as a sub-function to calculate binomial coefficients.

Use Recursive!



![](https://oj.fcu.edu.tw/public/upload/a3cb4f8283.png)


## 輸入
輸入的每一行包含兩個整數 n 和 m

輸入的數值條件如下所示:

1. n 為正整數

2. m 為非負整數(即零或正整數)

3. n >= m

當輸入的兩個數值皆為0時，結束程式。



Each line of input contains two integers, n and m.

The input values must adhere to the following conditions:

1. n is a positive integer.

2. m is a non-negative integer (i.e., zero or a positive integer).

3. n >= m

The program terminates when both input values are 0.


## 輸出
根據輸入中的 n 和 m，輸出以下的內容:

Binomial_Coefficient(n, m) = (n, m)的二項式係數值



Based on the input values of n and m, output the following content:

Binomial_Coefficient(n, m) = The binomial coefficient value of (n, m)



### 輸入範例 1 
```
11 0
11 1
11 2
0 0
```
### 輸出範例 1
```
1
11
55
```
### 輸入範例 2 
```
1 0
2 0
10 8
10 9
0 0
```
### 輸出範例 2
```
1
1
45
10
```
```c
#include <stdio.h>
int Binomial_Coefficient(int ans,int n,int m,int o){
	if(n>m)
		Binomial_Coefficient(ans*n,n-1,m,o);
	else if(o<=1)
		return ans;
	else
		Binomial_Coefficient(ans/o,n,m,o-1); 
}
int main(){
	int n,m;
	while(1){
		scanf("%d%d",&n,&m);
		if(n==m&&m==0)
			return 0;
		else if(m==0)
			printf("1\n");
		else
			printf("%d\n",Binomial_Coefficient(1,n,m,n-m));
	}
}
```
