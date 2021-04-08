#include <iostream>


int main() {
    std::cout << "Hello, World!" << std::endl;
    int a = 0 , b = 0;
    std::cout << "请输入两个数字" << std::endl;
    std::cin >> a >> b;

    std::cout << "a = "<< a << " b = " << b << " a + b = " << a +b << std::endl;

    std::cout << "a * b =" << a * b << std::endl;

    std::cout << "/*";
    std::cout << "*/";
    std::cout << /* "*/" */";
    std::cout << /* "*/" /* "/*" */;
    return 0;
}
