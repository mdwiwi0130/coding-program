# [次方計算 Power](https://oj.fcu.edu.tw/contest/845/problem/014)

## Description

當談到數學中的 x 的 n 次方時，我們在描述一種數學運算，這表示 x 乘以自身 n 次。

這種表示法通常以指數表示，例如 x 的 2 次方寫作 x²，x 的 3 次方寫作 x³，以此類推。

例如: 2³ = 2 * 2 * 2 = 8，這裡的 2 是底數，3 是指數，結果是 8。

建立一個函式名稱為 Power 的副函式，計算x的n次方，需使用遞迴計算。

-----------------------------------------------------------

When we talk about x raised to the power of n in mathematics, we are describing a mathematical operation that signifies multiplying x by itself n times.

This notation is commonly expressed using exponents, for instance, x squared is written as x², x cubed is written as x³, and so on.

For example: 2³ = 2 * 2 * 2 = 8, where 2 is the base, 3 is the exponent, and the result is 8.

Create a sub-function named 'Power' that calculates x to the power of n.

Use Recursive!


## Input
輸入的每一行包含兩個正整數 x 和 n。

輸入的數值條件如下所示:

1. x 為非零整數(即負數或正數)

2. n 為非負整數(即零或正整數)

當輸入的兩個數值皆為0時，結束程式。

-----------------------------------------------------------

Each line of input contains two positive integers, x and n.

The input values must adhere to the following conditions:

1. x is a non-zero integer (i.e.,negative or positive).

2. n is a non-negative integer (i.e.,zero or positive).

The program terminates when both input values are 0.


## Output
根據輸入中的N，輸出以下的內容:

Power(x, n) = x ^ n之值

-----------------------------------------------------------

Based on the input value N, output the following:

Power(x, n) = The value of x raised to the power of n.


輸入範例 1 
```
  2 0
  2 1
  2 2
  3 14
  3 15
  0 0
```  
輸出範例 1
```
  1
  2
  4
  4782969
  14348907
  ```
輸入範例 2 
```
  -4 0
  -4 1
  -4 2
  -4 3
  -10 0
  0 0
  ```
輸出範例 2
```
  1
  -4
  16
  -64
  1
```
```c
#include <stdio.h>
int power(int ans,int x,int n){
	if(n==0)
		return ans;
	power(ans*x,x,n-1);
}
int main(){
	int x,n;
	while(1){
		scanf("%d%d",&x,&n);
		if(x==n&&n==0)
			return 0;
		printf("%d\n",power(1,x,n));
	}
}```
