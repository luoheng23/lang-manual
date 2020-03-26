import java.util.Optional;
// 空值
// java语言有空值的概念，空值为null。
// java标准库提供了Optional<>类型，是可空类型。

class Null {
    static int[] array = { 1, 2, 3, 4, 5 };
    static int[] index = { 0, 2, 4, 6 };

    public static void main(String[] args) {
        int sum = 0;
        for (int value : Null.index) {
            int[] cur = Null.get_element_by_index(value);
            if (cur != null) { // 需要检查函数返回的变量是否为空，不检查也可以编译，但程序有崩溃的危险
                sum += cur[0];
            }
        }
        System.out.printf("sum: %d\n", sum);
        sum = 0;
        for (int value : Null.index) {
            Optional<Integer> cur = Null.get_element_by_index_option_version(value);
            sum += cur.orElse(0); // 必须调用函数显式将Optional类型转换成Integer类型
        }
        System.out.printf("sum: %d\n", sum);
    }

    public static int[] get_element_by_index(int ind) {
        if (ind < 0 || ind >= Null.array.length) {
            return null;
        }
        int[] res = new int[1];
        res[0] = array[ind];
        return res;
    }

    public static Optional<Integer> get_element_by_index_option_version(int ind) {
        if (ind < 0 || ind >= Null.array.length) {
            return Optional.ofNullable(null);
        }
        return Optional.of(array[ind]);
    }
}