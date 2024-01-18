n=input()
n=int(n)
if(n%5):
    n//=5
    x=n*150000
    n+=1
else:
    n//=5
    x=n*150000
print(n, x)