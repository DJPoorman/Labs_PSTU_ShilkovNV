#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    double n;
    double m;
    cin >> n; 
    cin >> m; 
    cout << "Step 1: n++ + m = " << n++ + m << endl;
    cout << "Step 2: ++n + m = " << boolalpha << (++n > m) << endl;
    cout << "Step 3: n-- + m = " << boolalpha << (n-- > m) << endl;
    return 0;
}