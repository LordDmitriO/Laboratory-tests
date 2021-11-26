#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <algorithm>



namespace first{
    int A_1, B_1, x, y;
    double A, B, R1, R2, S1, S2, SR, N;
}

using namespace first;

void PowerA3(double A, double B){
    B = pow(A, 3);
    std::cout << B << std::endl;
}

int Sign(double X){
    if (X < 0){
        return -1;
    }
    if (X > 0){
        return 1;
    }
    if (X == 0){
        return 0;
    }
}

void RingS(double R1, double R2){
   S1 = 3.14 * pow(R1, 2);
   S2 = 3.14 * pow(R2, 2);
   SR = S1 - S2;
   std::cout << SR << std::endl;
}

int Quarter(int x, int y){
    if (x > 0 & y > 0){
        return 1;
    }
    if (x < 0 & y > 0){
        return 2;
    }
    if (x < 0 & y < 0){
        return 3;
    }
    if (x > 0 & y < 0){
        return 4;
    }
}

void Fact2(double N){
    int fact = 1;
    if ((int) N % 2 == 0){
        for (int i = 2; i <= N; i += 2){
            fact = fact * i;
        }
        std::cout << "Двойной факториал равен: " <<  fact << std::endl;
    }
    if ((int) N % 2 != 0){
        for (int i = 1; i <= N; i += 2){
            fact = fact * i;
        }
        std::cout << "Двойной факториал равен: " <<  fact << std::endl;
    }
}


int main(){
    
// 1
    std::cout << "Описание функции PowerA3(A, B), которая вычисляет третью степень числа A и возвращает ее в переменной B" << std::endl;
    for (int i = 0; i < 5; ++i){
        std::cout << "Введите значение A - ";
        std::cin >> A;
        std::cout << "Результат выполнения функции равен: ";
        PowerA3(A, B);
    }
    
// 2
    std::cout << "Описание функции Sign(X) целого типа, которая возвращает для вещественного числа X определенные значения" << std::endl;
    // double A, B;
    std::cout << "Введите значение A - ";
    std::cin >> A;
    std::cout << "Введите значение B - ";
    std::cin >> B;
    std::cout << "Результат выполнения функции равен: ";
    std::cout << Sign(A) + Sign(B) << std::endl;
    
// 3
    std::cout << "Описание функции RingS(R1, R2) вещественного типа, которая находит площадь кольца, заключенного между двумя окружностями с общим центром и радиусами R1 и R2 (R1 и R2 — вещественные, R1 > R2). " << std::endl;
    for (int i = 0; i < 3; ++i){
        std::cout << "Введите значение радиуса R1 - ";
        std::cin >> R1;
        std::cout << "Введите значение радиуса R2 - ";
        std::cin >> R2;
        while (true){
            if (R1 <= R2){
                std::cout << "Введены неверные значения. Попробуйте заново." << std::endl;
                std::cout << "Введите значение радиуса R1 - ";
                std::cin >> R1;
                std::cout << "Введите значение радиуса R2 - ";
                std::cin >> R2;
            }
            else{
                std::cout << "Результат выполнения функции равен: ";
                RingS(R1, R2);
                break;
            }
        }
    }

// 4
    std::cout << "Описание функции Quarter(x, y) целого типа, которая определяет номер координатной четверти, в которой находится точка с ненулевыми вещественными координатами (x, y). ";
    for (int i = 0; i < 3; ++i){
        std::cout << "Введите значение координаты x - ";
        std::cin >> x;
        std::cout << "Введите значение координаты y - ";
        std::cin >> y;
        std::cout << "Результат выполнения функции равен: ";
        std::cout << Quarter(x, y) << std::endl;
    }
// 5
    std::cout << "Описание функции Fact2(N) вещественного типа, которая вычисляет двойной факториал: " << std::endl;
    std::cout << "Введите значение N - ";
    std::cin >> N;
    Fact2(N);
}