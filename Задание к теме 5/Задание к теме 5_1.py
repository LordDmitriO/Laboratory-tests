print("Нахождение расстояния между двумя точками с заданными координатами (x1, y1) и (x2, y2)")

x_1, y_1 = map(int, input("Введите значения координат первой точки (x1, y1) - ").split())
x_2, y_2 = map(int, input("Введите значения координат второй точки (x2, y2) - ").split())

while True:
	if x_1 == x_2 and y_1 == y_2:
		print("Задана одна и та же точка. Вычисление расстояния невозможно. Попробуйте заново.")
		x_1, y_1 = map(int, input("Введите значения координат первой точки (x1, y1) - ").split())
		x_2, y_2 = map(int, input("Введите значения координат второй точки (x2, y2) - ").split())
	else:
		rast = ((x_2 - x_1) ** 2 + (y_2 - y_1) ** 2) ** 0.5
		print("Расстояние между двумя точками равно:", rast)
		break