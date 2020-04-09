// 数组
// c++语言支持长度不变的数组。
// c++以标准库vector的形式支持动态数组
// 如果vector内的内容可比较,则可以直接用==比较vector

#include <iostream>
#include <vector>
#include <algorithm>

void printArray(int array[], int length) {
    for (int i = 0; i < length; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void printVector(std::vector<int> vec) {
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    // 数组初始化
    // 长度为10,并初始化为0
    int array[10] = {0};
    // 索引与赋值
    array[1] = 3;
    printArray(array, sizeof(array)/sizeof(int));

    // 创建相同元素的数组
    // 5个10
    std::vector<int> vec(5, 10);
    printVector(vec);

    for (int i = 0; i < 5; i++)
    {
        vec.push_back(i); // append
    }
    for (int i = 5; i < 10; i++)
    {
        // insert(index, index)
        // index为表示元素位置的迭代器值
        vec.insert(vec.end(), i);
    }
    vec.pop_back(); // removeLast
    printVector(vec);
    vec.erase(vec.begin()); // removeFirst|remove
    std::sort(vec.begin(), vec.end()); // sort
    printVector(vec);
    std::sort(vec.begin(), vec.end(), [](int first, int second){
        return first > second;
    });   // sort in decreasing order
    printVector(vec);
    if (vec.empty())
    { // empty
        std::cout << "vec is empty" << std::endl;
    }
    // capacity
    std::cout << vec.capacity() << std::endl;
    // size
    std::cout << vec.size() << std::endl;
    printVector(vec);
    // contains
    int index = *std::find(vec.begin(), vec.end(), 20);
    vec[vec.size() - 1] = 20;
    // for 20 doesn't exist, so index is the length of vec
    std::cout << index << std::endl;
    // clear
    vec.clear();
    std::cout << vec.size() << std::endl;
    printVector(vec);
    std::vector<int> vec2(vec);
    if (vec == vec2) {
        std::cout << "We are equal." << std::endl;
    }
}