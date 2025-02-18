#include "numcpp.hpp"

int main() {
    // Creating a 2x2 matrix
    numcpp matrix({2, 2});
    matrix.set({0, 0}, 1.0);
    matrix.set({0, 1}, 2.0);
    matrix.set({1, 0}, 3.0);
    matrix.set({1, 1}, 4.0);
    
    std::cout << "Matrix: " << std::endl;
    matrix.print();
    
    // Adding two matrices
    numcpp matrix2({2, 2});
    matrix2.set({0, 0}, 5.0);
    matrix2.set({0, 1}, 6.0);
    matrix2.set({1, 0}, 7.0);
    matrix2.set({1, 1}, 8.0);
    
    numcpp sum = matrix + matrix2;
    std::cout << "Sum of Matrices: " << std::endl;
    sum.print();
    
    return 0;
}
