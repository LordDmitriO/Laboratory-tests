print("Решение системы линейных уравнений")

A_1 = float(input("Введите значение коэффициента A_1 - "))
B_1 = float(input("Введите значение коэффициента B_1 - "))
A_2 = float(input("Введите значение коэффициента A_2 - "))
B_2 = float(input("Введите значение коэффициента B_2 - "))
C_1 = float(input("Введите значение коэффициента C_1 - "))
C_2 = float(input("Введите значение коэффициента C_2 - "))

det = A_1 * B_2 - A_2 * B_1
det_x = C_1 * B_2 - B_1 * C_2
det_y = A_1 * C_2 - C_1 * A_2

while True:
	if det == 0:
		print("Решений нет")
		print("Попробуйте ввести другие значения для получения другого результата")
	else:
		x = det_x / det
		y = det_y / det
		print("x равен:", x)
		print("y равен:", y)
		break
