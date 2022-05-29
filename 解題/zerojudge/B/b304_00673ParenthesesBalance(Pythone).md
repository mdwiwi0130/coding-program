# Pythone
[b304: 00673 - Parentheses Balance](https://zerojudge.tw/ShowProblem?problemid=b304)

```
left=[]
def check(str):
  for x in str:
    if x=="(":
      left.insert(0,"(")
    elif x=="[":
      left.insert(0,"[")

    try:
      if x==")" and left[0]=="(":
        left.pop(0)
      elif x=="]" and left[0]=="[":
        left.pop(0)
    except:
      return False
      
  if len(left)==0:
    return True
  else:
    return False
n=int(input())
for i in range(n):
  str=input()
  if check(str)==True:
    print("Yes")
  else:
    print("No")
    ```
