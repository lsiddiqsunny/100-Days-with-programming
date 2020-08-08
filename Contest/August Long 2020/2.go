package main

import (
	"fmt"
)

func getMin(a, b int) int {
	if a < b {
		return a
	}
	return b

}

func main() {
	var test int
	fmt.Scan(&test)
	for i := 0; i < test; i++ {
		var n, k int
		fmt.Scan(&n, &k)
		a := make([]int, n)
		var mini, curMini int
		mini = 1e9 + 1
		curMini = -1
		for j := 0; j < n; j++ {
			fmt.Scan(&a[j])
			if k%a[j] == 0 {
				var now int
				now = (k / a[j]) - 1
				//fmt.Println(now)
				if now <= mini {
					mini = now
					curMini = a[j]
				}
			}
		}

		fmt.Println(curMini)

	}
}
