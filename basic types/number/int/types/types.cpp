// Int
// c++语言提供各种大小的整型
// int8 -> char
// uint8 -> unsigned char
// int16 -> short
// uint16 -> unsigned short
// int32 -> long | int
// uint32 -> unsigned long | unsigned int
// int64 -> long long
// uint64 -> unsigned long long
// c++语言没有与平台位数等同的整型
#include <iostream>

int main() {
    long long a;
    long long min_long_long = ~(((unsigned long long)-1)>>1);
    long long max_long_long = ((unsigned long long)-1)>>1;
    int b;
    int min_int = ~(((unsigned int)-1)>>1);
    int max_int = ((unsigned int)-1)>>1;
    std::cout << "int64 a: "<< sizeof(a) << "\n" << "min: " << min_long_long << "\nmax: " << max_long_long << "\n";
    std::cout << "int b: "<< sizeof(b) << "\n" << "min: " << min_int << "\nmax: " << max_int << "\n";
}