#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>

namespace first{
    int N, sec, K, number, A, B, C, col, S_n, Y, St;
};

using namespace first;

int main (){
    
// 1
    std::cout << "Нахождение кол-ва секунд, прошедших с начала последней минуты" << std::endl;
    std::cout << "Введите кол-во секунд N - ";
    std::cin >> N;
    while (true){
        if (N < 0){
            std::cout << "Введено неверное значение. Попробуйте заново." << std::endl;
            std::cout << "Введите кол-во секунд N - ";
            std::cin >> N;
        }
        else{
            sec = N % 60;
            std::cout << "Кол-во секунд, прошедших с начала последней минуты равно:";
            std::cout << sec << std::endl;
            break;
        }
    }
    
// 2
    std::cout << "Определение номера дня недели для K-го дня года, если известно, что в этом году 1 января было понедельником" << std::endl;
    std::cout << "Введите значение K - ";
    std::cin >> K;
    while (true){
        if (K < 1 || K > 365){
            std::cout << "Введено неверное значение. Попробуйте заново." << std::endl;
            std::cout << "Введите значение K - ";
            std::cin >> K;
        }
        else{
            number = K % 7;
            std::cout << "Номер дня недели для K-го дня года равен:";
            std::cout << number << std::endl; 
            break;
        }
    }
    
// 3
    std::cout << "Определение номера дня недели для K-го дня года, если известно, что в этом году 1 января было днем недели с номером N" << std::endl;
    std::cout << "Введите значение N - ";
    std::cin >> N;
    std::cout << "Введите значение K - ";
    std::cin >> K;
    while (true){
        if ((K < 1 || K > 365) || (N < 1 || N > 7)){
            std::cout << "Введены неверные значения. Попробуйте заново." << std::endl;
            std::cout << "Введите значение N - ";
            std::cin >> N;
            std::cout << "Введите значение K - ";
            std::cin >> K;
        }
        else{
            // if (K % 7 == 0){
            //     number = (N + 6) % 7;
            // }
            
            number = (N + K % 7 - 1) % 7;
            
            if (number == 0){
                number = 7;
            }
            // number = (K % 8 + N - 1) % 8 + (N + 1) / 6;
            std::cout << "Номер дня недели для K-го дня года равен:";
            std::cout << number << std::endl; 
            break; 
        }
    }
    
// 4
    std::cout << "Нахождение количества квадратов, размещенных на прямоугольнике, а также площади незанятой части прямоугольника" << std::endl;
    std::cout << "Введите значение стороны A - ";
    std::cin >> A;
    std::cout << "Введите значение стороны B - ";
    std::cin >> B;
    std::cout << "Введите значение стороны C - ";
    std::cin >> C;
    while (true){
        if (A <= 0 || B <= 0 || C <= 0){
            std::cout << "Введены неверные значения. Попробуйте заново." << std::endl;
            std::cout << "Введите значение стороны A - ";
            std::cin >> A;
            std::cout << "Введите значение стороны B - ";
            std::cin >> B;
            std::cout << "Введите значение стороны C - ";
            std::cin >> C;
        }
        else{
            col = (A * B) / pow(C, 2);
            S_n = A * B - pow(C, 2) * col;
            std::cout << "Количество квадратов равно:";
            std::cout << col << std::endl;
            std::cout << "Незанятая площадь равна:";
            std::cout << S_n << std::endl;
            break;
        }
    }
    
// 5
    std::cout << "Определение соответствующего году номера столетия, учитывая, что, к примеру, началом 20 столетия был 1901 год" << std::endl;
    std::cout << "Введите номер года Y - ";
    std::cin >> Y;
    while (true){
        if (Y < 0){
            std::cout << "Введено неверное значение. Попробуйте заново." << std::endl;
            std::cout << "Введите номер года Y - ";
            std::cin >> Y;
        }
        else{
            if (Y % 100 < 1){
                St = Y / 100 - 1;
            }
            else{
                St = Y / 100;
            }
            std::cout << "Номер столетия:";
            std::cout << St << std::endl;    
            break;
        }
    }
    return 0;
};

