// https://leetcode.cn/problems/flood-fill

func floodFill(image [][]int, sr int, sc int, color int) [][]int {
	initColor := image[sr][sc]
	if initColor == color {
		return image
	}

	dx := []int{0, 0, -1, 1}
	dy := []int{-1, 1, 0, 0}

	var dfs func(x, y int)
	dfs = func(x, y int) {
		if x < 0 || x >= len(image) ||
			y < 0 || y >= len(image[0]) {
			return
		}

		if image[x][y] != initColor {
			return
		}

		image[x][y] = color

		for i := 0; i < 4; i++ {
			dfs(x+dx[i], y+dy[i])
		}
	}

	dfs(sr, sc)
	return image
}