#include "numcpp.hpp"

int main() {
    size_t rows, cols;
    std::cout << "Enter number of rows and columns: ";
    std::cin >> rows >> cols;

    numcpp arr1({rows, cols});
    numcpp arr2({rows, cols});

    std::cout << "Enter elements for first array: ";
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            double value;
            std::cin >> value;
            arr1.set({i, j}, value);
        }
    }

    std::cout << "Enter elements for second array: ";
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            double value;
            std::cin >> value;
            arr2.set({i, j}, value);
        }
    }

    numcpp result = arr1 + arr2;
    std::cout << "Result after addition: ";
    result.print();

    return 0;
}
