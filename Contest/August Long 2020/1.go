package main

import "fmt"

func main() {
	var test int
	fmt.Scan(&test)
	for i := 0; i < test; i++ {
		var H, P int
		fmt.Scan(&H, &P)
		//fmt.Println(H, P)

		for P != 0 {
			H -= P
			P /= 2
			if H <= 0 {
				break
			}
		}
		if P == 0 && H > 0 {
			fmt.Println(0)
		} else {
			fmt.Println(1)
		}

	}
}
