#include <iostream>

int main() {
    int sum = 0, val = 50;
    while (val <= 100){
        sum += val;
        ++val;
    }

    std::cout << "sum = " << sum << std::endl;

    int a = 10;
    while (a >= 0){
        std::cout << "a = " << a << std::endl;
        a--;
    }

    int v1 = 0, v2 = 0;
    std::cout << "输入两个整数，打印这两个整数范围内的所以整数" << std::endl;
    std::cin >> v1 >> v2;
    if (v1 > v2) {
        int temp = v1;
        v1 = v2;
        v2 = temp;
    }
    while (v1 <= v2){
        std::cout << "val = " << v1 << std::endl;
        v1++;
    }


    return 0;
}
