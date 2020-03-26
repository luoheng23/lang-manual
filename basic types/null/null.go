// 空值
// go语言有空值的概念，引用类型的默认值为nil.
// 引用类型包括interface, map, channel等

package main

var array = [...]int{1, 2, 3, 4, 5}
var index = [...]int{0, 2, 4, 6}

func get_element_by_index(ind int) map[int]int {
	if ind < 0 || ind >= len(array) {
		return nil
	}
	return map[int]int{array[ind]: array[ind]}
}

func main() {
	sum := 0
	for _, value := range index {
		cur := get_element_by_index(value)
		if cur != nil { // 需要检查函数返回的变量是否为空，不检查也可以编译，但程序有崩溃的危险
			for key := range cur {
				sum += key
			}
		}
	}
	println("sum: ", sum)
}
