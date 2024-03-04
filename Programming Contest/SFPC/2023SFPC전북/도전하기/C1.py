x=input()
x=int(x)
ans = 100000001
def f(N,K):
    queue = [(N,0)]
    while queue:
        i,d = queue.pop(0)
        if i == K:
            return d
        if i+25 <= K*10:
            queue.append((i+25,d+1))
        if i+15 <= K*10:
            queue.append((i+15,d+1))
        if i+10 <= K*10:
            queue.append((i+10,d+1))

print(f(0,x*10))