print("Вычисление стоимости 1 кг и Y кг конфет на основании того, что X кг конфет стоят A рублей ")

X = float(input("Введите значение X кг конфет - "))
A = float(input("Введите значение стоимости X кг конфет - "))
Y = float(input("Введите значение Y кг конфет - "))

while True:
	if X <= 0 or A <= 0 or Y < 0:
		if X <= 0:
			print("Введены неверные данные. Попробуйте заново.")
			X = float(input("Введите значение X кг конфет - "))
		if A <= 0:
			print("Введены неверные данные. Попробуйте заново.")
			A = float(input("Введите значение стоимости X кг конфет - "))
		if Y < 0:
			print("Введены неверные данные. Попробуйте заново.")
			Y = float(input("Введите значение Y кг конфет - "))
	else:
		stoim_1 = A / X
		stoim_y = Y * stoim_1
		print("1 кг конфет стоит:",  stoim_1)
		print(Y, "кг конфет стоят:", stoim_y)
		break
