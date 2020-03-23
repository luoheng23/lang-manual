// Int
// java语言提供各种大小的整型
// java没有无符号数，没有平台相关的整型
// int8 -> byte
// int16 -> short
// int32 -> int
// int64 -> long
class Int {
    public static void main(String[] args) {
        long max_long_long = Long.MAX_VALUE;
        long min_long_long = Long.MIN_VALUE;
        int max_int = Integer.MAX_VALUE;
        int min_int = Integer.MIN_VALUE;
        System.out.println("int64: "+ "min: "+ min_long_long+ "\nmax: "+ max_long_long);
        System.out.println("int: "+ "min: "+ min_int+ "\nmax: "+ max_int);
    

    }
}