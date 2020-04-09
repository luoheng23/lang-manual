// 数组
// java语言支持长度不变的数组。
// java语言以标准库ArrayList来实现动态数组。
// 如果数组的元素可比较，那么数组可以直接用==比较
import java.util.ArrayList;
import java.util.Comparator;

class Array {
    public static void printArray(int []array) {
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i] + " ");
        }
        System.out.println();
    }
    
    public static void printVector(ArrayList<Integer> vec) {
        for (int i = 0; i < vec.size(); i++) {
            System.out.print(vec.get(i) + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        // 数组初始化
        // 长度为10,默认初始化为0
        int []array = new int[10];
        int []array2 = new int[10];
        if (array == array2) {
            System.out.println("We are equal.");
        }
        // 索引与赋值
        array[1] = 3;
        System.out.println(array.length);
        Array.printArray(array);
        ArrayList<Integer> vec = new ArrayList<>(); // 动态数组
        for (int i = 0; i < 5; i++) {
            vec.add(i); // append
        }
        System.out.println(vec.get(0)); // 索引
        vec.add(2, 100); // insert at index 2, value 100
        System.out.println(vec.indexOf(100)); // index of 100
        if (vec.contains(100)) { // contains
            System.out.println("vec has 100");
        }
        vec.remove(0); // removeFirst
        vec.remove(vec.size()-1); // removeLast
        ArrayList<Integer> vec2 = new ArrayList<Integer>(5);
        vec2.add(3);
        vec2.add(4);
        vec2.add(5);
        vec.addAll(vec2); // 数组加法
        Array.printVector(vec);
        vec.sort(new Comparator<Integer>() { // sort by function
            @Override
            public int compare(Integer a, Integer b) {
                return a - b;
            }
        });
        // empty
        if (vec.isEmpty()) {
            System.out.println("vec is empty");
        }
        // capacity and size
        System.out.println("cap: " + vec.size());
        System.out.println("len: " + vec.size());
        // clear
        vec.clear();
        Array.printVector(vec);
    }
}