// подключаем директивы
#include <iostream>
#include <cmath> 
using namespace std; // подключаем пространство имен
int main() { // объявляем фукнцию main
    double n;
    double m; // объявляем переменные n и m 
    cin >> n; 
    cin >> m; // инициализируем переменные n и m с помощью ввода с клавиатуры 
    cout << "Step 1: n++ + m = " << n++ + m << endl; // шаг 1
    cout << "Step 2: ++n + m = " << boolalpha << (++n > m) << endl; // шаг 2
    cout << "Step 3: n-- + m = " << boolalpha << (n-- > m) << endl; // шаг 3
    return 0; // возвращаем 0, чтобы показать успешное завершение программы
}