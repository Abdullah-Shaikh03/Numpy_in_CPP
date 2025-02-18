// numcpp.hpp
#ifndef NUMCPP_HPP
#define NUMCPP_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include <cmath>

class numcpp {
private:
    std::vector<double> data;
    std::vector<size_t> shape;
    size_t total_size;

    size_t get_index(const std::vector<size_t>& indices) const;

public:
    numcpp(std::vector<size_t> shape);
    void set(const std::vector<size_t>& indices, double value);
    double get(const std::vector<size_t>& indices) const;
    void print() const;
    void reshape(const std::vector<size_t>& new_shape);
    numcpp operator+(const numcpp& other) const;
    numcpp operator-(const numcpp& other) const;
    numcpp operator*(const numcpp& other) const;
    numcpp operator/(const numcpp& other) const;
    numcpp transpose() const;
    numcpp dot(const numcpp& other) const;
    numcpp slice(size_t start, size_t end) const;
    numcpp mean() const;
    numcpp variance() const;
    numcpp stddev() const;
};

class linalg {
public:
    static numcpp inverse(const numcpp& matrix);
    static numcpp determinant(const numcpp& matrix);
    static numcpp eigenvalues(const numcpp& matrix);
};

class random {
public:
    static numcpp rand(size_t rows, size_t cols);
    static numcpp randint(size_t rows, size_t cols, int min, int max);
    static numcpp normal(size_t rows, size_t cols, double mean, double stddev);
};

#endif // NUMCPP_HPP
