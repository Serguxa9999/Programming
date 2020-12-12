def five_minimals():
    n, a=int(input()), 
    list(map(int, input().split()))
    [print(' '.join(map(str, sorted(a[:i], reverse=True)[-5:])))  for i in range(1, len(a)+1)]