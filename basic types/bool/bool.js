// Bool
// javascript语言有内建的bool类型，包括true和false。
// javascript语言存在其他类型到布尔类型的隐式转换。
// 基本类型的零值或空值都是false。
// number类型的零值；
// pointer类型的null；
// undefined；
// false；
// NaN；
// ""。
const a = 0;
const b = 0.0;
const c = undefined;
const d = NaN;
const e = "";
const f = true;
const g = null;
if (!a && !b && !c && !d && !e && f && !g) {
    console.log("they are false");
}