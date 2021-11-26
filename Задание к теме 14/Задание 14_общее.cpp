#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <algorithm>



namespace first{
    int A, B, N, A_1, B_1, K = 3, K_1 = 0, Fib = 0, Fib_1 = 1, Fib_2 = 1, Fib_1_1, summ;
    double P;
}

using namespace first;

int main(){

// 1
    std::cout << "Вывод всех целых чисел от A до B включительно" << std::endl;
    std::cout << "Введите число A - ";
    std::cin >> A;
    std::cout << "Введите число B - ";
    std::cin >> B;
    while (true){
        if (A < 0 || B < 0){
            std::cout << "Введены неверные значения. Попробуйте заново." << std::endl;
            std::cout << "Введите число A - ";
            std::cin >> A;
            std::cout << "Введите число B - ";
            std::cin >> B; 
        }
        else{
            for (int i = A; i < B + 1; ++i){
                for (int j = 1; j < i + 1; ++j){
                    std::cout << "Целое число равно: " << i << std::endl;
                }
            }
            break;
        }
    }
    
// 2
    std::cout << "Нахождение длины незанятой части отрезка A (на отрезке A размещено максимально возможное кол-во отрезков B, без наложений) без использования операций умножения и деления" << std::endl;
    std::cout << "Введите число A - ";
    std::cin >> A;
    std::cout << "Введите число B - ";
    std::cin >> B;
    int ost = B;
    while (true){
        if (A < 0 || B < 0 || A <= B){
            std::cout << "Введены неверные значения. Попробуйте заново." << std::endl;
            std::cout << "Введите число A - ";
            std::cin >> A;
            std::cout << "Введите число B - ";
            std::cin >> B; 
        }
        else{
            while (ost >= B){
                ost = A - B;
                A = ost;
            }
            std::cout << "Незанятая часть отрезка A равна: " << ost << std::endl;
            break;
        }
    }
    
// 3
    std::cout << "Вывод наименьшего из целых чисел K, для которых сумма 1 + 2 + . . . + K будет больше или равна N, и самой этой суммы" << std::endl;
    std::cout << "Введите число N - ";
    std::cin >> N;
    if (N <= 1){
        while (true){
        std::cout << "Введено неверное значение. Попробуйте заново." << std::endl;
        std::cout << "Введите число N - ";
        std::cin >> N;
        }
    }
    else{
        while (N > summ){
            K_1 = K_1 + 1;
            summ = summ + K_1;
        }
        std::cout << "Наименьшее из целых чисел K равно: " << K_1 << std::endl;
        std::cout << "Сумма равна: " << summ << std::endl;
    }
    
// 4
    std::cout << "Определение по заданному P, через сколько месяцев размер вклада превысит 1100 руб., и вывод найденного количества месяцев K (целое число) и итогового размера вклада S (вещественное число)" << std::endl;
    int K_2 = 0; double S = 1000;
    std::cout << "Введите проценты P - ";
    std::cin >> P;
    while (true){
        if (P <= 0 || P >= 25){
            std::cout << "Введено неверное значение. Попробуйте заново." << std::endl;
            std::cout << "Введите проценты P - ";
            std::cin >> P;
        }
        else{
            while (S <= 1100){
                S = S + (S * double(P / 100.));
                K_2 = K_2 + 1; 
            }
            std::cout << "Количество месяцев равно: " << K_2 << std::endl;
            std::cout << "Итоговый размер вклада равен: " << S << std::endl;
            break;
        }
    }
    
// 5
    std::cout << "Нахождение наибольшего общего делителя (НОД) чисел A и B, используя алгоритм Евклида" << std::endl;
    std::cout << "Введите число A - ";
    std::cin >> A;
    std::cout << "Введите число B - ";
    std::cin >> B;
    while (true){
        if (A < 0 || B < 0){
            std::cout << "Введены неверные значения. Попробуйте заново." << std::endl;
            std::cout << "Введите число A - ";
            std::cin >> A;
            std::cout << "Введите число B - ";
            std::cin >> B; 
        }
        else{
            if (A > B){
                if (A % B != 0){
                    while (A % B != 0){
                        A = std::max(A, B) % B;
                        A_1 = A;
                        A = B;
                        B = A_1;
                    }
                    std::cout << "НОД равен: " << A_1 << std::endl;
                }
                else{
                    std::cout << "НОД равен: " << B << std::endl;
                }
            }
            else{
                if (B % A != 0){
                    while (B % A != 0){
                        B = B % A;
                        B_1 = B;
                        B = A;
                        A = B_1;
                    }
                    std::cout << "НОД равен: " << B_1 << std::endl;
                }
                else{
                    std::cout << "НОД равен: " << A << std::endl;
                }
            }
            break;
        }
    }
    
// 6
    std::cout << "Нахождение целого числа K — порядкового номера числа Фибоначчи N" << std::endl;
    // int N, K = 3, Fib = 0, Fib_1 = 1, Fib_2 = 1, Fib_1_1;
    std::cout << "Введите число N - ";
    std::cin >> N;
    while (true){
        if (N <= 1){
            std::cout << "Введено неверное значение. Попробуйте заново." << std::endl;
            std::cout << "Введите число N - ";
            std::cin >> N;
        }
        else{
            while (Fib != N){
                Fib = Fib_1 + Fib_2;
                Fib_1_1 = Fib_1;
                Fib_1 = Fib;
                Fib_2 = Fib - (Fib - Fib_1_1);
                K = K + 1;
            }
            std::cout << "K равно: " << K << std::endl;
            break;
        }
    }
}
