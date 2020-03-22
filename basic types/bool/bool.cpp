// Bool
// c++语言有内建的bool类型，包括true和false。
// c++语言存在其他类型到布尔类型的隐式转换。
// 基本类型的零值或空值都是false。
// number类型的零值；
// pointer类型的NULL；
// bool类型的false。
#include <iostream>

int main() {
    int a = 0;
    char b = '\0';
    double c = 0.0;
    bool d = true;
    char *p = NULL;
    if (d && !a && !b && !c && !p) {
        std::cout << "they are false." << std::endl;
    }
}