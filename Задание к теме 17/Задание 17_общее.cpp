#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <algorithm>



namespace first{
    int N, K, L, el, d, schet, minn, firstt, second;
    double summ = 0, count = 0, sr_ar;
    int mas[100];
    int A[100];
    // int A_m_2[100];
}

using namespace first;

int main(){
// 1
	std::cout << "Нахождение среднего арифметического элементов массива размера N с номерами от K до L включительно" << std::endl;
	std::cout << "Введите размер массива N - ";
	std::cin >> N;
	std::cout << "Введите число K - ";
	std::cin >> K;
	std::cout << "Введите число L - ";
	std::cin >> L;
	while (true){
	    if ((K < 1) || (L < K) || (N < L)){
	        std::cout << "Введены неверные значения. Попробуйте заново." << std::endl;
	        std::cout << "Введите размер массива N - ";
	        std::cin >> N;
	        std::cout << "Введите число K - ";
	        std::cin >> K;
            std::cout << "Введите число L - ";
	        std::cin >> L;
	    }
	    else{
	        for (int i = 0; i < N; ++i){
	            std::cin >> mas[i];
	        }
	        if (L == N){
	            std::cout << "mas[K - L] = { ";
	            for (int i = K; i < L + 1; ++i){
	                std::cout << mas[i] << " ";
	                summ = summ + mas[i];
	                count = count + 1;
	            }
	            std::cout << "}";
	            sr_ar = summ / (count - 1);
	            std::cout << "\nСреднее арифметическое равно: " << sr_ar << std::endl;
	        }
	        else{
	            std::cout << "mas[K - L] = { ";
                for (int i = K; i < L + 1; ++i){
                    std::cout << mas[i] << " ";
                    summ = summ + mas[i];
	                count = count + 1;
	            }
	            std::cout << "}";
	            sr_ar = summ / count;
	            std::cout << "\nСреднее арифметическое равно: " << sr_ar << std::endl;
	        break;
	        }
	    }
	}

// 2
    std::cout << "Проверка, образуют ли элементы массива размера N арифметическую прогрессию. Если образуют, то вывод разности прогрессии, если нет — вывод 0." << std::endl;
	std::cout << "Введите размер массива N - ";
	std::cin >> N;
    for (int i = 0; i < N; ++i){
        std::cin >> mas[i];
    }
    while (true){
        for (int i = 0; i < N; ++i){
            if (mas[i] == mas[i + 1]){
                std::cout << "Введены неверные значения. Попробуйте заново." << std::endl;
                for (int i = 0; i < N; ++i){
                    std::cin >> mas[i];
                }
                // break;
            }
            else{
                // break; 
            }
            // break;
        }
        break;
    }
    if (N == 0){
        d = 0;
    }
    else{
        d = mas[1] - mas[0];
        for (int i = 0; i < N; ++i){
            if (d != mas[i] - mas[i - 1]){
                d = 0;
            }
        }
    }
    std::cout << "Ответ: " << d << std::endl;
    
// 3
    std::cout << "Нахождение минимального элемента из элементов массива размера N с четными номерами: A2, A4, A6..." << std::endl;
	std::cout << "Введите размер массива N - ";
	std::cin >> N;
	for (int i = 0; i < N; ++i){
	    std::cin >> A[i];
	}
	std::cout << "A[четные] = { ";
	for (int i = 0; i < N; i += 2){
	    std::cout << A[i] << " ";
	    schet = schet + 0;
	}
	std::cout << "}";
    minn = A[0];
    for (int i = 0; i < N; ++i){
        if (A[i] < A[i - 1]){
            minn = A[i];
        }
    }
    std::cout <<  "\nМинимальное число равно: " << minn << std::endl;
    
// 4
    std::cout << "Найти номер последнего локального максимума массива размера N (локальный максимум — это элемент, который больше любого из своих соседей)." << std::endl;
	std::cout << "Введите размер массива N - ";
	std::cin >> N;
	for (int i = 0; i < N; ++i){
	    std::cin >> mas[i];
	}
	int loc_max = 0;
	for (int i = 1; i < N; i++){
	    if (mas[i] > mas[loc_max]){
	        loc_max = i;
	    }
	}
	std::cout << "Локальный максимум равен: " << loc_max + 1 << std::endl;
	
// 5
    std::cout << "Нахождение номеров одинаковых элементов массива размера N и вывод этих номеров в порядке возрастания" << std::endl;
	std::cout << "Введите размер массива N - ";
	std::cin >> N;
	for (int i = 0; i < N; i++){
	    std::cin >> mas[i];
	}
	for (int i = 0; i < N; i++){
	    for (int j = i + 1; j < N; j++){
	        if (mas[i] == mas[j]){
	            firstt = i;
	            second = j;
	        }
	    }
	}
	std::cout << "Номера одинаковых элементов равны: " << firstt << " " << second << std::endl;
}