t=int(input())
for _ in range(t):
    __=input()
    arr=[int(i) for i in input().split()]
    flag=True
    for j in range(len(arr)-1):
        if(arr[j]>=arr[j+1]):
            flag=False
            break
    if(len(arr))%2==0:
        print("YES")
        continue
    if flag:
    	print("NO")
    else:
    	print("YES")