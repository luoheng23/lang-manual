// Int
// rust语言提供各种大小的整型
// rust提供128-bit的整型
// int8 -> i8
// uint8 -> u8
// int16 -> i16
// uint16 -> u16
// int32 -> i32
// uint32 -> u32
// int64 -> i64
// uint64 -> u64
// int128 -> i128
// uint128 -> u128
// int -> isize
// uint -> usize

fn main() {
    let max_long_long: i64 = ((!(0 as u64))>>1) as i64;
    let min_long_long: i64 = -max_long_long-1;
    let max_int: isize = ((!(0 as u64))>>1) as isize;
    let min_int: isize = -max_int-1;

    println!("int64: min: {} max: {}", min_long_long, max_long_long);
	println!("int: min: {} max: {}", min_int, max_int);
}