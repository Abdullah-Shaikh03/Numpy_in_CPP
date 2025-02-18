# **Numcpp - A Lightweight NumPy Alternative for C++**  

Numcpp is a lightweight, high-performance C++ library inspired by NumPy. It provides multi-dimensional array operations, mathematical functions, and linear algebra tools in pure C++.

---

## **🚀 Features**
✅ Multi-dimensional arrays  
✅ Element-wise arithmetic (`+`, `-`, `*`, `/`)  
✅ Matrix operations (addition, transpose, dot product)  
✅ Dynamic memory allocation  
✅ Readable and simple API  

---

## **📂 Folder Structure**
```
Numcpp/
│── include/
│   ├── numcpp.hpp       # Header file (declarations)
│── src/
│   ├── numcpp.cpp       # Implementation file
│── examples/
│   ├── example_numcpp.cpp  # Example usage
│── tests/
│   ├── test_numcpp.cpp  # Unit tests
│── README.md            # Documentation
│── Makefile             # Build automation
│── LICENSE              # MIT License
```

---

## **📥 Installation & Compilation**
### **1️⃣ Prerequisites**
Ensure you have:  
✅ **C++ compiler** (GCC, Clang, or MSVC)  
✅ **CMake** (optional for advanced builds)  

### **2️⃣ Build with Makefile (Recommended)**
Run:
```sh
make
```
This compiles the project and creates an executable.

### **3️⃣ Run the Example**
```sh
make run
```

### **4️⃣ Clean Compiled Files**
```sh
make clean
```

---

## **🛠 Usage**
### **1️⃣ Creating a Matrix**
```cpp
#include "numcpp.hpp"

int main() {
    std::vector<size_t> shape = {2, 2}; // 2x2 Matrix
    numcpp A(shape);

    A.set({0, 0}, 1);
    A.set({0, 1}, 2);
    A.set({1, 0}, 3);
    A.set({1, 1}, 4);

    std::cout << "Matrix A:\n";
    A.print();
}
```

### **2️⃣ Matrix Addition**
```cpp
numcpp B(shape);
B.set({0, 0}, 5);
B.set({0, 1}, 6);
B.set({1, 0}, 7);
B.set({1, 1}, 8);

numcpp C = A + B;

std::cout << "A + B:\n";
C.print();
```

### **3️⃣ Transpose a Matrix**
```cpp
numcpp D = A.transpose();
std::cout << "Transpose of A:\n";
D.print();
```

### **4️⃣ Dot Product**
```cpp
numcpp E = A.dot(B);
std::cout << "A dot B:\n";
E.print();
```

---

## **✅ Running Tests**
We use Google Test for unit testing.  
To run tests:
```sh
make test
./test_numcpp
```

---

## **🤝 Contributing**
We welcome contributions! To contribute:

1. **Fork** the repository  
2. **Clone** your forked repo:
   ```sh
   git clone https://github.com/your-username/numcpp.git
   cd numcpp
   ```
3. **Create a new branch**:
   ```sh
   git checkout -b feature-new-method
   ```
4. **Make changes & commit**:
   ```sh
   git commit -m "Added new feature"
   ```
5. **Push & open a Pull Request**:
   ```sh
   git push origin feature-new-method
   ```
---