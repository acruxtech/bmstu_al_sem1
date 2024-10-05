#include <iostream>
#include <cmath>


int main() {
    double res { 0.0 };
    double item { 0.0 };

    for (int n = 1; n < 6; n++) {
        item = 1 / pow(M_E, n);
        std::cout << item << std::endl;
        res += item;
    }
    
    std::cout << "Сумма: " << res << std::endl;
}
