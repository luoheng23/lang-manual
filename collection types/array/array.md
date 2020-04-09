# 数组
数组是编程语言一个很重要的线性结构。用于保存一系列的值。
从数组的大小可变性来看，数组分为长度不变的数组以及长度可以动态增长的数组。

## 长度可变的数组vector
### 以库的方式支持，默认为不可变数组
1. c++ vector
2. java ArrayList
3. rust vec
### 原生支持动态数组
4. go array slice
5. python
6. js
7. swift

### 数组的常规操作
1. array[i]: 索引
2. array[i] = 10: 修改值
3. array.length: 获取数组长度
4. index(value): 找到value在数组中的索引
5. contains(value): 如果value在数组中，返回True
6. sort(): 对数组进行排序，
7. sort(function): 以自定义的方式排序
8. reverse(): 数组翻转

### 可变数组的操作
1. removeLast(): 去掉最后一个元素
2. removeFirst(): 去掉最前面一个元素
3. append(value): 往尾部添加元素
4. insert(index, value): 往index位置添加元素
5. remove(index, value): 删除index处的元素
5. +: 数组加法
6. array.capacity: 获取数组容量
7. array.size: 获取数组长度
8. empty: 判断数组是否为空
9. clear: 清空数组

### 比较对象
除了上述操作外，还需要注意的是：
1. 数组的声明方式
2. 创建含相同元素的数组
3. 设定数组的大小
4. 数组是值类型吗？
5. 数组的比较性