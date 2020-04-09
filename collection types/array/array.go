// 数组
// go语言支持长度不变的数组。
// 数组是值类型，不同于c语言，数组之间可以直接赋值。
// 赋值的结果是直接拷贝整个数组。
// go语言以切片来实现动态数组。切片是指向数组的指针。
// 使用内建的append函数，在底层数组的容量不够时，会自动扩增数组容量
// 如果数组的元素可比较，那么数组可以直接用==比较
// 切片不可比较，或只能与nil比较
package main

func printArray(array []int) {
	for _, v := range array {
		print(v, " ")
	}
	println()
}

func main() {
    // 数组初始化
	// 长度为10,默认初始化为0
	var array [10]int
    // 索引与赋值
	array[1] = 3
	// length
	println(len(array))
    printArray(array[:])
    var vec []int // 切片(动态数组)
    for i := 0; i < 5; i++ {
        vec = append(vec, i) // append
    }
    vec = vec[:len(vec)-1]; // removeLast
    var vec2 = []int{5, 6, 9, 9, 10}
    vec = append(vec, vec2...) // 数组加法
    if len(vec) == 0 { // empty
        println("vec is empty")
    }
    // capacity
    println("cap: ", cap(vec))
    // size
    println("len: ", len(vec))
    printArray(vec)
    // clear
    vec = []int{}
    printArray(vec)
}