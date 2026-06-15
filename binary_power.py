def binpow(a, b):
    res = 1
    while b != 0:
        if (b%2 == 0):
            a = a*a
            b //= 2
        else:
            res = res*a
            b -= 1
    return res
