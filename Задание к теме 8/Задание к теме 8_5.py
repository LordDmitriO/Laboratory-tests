print("Вывод трехзначного числа на основании заданного трехзначного числа с перемещением первого числа на последнее место")

a = int(input("Введите число a - "))

while True:
	if a // 100 == 0 or a // 100 > 9:
		print("Вы ввели не трехзначное число. Попробуйте заново")
		a = int(input("Введите число a - "))
	else:
		s_n = a // 100
		f_n = a % 100
		otv = f_n * 10 + s_n
		print("Полученное трехзначное число равно:", otv)
		break
