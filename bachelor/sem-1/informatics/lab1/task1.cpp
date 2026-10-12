#include <iostream> 
#include <cmath> 

using namespace std; 

double dbl_values() { // объявляем фукцию, которая возвращает значение типа double
    double a = 1000;
    double b = 0.0001; // инициализируем переменные типа double
    double c = pow(a+b, 2); double f = pow(a, 2) + (2*a*b); double r = (c-f)/pow(b, 2); // проводим вычисления с помощью промежуточных переменных
    return r; // возвращаем значение переменной r
}
float fl_values() { // объявляем фукцию, которая возвращает значение типа float
    float a = 1000;
    float b = 0.0001; // инициализируем переменные типа float
    float c = pow(a+b, 2); float f = pow(a, 2) + (2*a*b); float r = (c-f)/pow(b, 2); // проводим вычисления с помощью промежуточных переменных
    return r; // возвращаем значение переменной r
}

int main() // объявляем фукнцию main
{ 
    cout << "Double values " << dbl_values() << endl; // ответ для типа double
    cout << "Float values " << fl_values() << endl; // ответ для типа float

    
    return 0; // возвращаем 0, чтобы показать успешное завершение программы
    
}