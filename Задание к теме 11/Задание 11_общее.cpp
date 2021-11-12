#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <algorithm>

namespace first{
	int A, B, C, maks, Ax, Bx, Cx, Ay, By, Cy, dB, dC, n;
}

using namespace first;

int main(){

// 1
	std::cout << "Присваивание новых значений A и B на основании заданного условия" << std::endl;
	std::cout << "Введите значение A - ";
	std::cin >> A;
	std::cout << "Введите значение B - ";
	std::cin >> B;
	if (A != B){
		maks = std::max(A, B);
		std::cout << "Значение A равно: " << maks << std::endl;
		std::cout << "Значение B равно: " << maks << std::endl;
	}
	if (A == B){
		A = 0;
		B = 0;
		std::cout << "Значение A равно: " << A << std::endl;
		std::cout << "Значение B равно: " << B << std::endl;
	}

// 2
    std::cout << "Нахождение суммы двух наибольших из трех чисел" << std::endl;
	std::cout << "Введите значение A - ";
	std::cin >> A;
	std::cout << "Введите значение B - ";
	std::cin >> B;
	std::cout << "Введите значение C - ";
	std::cin >> C;
    if ((A <= B) && (B <= C)){
        std::cout << "Сумма двух наибольших чисел: " << B + C << std::endl;
    }
    else if (((A > B) && (B > C)) || ((A == C) && B >= A)){
        std::cout << "Сумма двух наибольших чисел: " << A + B << std::endl;
    }
    else{
        std::cout << "Сумма двух наибольших чисел: " << A + C << std::endl;
    }

// 3
    std::cout << "Определение, какая из двух последних точек на плоскости (B или C) расположена ближе к A, и вывод этой точки и ее расстояния от точки A" << std::endl;
	std::cout << "Введите значение координат точки A:" << std::endl;
	std::cout << "X - ";
	std::cin >> Ax;
	std::cout << "Y - ";
	std::cin >> Ay;
	std::cout << "Введите значение координат точки B:" << std::endl;
	std::cout << "X - ";
	std::cin >> Bx;
	std::cout << "Y - ";
	std::cin >> By;
	std::cout << "Введите значение координат точки C:" << std::endl;
	std::cout << "X - ";
	std::cin >> Cx;
	std::cout << "Y - ";
	std::cin >> Cy;
	dB = sqrt(pow((Ax - Bx), 2) + pow((Ay - By), 2));
    dC = sqrt(pow((Ax - Cx), 2) + pow((Ay - Cy), 2));
    if (dB >= dC){
        std::cout << "Точка, расположенная ближе к A: B(" << Bx << " " << By << ") " << "Расстояние: " << dB << std::endl;
    }
    else{
        std::cout << "Точка, расположенная ближе к A: C (" << Cx << Cy << ") " << "Расстояние: " << dC << std::endl;
    }
    
// 4
    std::cout << "Определение номера координатной четверти, в которой находится заданная точка" << std::endl;
	std::cout << "Введите значение координат точки A:" << std::endl;
	std::cout << "X - ";
	std::cin >> Ax;
	std::cout << "Y - ";
	std::cin >> Ay;
    while (true){
        if (Ax == 0 || Ay == 0){
            std::cout << "Введены невереные значения. Попробуйте заново." << std::endl;
            std::cout << "Введите значение координат точки A:" << std::endl;
	        std::cout << "X - ";
	        std::cin >> Ax;
	        std::cout << "Y - ";
	        std::cin >> Ay;
        }
        else{
            if (Ax > 0 && Ay > 0){
                std::cout << "Точка находится в 1-ой координатной четверти" << std::endl;
            }
            if (Ax > 0 && Ay < 0){
                std::cout << "Точка находится во 2-ой координатной четверти" << std::endl; 
            }
            if (Ax < 0 && Ay < 0){
                std::cout << "Точка находится в 3-ей координатной четверти" << std::endl;
            }
            if (Ax < 0 && Ay > 0){
                std::cout << "Точка находится в 4-ой координатной четверти" << std::endl;
            }
            break;
        }
    }

// 5
    std::cout << "Вывести строку-описание вида заданного числа" << std::endl;
    std::cout << "Введите значение n - ";
    std::cin >> n;
    if (n == 0){
        std::cout << "Нулевое число" << std::endl;
    }
    if (n > 0){
        if (n % 2 == 0){
            std::cout << "Положительное четное число" << std::endl;
        }
        else{
            std::cout << "Положительное нечетное число" << std::endl;
        }
    }
    if (n < 0){
        if (n % 2 == 0){
            std::cout << "Отрицательное четное число" << std::endl;
        }
        else{
            std::cout << "Отрицательное нечетное число" << std::endl;
        }
    }

// 6
    std::cout << "Вывести строку-описание вида заданного числа, лежащего в диапазоне 1-999" << std::endl;
    std::cout << "Введите значение n - ";
    std::cin >> n;
    while (true){
        if (n < 1 || n > 999){
            std::cout << "Введено невереное значение. Попробуйте заново." << std::endl;
            std::cout << "Введите значение n - ";
            std::cin >> n;
        }
        else{
            if (n / 10 == 0 && n % 10 < 10){
                if (n % 2 == 0){
                    std::cout << "Четное однозначное число" << std::endl;
                }
                else{
                    std::cout << "Нечетное однозначное число" << std::endl;
                }
            }
            if (n / 100 == 0 && n % 100 > 9){
                if (n % 2 == 0){
                    std::cout << "Четное двузначное число" << std::endl;
                }
                else{
                    std::cout << "Нечетное двузначное число" << std::endl;
                }
            }
            if (n % 1000 > 99){
                if (n % 2 == 0){
                    std::cout << "Четное трехзначное число" << std::endl;
                }
                else{
                    std::cout << "Нечетное трехзначное число" << std::endl;
                }
            }
            break;
        }
    }

}