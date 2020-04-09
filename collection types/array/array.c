// 数组
// c语言只支持长度不变的数组。
// c语言只支持索引，修改值以及获取数组长度。
// c语言的数组名是常量指针，不可改变。
// 不能通过比较数组名比较数组。
// 其他操作都需要自己实现。
// 传递给函数的数组自动转化成指针，数组长度因此损失。
#include <stdio.h>

int main() {
    // 数组初始化
    // 长度为10,并初始化为0
    int array[10] = {0};
    // 索引与赋值
    array[1] = 3;
    int length = sizeof(array) / sizeof(int);
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    int array2[10] = {0};
    if (array == array2) {
        printf("We are equal.");
    }
}