// Bool
// go语言有内建的bool类型，包括true和false。
// go语言不存在其他类型到布尔类型的隐式转换。
// 使用显式的比较语句转换成布尔类型。
package main

func main() {
    var b bool = true
    if 2 == 2 && b {
        println("explicit comparison")
    }
}