def fibo(n, cache=dict()):
    if n==1 or n==2:
        return 1
    if n in cache:
        return cache[n]
    cache[n] = fibo(n-1, cache) + fibo(n-2, cache)
    return cache[n]
while 1:
    x = int(input())
    if x==-1:
        exit()
    print("Hour ",x,": ",fibo(x)," cow(s) affected",sep="");