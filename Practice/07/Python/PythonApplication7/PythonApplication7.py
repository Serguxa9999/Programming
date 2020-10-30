import math
print("Выберите вариант ввода 1 - через стороны, 2 - через координаты")
status = int(input())
if (status == 1):
    print("Введите стороны")
    a = int(input())
    b = int(input())
    c = int(input())
    P = (a + b + c) / 2
    if (P * (P - a) * (P - b) * (P - c) >= 0):
        S = math.sqrt(P * (P - a) * (P - b) * (P - c))
        print("S = " + str(S))
    else:
        print("Неверно указаны стороны треугольника!")
elif(status == 2):
    print("Введите координаты")
    x1, y1 = map(int, input().split())
    x2, y2 = map(int, input().split())
    x3, y3 = map(int, input().split())
    if ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) >= 0 and (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3) >= 0 and (x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1) >= 0 ):
        AB = math.sqrt((xA - xB) * (xA - xB) + (yA - yB) * (yA - yB))
        BC = math.sqrt((xB - xC) * (xB - xC) + (yB - yC) * (yB - yC))
        AC = math.sqrt((xC - xA) * (xC - xA) + (yC - yA) * (yC - yA))
        P = (AB + BC + AC) / 2
        S = math.sqrt(P * (P - AB) * (P - BC) * (P - AC))
        print("S = " + str(S))
    else:
        print("Неверно указаны стороны треугольника!")
elif(status <= 1000 and status > 0):
    print("Некорректный ввод")
