#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <algorithm>



namespace first{
    double price, price1, A;
    int N;
}

using namespace first;

int main(){
    
// 1
    std::cout << "Вывод стоимости 0.1, 0.2, ... 1 кг конфет, если известна цена 1 кг" << std::endl;
    std::cout << "Введите цену 1 кг конфет price - ";
    std::cin >> price;
    while (true){
        if (price <= 0){
            std::cout << "Введено неверное значение. Попробуйте заново." << std::endl;
            std::cout << "Введите цену 1 кг конфет price - ";
            std::cin >> price;
        }
        else{
            for (int i = 1; i < 11; ++i){
                price1 = price * double(i / 10.);
                std::cout << "Стоимость " << double(i / 10.) << " кг конфет равна: " << price1 << std::endl;
            }
            break;
        }
        
    }
    
// 2
    std::cout << "Нахождение произведения 1.1 · 1.2 · 1.3 · . . . (N сомножителей)" << std::endl;
    double proiz = 1;
    std::cout << "Введите число N - ";
    std::cin >> N;
    while (true){
        if (N < 0){
            std::cout << "Введено неверное значение. Попробуйте заново." << std::endl;
            std::cout << "Введите число N - ";
            std::cin >> N;
        }
        else{
            for (int i = 1; i < N + 1; ++i){
                proiz = proiz * double((10 + i) / 10.);
            }
            std::cout << "Произведение N сомножителей равно: " << proiz << std::endl;
            break;
        }
    }
    
// 3
    std::cout << "Нахождение квадрата зданного числа, используя для его вычисления следующую формулу: N ^ 2 = 1 + 3 + 5 + . . . + (2·N − 1)" << std::endl;
    double kvadrat = 0;
    std::cout << "Введите число N - ";
    std::cin >> N;
    while (true){
        if (N < 0){
            std::cout << "Введено неверное значение. Попробуйте заново." << std::endl;
            std::cout << "Введите число N - ";
            std::cin >> N; 
        }
        else{
            for (int i = 1; i < N + 1; ++i){
                kvadrat = kvadrat + (2 * i - 1);
            }
            std::cout << "Квадрат заданного числа равен: " << kvadrat << std::endl;
            break;
        }
    }
    
// 4
    std::cout << "Нахождение суммы 1 + A + A2 + A3 + . . . + A ^ N, используя только один цикл, при заданных значениях A и N" << std::endl;
    double summa = 0;
    std::cout << "Введите число A - ";
    std::cin >> A;
    std::cout << "Введите число N - ";
    std::cin >> N;
    while (true){
        if (N < 0){
            std::cout << "Введены неверные значения. Попробуйте заново." << std::endl;
            std::cout << "Введите число A - ";
            std::cin >> A;
            std::cout << "Введите число N - ";
            std::cin >> N; 
        }
        else{
            for (int i = 0; i < N + 1; ++i){
                summa = summa + pow(A, i);
            }
            std::cout << "Сумма равна: " << summa << std::endl;
            break;
        }
    }
    
// 5
    std::cout << "Нахождение значения выражения 1 - A + A2 - A3 + . . . ± A ^ N, используя только один цикл и не пользуясь условными операторами, при заданных значениях A и N" << std::endl;
    double virazh = 0;
    std::cout << "Введите число A - ";
    std::cin >> A;
    std::cout << "Введите число N - ";
    std::cin >> N;
    while (true){
        if (N < 0){
            std::cout << "Введены неверные значения. Попробуйте заново." << std::endl;
            std::cout << "Введите число A - ";
            std::cin >> A;
            std::cout << "Введите число N - ";
            std::cin >> N; 
        }
        else{
            for (int i = 0; i < N + 1; ++i){
               virazh = virazh + pow(A, i) * pow(-1, i);
               
            }
            std::cout << "Значение выражения равно: " << virazh << std::endl;
            break;
        }
    }
}