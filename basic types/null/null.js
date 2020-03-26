// 空值
// javascript语言有空值的概念, 空值为null.
const array = [1, 2, 3, 4, 5];
const index = [0, 2, 4, 6];

function get_element_by_index(ind) {
    if (ind < 0 || ind >= array.length) {
        return null;
    }
    return array[ind];
}

var sum = 0;
for (value of index) {
    const cur = get_element_by_index(value);
    if (cur != null) { // 需要检查函数返回的变量是否为空，不检查也可以编译，但程序有崩溃的危险
        sum += cur;
    }
}
console.log("sum: ", sum);
