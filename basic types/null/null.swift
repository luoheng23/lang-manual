// 空值
// swift语言没有空值的概念,只有可空类型。
// nil  => 不存在值
// swift将可空类型直接放入了基础语法中，用起来更加自然

let array = [1, 2, 3, 4, 5]
let index = [0, 2, 4, 6]

// 返回可空类型
func get_element_by_index(_ ind: Int) -> Int? {
    if ind < 0 || ind >= array.count {
        return nil
    }
    return array[ind]
}

var sum = 0
for value in index {
    let cur = get_element_by_index(value)
    if let value = cur { // 需要显式检查函数返回的值，否则因为类型不同无法编译
        sum += value
    }
}
print("sum: ", sum)
