#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <algorithm>



namespace first{
    int N, A, D, B, A_1, B_1;
    int mas[100];
    int A_m[100];
    int A_m_2[100];
}

using namespace first;

int main(){
// 1
    std::cout << "Формирование и вывод целочисленного массива размера N, содержащего N первых положительных нечетных чисел: 1, 3, 5, . . . ." << std::endl;
    std::cout << "Введите значение N - ";
    std::cin >> N;
    while (true){
        if (N <= 0){
            std::cout << "Введено неверное значение. Попробуйте заново." << std::endl;
            std::cout << "Введите значение N - ";
            std::cin >> N;
        }
        else{
            for (int i = 0; i < N; ++i){
                mas[i] = 1 + i * 2;
            }
            std::cout << "mas[100] = { ";
            for (int i = 0; i < N; ++i){
                std::cout << mas[i] << " ";
            }
            std::cout << "}" << std::endl;
            break;
        }
    }
    
// 2
    std::cout << "Формирование и вывод массива размера N, содержащего N первых членов данной прогрессии: A, A·D, A·D2 , A·D3 , . . ." << std::endl;
    std::cout << "Введите значение N - ";
    std::cin >> N;
    std::cout << "Введите значение A - ";
    std::cin >> A;
    std::cout << "Введите значение D - ";
    std::cin >> D;
    while (true){
        if (N <= 1){
            std::cout << "Введены неверные значения. Попробуйте заново." << std::endl;
            std::cout << "Введите значение N - ";
            std::cin >> N;
            std::cout << "Введите значение A - ";
            std::cin >> A;
            std::cout << "Введите значение D - ";
            std::cin >> D;
        }
        else{
            for (int i = 0; i < N; ++i){
                mas[i] = A * pow(D, i);
            }
            std::cout << "mas[100] = { ";
            for (int i = 0; i < N; ++i){
                std::cout << mas[i] << " ";
            }
            std::cout << "}" << std::endl;
            break;
        }
    }
    
// 3
    std::cout << "Формирование и вывод целочисленного массива размера N, первый элемент которого равен A, второй равен B, а каждый последующий элемент равен сумме всех предыдущих" << std::endl;
    std::cout << "Введите значение N - ";
    std::cin >> N;
    std::cout << "Введите значение A - ";
    std::cin >> A;
    std::cout << "Введите значение B - ";
    std::cin >> B;
    while (true){
        if (N <= 2){
            std::cout << "Введены неверные значения. Попробуйте заново." << std::endl;
            std::cout << "Введите значение N - ";
            std::cin >> N;
            std::cout << "Введите значение A - ";
            std::cin >> A;
            std::cout << "Введите значение B - ";
            std::cin >> B;
        }
        else{
            mas[0] = A;
            mas[1] = B;
            for (int i = 2; i < N; ++i){
                mas[i] = 0;
                for (int j = 0; j < i; ++j){
                    mas[i] = mas[i] + mas[j];
                }
            }
            std::cout << "mas[100] = { ";
            for (int i = 0; i < N; ++i){
                std::cout << mas[i] << " ";
            }
            std::cout << "}" << std::endl;
            break;
        }
    }
    
// 4
    std::cout << "Вывод элементов заданного массива в следующем порядке: A1, AN , A2, AN−1, A3, AN−2," << std::endl;
    std::cout << "Введите значение N - ";
    std::cin >> N;
    for (int i = 0; i < N; ++i){
        std::cin >> A_m[i];
    }
    std::cout << "A[100] = { ";
    for (int i = 0; i < N; ++i){
        if (i == 0){
            std::cout << A_m[0] << " ";
        }
        if (i % 2 == 0 & i != 0){
            std::cout << A_m[i] << " ";
        }
        if (i % 2 != 0){
            std::cout << A_m[N - i] << " ";
        }
    }
    std::cout << "}" << std::endl;

// 5
    std::cout << "Вывод вначале элементов заданного массива с нечетными номерами в порядке возрастания номеров, а затем — элементы с четными номерами в порядке убывания номеров" << std::endl;
    std::cout << "Введите значение N - ";
    std::cin >> N;
    for (int i = 0; i < N; ++i){
        std::cin >> A_m_2[i];
    }
    std::cout << "A[100] (нечетные эл-ты) = { ";
    for (int i = 1; i < N; i += 2){
        std::cout << A_m_2[i] << " ";
    }
    std::cout << "}" << std::endl;
    std::cout << "A[100] (четные эл-ты) = { ";
    for (int i = 2 * ((N - 1) / 2); i >= 0; i -= 2){
        std::cout << A_m_2[i] << " ";
    }
    std::cout << "}" << std::endl;
}