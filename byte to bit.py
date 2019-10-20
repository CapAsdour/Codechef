try:
    import math
    t = int(input())
    for _ in range(t):
        n = int(input())
        k = n // 26
        d = n % 26
        if d == 0:
            k -= 1
        num=int(math.pow(2,k))
        if n==0:
            print('1','0','0')
        if d > 10 or d==0:
            print('0','0',num)
        elif d > 2:
            print('0',num,'0')
        else:
            print(num,'0','0')

except:
    pass
