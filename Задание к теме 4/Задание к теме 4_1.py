print("Нахождение площади и периметра прямоугольника со сторонами a и b")
a = int(input("Введите значение стороны a - "))
b = int(input("Введите значение стороны b - "))
while True:
	if a <= 0 or b <= 0:
		print("Введены некорректные данные. Попробуйте заново.")
		a = int(input("Введите значение стороны a - "))
		b = int(input("Введите значение стороны b - "))
	else:	
		S = a * b
		P = 2 * (a + b)
		print("Площадь прямоугольника равна:", S)
		print("Периметр прямоугольника равен:", P)
		break