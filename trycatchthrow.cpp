#include <iostream>

// Custom exception class
class MyException : public std::exception {
public:
    MyException(const char* message) : msg(message) {}

    const char* what() const noexcept override {
        return msg;
    }

private:
    const char* msg;
};

int divide(int a, int b) {
    if (b == 0) {
        throw MyException("Division by zero is not allowed");
    }
    return a / b;
}

int main() {
    try {
        int result = divide(10, 0);
        std::cout << "Result: " << result << std::endl;
    } catch (const MyException& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    } catch (...) {
        std::cout << "Caught an unknown exception" << std::endl;
    }

    return 0;
}
