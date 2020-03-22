# Bool
# perl语言有内建的bool类型，它使用1代表true,0代表false。
# perl语言存在其他类型到布尔类型的隐式转换。
# 基本类型的零值或空值都是false。
# number类型的零值；
# pointer类型的null。
# undef
# false
# ""
# "0"
# empty list
use "strict";
$a = 0;
$b = 0.0;
$c = undef;
$d = NaN;
$e = "";
$f = true;
$g = ();
$h = "0";
if (!$a && !$b && !$c && !$e && $f && $g && !$h) {
    print "they are false\n";
}