print("Вычисление расстояние между двумя автомобилями спустя T часов езды в противоположных направлениях")

V_1 = float(input("Введите скорость первого автомобиля - "))
V_2 = float(input("Введите скорость второго автомобиля - "))
S = float(input("Введите начальное расстояние между двумя автомобилями - "))
T = float(input("Введите кол-во часов, которое проедут автомобили - "))

while True:
	if V_1 < 0 or V_2 < 0 or S < 0 or T < 0:
		if V_1 < 0:
			print("Введены неверные данные. Попробуйте заново.")
			V_1 = float(input("Введите скорость первого автомобиля - "))
		if V_2 < 0:
			print("Введены неверные данные. Попробуйте заново.")
			V_2 = float(input("Введите скорость второго автомобиля - "))
		if S < 0:
			print("Введены неверные данные. Попробуйте заново.")
			S = float(input("Введите начальное расстояние между двумя автомобилями - "))
		if T < 0:
			print("Введены неверные данные. Попробуйте заново.")
			T = float(input("Введите кол-во часов, которое проедут автомобили - "))
	else:
		S_new = S + T * (V_1 + V_2)
		print("Расстояние между двумя автомобилями через T часов равно:", S_new)
		break

