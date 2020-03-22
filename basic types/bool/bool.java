// Bool
// java语言有内建的boolean类型，包括true和false。
// java语言不存在其他类型到布尔类型的隐式转换。
// 使用显式的比较语句转换成布尔类型。
class bool {
    public static void main(String[] args) {
        int a = 0;
        boolean b = true;
        if (a == 0 && b) {
            System.out.println("explicit comparison");
        }
    }
}