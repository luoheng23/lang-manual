-- Bool
-- haskell语言有内建的Bool类型，包括True和False。
-- haskell语言不存在其他类型到布尔类型的隐式转换。
-- 使用显式的比较语句转换成布尔类型。
main
  | 2 == 2 && true = putStrLn "explicit comparison"
