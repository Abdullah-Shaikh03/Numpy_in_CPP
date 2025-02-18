#include "numcpp.hpp"

size_t numcpp::get_index(const std::vector<size_t>& indices) const {
    size_t index = 0;
    size_t multiplier = 1;
    for (int i = shape.size() - 1; i >= 0; --i) {
        index += indices[i] * multiplier;
        multiplier *= shape[i];
    }
    return index;
}

numcpp::numcpp(std::vector<size_t> shape) : shape(shape) {
    total_size = 1;
    for (size_t dim : shape) total_size *= dim;
    data.resize(total_size, 0.0);
}

void numcpp::set(const std::vector<size_t>& indices, double value) {
    data[get_index(indices)] = value;
}

double numcpp::get(const std::vector<size_t>& indices) const {
    return data[get_index(indices)];
}

void numcpp::print() const {
    for (size_t i = 0; i < total_size; ++i) {
        std::cout << data[i] << " ";
        if ((i + 1) % shape.back() == 0) std::cout << std::endl;
    }
}

numcpp numcpp::operator+(const numcpp& other) const {
    numcpp result(shape);
    for (size_t i = 0; i < total_size; ++i) {
        result.data[i] = this->data[i] + other.data[i];
    }
    return result;
}
