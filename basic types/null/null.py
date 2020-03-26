# 空值
# python语言有空值的概念, 空值为None.
array = [1, 2, 3, 4, 5]
index = [0, 2, 4, 6]

def get_element_by_index(ind):
    if ind < 0 or ind >= len(array):
        return None
    return array[ind]

sum = 0
for value in index:
    cur = get_element_by_index(value)
    if cur is not None: # 需要检查函数返回的变量是否为空，不检查也可以编译，但程序有崩溃的危险
        sum += cur
print("sum: ", sum)
