def prebinvec(s1):
    if 1 not in s1:
        return ['-']
    n = len(s1) - 1
    while (n >= 0 and s1[n] == 0):
        s1[n] = 1
        n -= 1
    if n < 0:
        return s1
    s1[n] = 0
    return s1


def nextbinvec(sp):
    if 0 not in sp:
        return ['-']
    n = len(sp)-1
    while (n >= 0 and sp[n] == 1):
        sp[n] = 0
        n -= 1
    if n < 0:
        return sp
    sp[n] = 1
    return sp
