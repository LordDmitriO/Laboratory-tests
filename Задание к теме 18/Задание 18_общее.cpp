#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <algorithm>



// namespace first{
//     int N, K, L, el, schet, minn, firstt, second;
//     double summ = 0, count = 0, sr_ar;
//     int mas[100];
//     int A[100];
//     // int A_m_2[100];
// }

// using namespace first;

int main(){
// 1
    std::cout << "Перестановка местами содержимого двух массивов и вывод вначале элементов преобразованного массива A, а затем — элементы преобразованного массива B." << std::endl;
    int A[100];
    int B[100];
    int N, el;
    std::cout << "Введите размер массивов N - ";
    std::cin >> N;
    
    
    for (int i = 1; i < N + 1; i++){
        std::cout << "Введите " << i << " элемент массива A - ";
        std::cin >> A[i];
    }
    
    for (int i = 1; i < N + 1; i++){
        std::cout << "Введите " << i << " элемент массива B - ";
        std::cin >> B[i];
    }
    
    
    for (int i = 1; i < N + 1; i++){
        el = A[i];
        A[i] = B[i];
        B[i] = el;
    }
    
    
    std::cout << "Массив A = { ";
    for (int i = 1; i < N + 1; i++){
        std::cout << A[i] << " ";
    }
    std::cout << "}" << std::endl;

    std::cout << "Массив B = { ";
    for (int i = 1; i < N + 1; i++){
        std::cout << B[i] << " ";
    }
    std::cout << "}" << std::endl;
    
// 2
    std::cout << "Формирование нового массива B того же размера, что и массив A по следующему правилу: элемент BK равен среднему арифметическому элементов массива A с номерами от 1 до K." << std::endl;
    int A_1[100];
    double B_1[100];
    double sr_ar;
    int el_1 = 0;
    std::cout << "Введите размер массивов N - ";
    std::cin >> N;
    
    
    for (int i = 1; i < N + 1; i++){
        std::cout << "Введите " << i << " элемент массива A - ";
        std::cin >> A_1[i];
    }
    
    
    for (int K = 1; K < N + 1; K++){
        el_1 = el_1 + A_1[K];
        sr_ar = el_1 / 2.0;
        B_1[K] = sr_ar;
    }
    
    // B_1[1] = A_1[1];
    // el_1 = A[1];
    // for (int K = 1; K < N + 1; K++){
    //     el_1 = el_1 + A_1[K - 1];
    //     sr_ar = el_1 / 2.0;
    //     B_1[K] = sr_ar;
    // }
    
    
    std::cout << "Массив A = { ";
    for (int i = 1; i < N + 1; i++){
        std::cout << A_1[i] << " ";
    }
    std::cout << "}" << std::endl;

    std::cout << "Массив B = { ";
    for (int i = 1; i < N + 1; i++){
        std::cout << B_1[i] << " ";
    }
    std::cout << "}" << std::endl;
    
// 3
    std::cout << "Увеличение всех нечетных чисел, содержащихся в массиве, на исходное значение последнего нечетного числа. Если нечетные числа в массиве отсутствуют, то оставить массив без изменений" << std::endl;
    int mas[100];
    int el_2;
    std::cout << "Введите размер массива N - ";
    std::cin >> N;
    
    
    for (int i = 1; i < N + 1; i++){
        std::cout << "Введите " << i << " элемент массива - ";
        std::cin >> mas[i];
    }
    
    for (int i = 1; i < N + 1; i++){
        if (mas[i] % 2 != 0){
            el_2 = mas[i];
        }
    }
    
    
    for (int i = 1; i < N + 1; i++){
        if (mas[i] % 2 != 0){
            mas[i] = mas[i] + el_2;
        }
    }
    
    
    std::cout << "Массив = { ";
    for (int i = 1; i < N + 1; i++){
        std::cout << mas[i] << " ";
    }
    std::cout << "}" << std::endl;
    
// 4
    std::cout << "Обнуление элементов массива, расположенных между его минимальным и максимальным элементами (не включая минимальный и максимальный элементы)." << std::endl;
    int maks = -10000, minn = 10000, minn_i, maks_i;
    std::cout << "Введите размер массива N - ";
    std::cin >> N;
    
    
    for (int i = 1; i < N + 1; i++){
        std::cout << "Введите " << i << " элемент массива - ";
        std::cin >> mas[i];
    }
    
    
    for (int i = 1; i < N + 1; i++){
        if (mas[i] < minn){
            minn = mas[i];
            minn_i = i;
        }
    }
    
    for (int i = 1; i < N + 1; i++){
        if (mas[i] > maks){
            maks = mas[i];
            maks_i = i;
        }
    }
    
    
    for (int i = minn_i + 1; i < maks_i; i++){
        mas[i] = 0;
    }
    
    
    std::cout << "Массив = { ";
    for (int i = 1; i < N + 1; i++){
        std::cout << mas[i] << " ";
    }
    std::cout << "}" << std::endl;
    
// 5
    std::cout << "Упорядочивание массива, путем перемещения первого элемента на новую позицию." << std::endl;
    int el_3;
    std::cout << "Введите размер массива N - ";
    std::cin >> N;
    
    
    for (int i = 1; i < N + 1; i++){
        std::cout << "Введите " << i << " элемент массива - ";
        std::cin >> mas[i];
    }
    
    
    for (int i = 2; i < N + 1; i++){
        if (mas[i] < mas[i - 1]){
            el_3 = mas[i - 1];
            mas[i - 1] = mas[i];
            mas[i] = el_3;
        }
    }
    
    
    std::cout << "Массив = { ";
    for (int i = 1; i < N + 1; i++){
        std::cout << mas[i] << " ";
    }
    std::cout << "}" << std::endl;
}