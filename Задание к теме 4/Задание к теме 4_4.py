print("Нахождение суммы, разности, произведения и частного квадратов чисел a и b")

a = int(input("Введите значение числа a - "))
b = int(input("Введите значение числа b - "))
a_2 = a ** 2
b_2 = b ** 2

summ = a_2 + b_2
raz = a_2 - b_2
proiz = a_2 * b_2
chast = a_2 / b_2

print("Сумма квадратов чисел равна:", summ)
print("Разность квадратов чисел равна:", raz)
print("Произведение квадратов чисел равна:", proiz)
print("Частное квадратов чисел равна:", chast)
