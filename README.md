# trapping_rain_water

给定一个数组，计算“水量”。

思路：两个指针分别从数组的头和尾遍历。两个变量，lower保存较小的值，level保存遍历过的较大的lower。水量为level-lower。
     即当lower<level时，其差值即为水量，差值定能存储下来，接下来还需判断。
     从左遍历（一个指针）结果一样。

成为lower才可以成为level。level一步步提高。
