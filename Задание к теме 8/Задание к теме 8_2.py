print("Нахождение максимально возможного кол-ва расположений отрезка B на отрезке A без наложений")

A = float(input("Введите длину отрезка A - "))
B = float(input("Введите длину отрезка B - "))

while True:
	if A <= B or A < 0 or B < 0:
		print("Введены неверные данные. Попробуйте заново.")
		A = float(input("Введите длину отрезка A - "))
		B = float(input("Введите длину отрезка B - "))
	else:
		col = int(A // B)
		print("Количество отрезков равно:", col)
		break


