a, x, b = map(str, input().split())
if (x == '+'):
    c = float(a) + float(b)
    print(c)
elif (x == '-'):
    c = float(a) - float(b)
    print(c)
elif (x == '*'):
    c = float(a) * float(b)
    print(c)
elif (x == '/'):
        c = float(a) / float(b)
        print(c)        
else:
    print("Некорректный ввод")
