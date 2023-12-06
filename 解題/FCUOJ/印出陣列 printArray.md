# [印出陣列 printArray](https://oj.fcu.edu.tw/contest/845/problem/015)
## 描述

請撰寫一個遞迴函式printArray，它的引數為一個陣列與其大小，沒有回傳值。

這個函式應在接收到大小為0的陣列時，停止處理並返回。



Write a recursive function printArray that takes an array and the size of the array as arguments, prints the array, and returns nothing.

The function should stop processing and return when it receives an array of size zero.


## 輸入
讀取一個數字與10組數字，其中第一個數代表有多少個陣列。

如果第一個數字為0，則終止。



Enter a number and 10 sets of numbers, in which the first number stands for the number of arrays.

If the first number is 0, then terminate the program.


## 輸出
顯示陣列中所有元素。

Display all elements in the arrays.


### 輸入範例 1 
```
1
0 0 1 2 3 4 5 6 7 8
2
22 33 66 77 88 99 100 101 123 211
55 66 77 88 88 99 110 123 567 999
0
```
### 輸出範例 1
```
0 0 1 2 3 4 5 6 7 8
22 33 66 77 88 99 100 101 123 211
55 66 77 88 88 99 110 123 567 999
```
## 解答
```c
#include <stdio.h>
void printArray(int n,int x[10]){
	for(int i=0;i<10;i++){
		if(i!=0)
			printf(" ");
		printf("%d",x[i]);
	}	
}
int main(){
	int x[10]={},n,o=1;
	while(scanf("%d",&n)&&n){
		for(;n>0;n--){
			for(int i=0;i<10;i++)
				scanf("%d",&x[i]);
			printArray(n,x);
			if(o)
				printf("\n");
			o++;
		}
	}
	return 0;
}
```
