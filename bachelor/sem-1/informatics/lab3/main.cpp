#include <iostream>
#include <cmath>


using namespace std;

int main() {
    
    double a = 0.1;
    double b = 1.0;
    int k = 10;
    double func = (b - a) / k; 
    
    int n = 10;
    double eps = 0.0001;
    double ln3 = log(3.0); // Натуральный логарифм из 3

    // Настройка вывода столбцов
 
    cout << "x    S(n=10)    S(eps)    y=3^x" << endl;

    // Внешний цикл для изменения x. 
 
    for (double x = a; x <= b; x += func) {
        
        // Вычисление суммы для n
        double summa_n = 1.0; // Стартуем с первого члена
        double term_n = 1.0;
        for (int i = 1; i <= n; i++) {
            term_n = term_n * (x * ln3) / i; // Вычисляем следующий член
            summa_n += term_n;
        }

        //  Вычисление суммы для eps
        double sum_eps = 1.0; 
        double term_eps = 1.0;
        int i = 1;
        
        // Считаем первый член
        term_eps = term_eps * (x * ln3) / i; 
        
        // Продолжаем суммировать пока член по модулю больше или равен eps
        while (abs(term_eps) >= eps) {
            sum_eps += term_eps;
            i++;
            term_eps = term_eps * (x * ln3) / i;
        }

        // Точное значение функции
        double tochnoe = pow(3.0, x);

        // Вывод результатов
        cout << x << "    " << summa_n << "    " << sum_eps << "    " << tochnoe << endl;
    }

    return 0;
}