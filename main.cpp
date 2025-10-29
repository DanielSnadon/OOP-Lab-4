#include "point.h"

int main() {
    Point<int> pointInt(10, 20);
    std::cout << "Point<int>: " << pointInt << std::endl;
    
    Point<double> pointDouble(1.5, -3.7);
    std::cout << "Point<double>: " << pointDouble << std::endl;

    // Point<std::string> p_error("hello", "world");

    

    return 0;
}