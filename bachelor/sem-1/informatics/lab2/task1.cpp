#include <iostream> 
#include <cmath>

using namespace std; // подключаем пространство имен
int main() { 
    int summa = 0; // объявляем и инициализируем переменную для хранения суммы
    int value = 0; // объявляем и инициализируемпеременную для хранения текущего значения
    while (value < 200) { // создаем цикл while для чисел <200
        ++value; // прибавляем 1 к value каждое повторение цикла
        if (value%3==0) {
            summa = summa + value; // прибавляем к сумме текущее сначение если оно кратно 3
        }
    }
    cout << "Summa: " << summa << endl; // выводим результат
    return 0;
}