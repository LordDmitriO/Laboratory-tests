#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>

namespace first{
	int A, B, C, a, b, c, n, f, s, t, part1, part2, n1, n2;
}

using namespace first;

int main(){

// 1
	std::cout << "Проверяем истинность высказывания: «Справедливы неравенства A > 2 и B ≤ 3»" << std::endl;
	std::cout << "Введите значение A - ";
	std::cin >> A;
	std::cout << "Введите значение B - ";
	std::cin >> B;
	if (A < 2 || B > 3){
		std::cout << "Высказывание: «Справедливы неравенства A > 2 и B ≤ 3» - Ложно" << std::endl;
	}
	else{
		std::cout << "Высказывание: «Справедливы неравенства A > 2 и B ≤ 3» - Истинно" << std::endl;
	}

// 2
	std::cout << "Проверяем истинность высказывания: «Справедливо двойное неравенство A < B < C»" << std::endl;
	std::cout << "Введите значение A - ";
	std::cin >> A;
	std::cout << "Введите значение B - ";
	std::cin >> B;
	std::cout << "Введите значение C - ";
	std::cin >> C;
	if (A >= B || B >= C){
		std::cout << "Высказывание: «Справедливо двойное неравенство A < B < C» - Ложно" << std::endl;
	}
	else{
		std::cout << "Высказывание: «Справедливо двойное неравенство A < B < C» - Истинно" << std::endl;
	}

// 3
	std::cout << "Проверяем истинность высказывания: «Данное число является четным двузначным»" << std::endl;
	std::cout << "Введите значение n - ";
	std::cin >> n;
	while (true){
		if (n < 0){
			std::cout << "Введено неверное значение. Попробуйте заново." << std::endl;
			std::cout << "Введите значение n - ";
			std::cin >> n;
		}
		else{
			if (n / 100 >= 1 || n % 100 < 10 || n % 2 != 0){
				std::cout << "Высказывание: «Данное число является четным двузначным» - Ложно" << std::endl;
			}
			else{
				std::cout << "Высказывание: «Данное число является четным двузначным» - Истинно" << std::endl;
			}
			break;
		}
	}

// 4
	std::cout << "Проверяем истинность высказывания: «Цифры данного числа образуют возрастающую или убывающую последовательность»" << std::endl;
	std::cout << "Введите значение n - ";
	std::cin >> n;
	while (true){
		if (n / 1000 >= 1 || n % 1000 < 100){
			std::cout << "Введено неверное значение. Попробуйте заново." << std::endl;
			std::cout << "Введите значение n - ";
			std::cin >> n;
		}
		else{
			f = n / 100;
			s = (n % 100) / 10;
			t = (n % 100) % 10;
			if ((f > s && s > t) || (f < s && s < t)){
				std::cout << "Высказывание: «Цифры данного числа образуют возрастающую или убывающую последовательность» - Истинно" << std::endl;
			}
			else{
				std::cout << "Высказывание: «Цифры данного числа образуют возрастающую или убывающую последовательность» - Ложно" << std::endl;
			}
			break;
		}
	}
// 5
    std::cout << "Проверяем истинность высказывания: «Данное число читается одинаково слева направо и справа налево»" << std::endl;
    std::cout << "Введите значение n - ";
	std::cin >> n;
	while (true){
	    if (n / 10000 >= 1 || n % 10000 < 1000){
	        std::cout << "Введено неверное значение. Попробуйте заново." << std::endl;
			std::cout << "Введите значение n - ";
			std::cin >> n;
	    }
	    else{
	        part1 = n / 100;
	        n1 = (n % 100) / 10;
	        n2 = (n % 100) % 10;
	        part2 = n2 * 10 + n1;
	        if (part1 == part2){
	            std::cout << "Высказывание: «Данное число читается одинаково слева направо и справа налево» - Истинно" << std::endl;
	        }
	        else{
	            std::cout << "Высказывание: «Данное число читается одинаково слева направо и справа налево» - Ложно" << std::endl;
	        }
	        break;
	    }
	}
// 6
    std::cout << "Проверяем истинность высказывания: «Треугольник со сторонами a, b, c является прямоугольным»" << std::endl;
    std::cout << "Введите значение a - ";
	std::cin >> a;
	std::cout << "Введите значение b - ";
	std::cin >> b;
	std::cout << "Введите значение c - ";
	std::cin >> c;
    while (true){
        if (a <= 0 || b <= 0 || c <= 0){
            std::cout << "Введены неверные значения. Попробуйте заново." << std::endl;
            std::cout << "Введите значение a - ";
            std::cin >> a;
            std::cout << "Введите значение b - ";
            std::cin >> b;
            std::cout << "Введите значение c - ";
            std::cin >> c;
        }
        else{
            if ((pow(a, 2) == pow(b, 2) + pow(c, 2)) || (pow(b, 2) == pow(a, 2) + pow(c, 2)) || (pow(c, 2) == pow(a, 2) + pow(b, 2))){
                std::cout << "Высказывание: «Треугольник со сторонами a, b, c является прямоугольным» - Истинно" << std::endl; 
            }
            else{
                std::cout << "Высказывание: «Треугольник со сторонами a, b, c является прямоугольным» - Ложно" << std::endl;
            }
        }
        break;
    }

// 7
    std::cout << "Проверяем истинность высказывания: «Существует треугольник со сторонами a, b, c»" << std::endl;
    std::cout << "Введите значение a - ";
	std::cin >> a;
	std::cout << "Введите значение b - ";
	std::cin >> b;
	std::cout << "Введите значение c - ";
	std::cin >> c;
	while (true){
        if (a <= 0 || b <= 0 || c <= 0){
            std::cout << "Введены неверные значения. Попробуйте заново." << std::endl;
            std::cout << "Введите значение a - ";
            std::cin >> a;
            std::cout << "Введите значение b - ";
            std::cin >> b;
            std::cout << "Введите значение c - ";
            std::cin >> c;
        }
        else{
            if ((a + b > c) || (a + c > b) || (b + c > a)){
                std::cout << "Высказывание: «Существует треугольник со сторонами a, b, c» - Истинно" << std::endl;    
            }
            else{
                std::cout << "Высказывание: «Существует треугольник со сторонами a, b, c» - Ложно" << std::endl; 
            }
        }
        break;
	}
}



