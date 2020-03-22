// Bool
// c语言没有内建的bool类型，它使用1代表true,0代表false。
// c语言存在其他类型到布尔类型的隐式转换。
// 基本类型的零值或空值都是false。
// number类型的零值；
// pointer类型的NULL。
#include <stdio.h>

int main() {
    int a = 0;
    char b = '\0';
    double c = 0.0;
    char *p = NULL;
    if (!a && !b && !c && !p) {
        printf("they are false.\n");
    }
}