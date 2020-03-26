// 空值
// rust语言没有空值的概念,只有可空类型。
// Some(3) => 存在值，值为3
// None  => 不存在值
static ARRAY: [isize;5] = [1, 2, 3, 4, 5];
static INDEX: [isize;4] = [0, 2, 4, 6];

fn get_element_by_index(ind: isize) -> Option<isize> {
    if ind < 0 || ind as usize >= ARRAY.len() {
        return None;
    }
    return Some(ARRAY[ind as usize]);
}

fn main() {
    let mut sum = 0;
    for &value in INDEX.iter() {
        let cur = get_element_by_index(value);
        if let Some(v) = cur { // 需要显式检查函数返回的值，否则因为类型不同无法编译
            sum += v;
        }
    }
    println!("sum: {}", sum);
}
