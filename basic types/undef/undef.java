// Undef
// java语言没有undef,默认初始化所有变量
class Undef {
    public static void main(String[] args) {
        int p;  // 不允许编译
        p = 3;  // 必须初始化
        System.out.println(p);
    }
}