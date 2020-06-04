a,b,c,w = input().split()
a = int(a)
b = int(b)
c = int(c)
w = int(w)

if a+b+c<=w:
    print(1)
elif a+b<=w:
    print(2)
elif a+c<=w:
    print(2)
elif b+c<=w:
    print(2)
else:
    print(3)