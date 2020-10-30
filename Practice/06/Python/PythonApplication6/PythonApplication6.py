import math
print("Введите коэффициенты a, b и c")
a, b, c = map(int,input().split())
if not(a==0):   
    D = (b * b) + (-4 * a * c)
    x1 = (-b + math.sqrt(D)) / (2 * a)
    x2 = (-b - math.sqrt(D)) / (2 * a)
    x = -b / 2 * a
    if(D > 0):
        print("Корни уравнения:", x1, x2)
    elif(D == 0):
        print("Корень уравнения:", x)
    else:
        print("Корней нет")
else:
    if(b != 0):
        xn=c/b
        print("Корень уравнения:", xn)
    else:   
        if(c==0):
            print("Бесконечно много корней")
        else:
            print("Корней нет")
