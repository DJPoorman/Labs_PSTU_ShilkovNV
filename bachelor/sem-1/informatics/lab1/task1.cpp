#include <iostream> 
#include <cmath> 

using namespace std; 

double dbl_values() {
    double a = 1000;
    double b = 0.0001;
    double c = pow(a+b, 2); double f = pow(a, 2) + (2*a*b); double r = (c-f)/pow(b, 2);
    return r;
}
float fl_values() {
    float a = 1000;
    float b = 0.0001; 
    float c = pow(a+b, 2); float f = pow(a, 2) + (2*a*b); float r = (c-f)/pow(b, 2);
    return r;
}

int main()
{ 
    cout << "Double values " << dbl_values() << endl;
    cout << "Float values " << fl_values() << endl;

    
    return 0; 
    
}