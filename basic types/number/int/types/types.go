// Int
// go语言提供各种大小的整型
// int8 -> int8
// uint8 -> uint8
// int16 -> int16
// uint16 -> uint16
// int32 -> int32
// uint32 -> uint32
// int64 -> int64
// uint64 -> uint64
// int -> int
// uint -> uint
package main

func main() {
    var min_long_long int64 = ^((int64(-1))>>1);
    var max_long_long int64 = (int64(-1))>>1;
    var min_int int = ^((int(-1))>>1);
    var max_int int = (int(-1))>>1;
    println("int64: ", "min: ", min_long_long, "max: ", max_long_long)
	println("int64: ", "min: ", min_int, "max: ", max_int)
}