a = int(input())
ans = a//100
a = a%100
ans += a//10
a = a%10
ans += a

print(ans)