// https://leetcode.cn/problems/flood-fill

impl Solution {
    pub fn flood_fill(image: Vec<Vec<i32>>, sr: i32, sc: i32, color: i32) -> Vec<Vec<i32>> {
        let init_color = image[sr as usize][sc as usize];
        if init_color == color {
            return image;
        }

        fn dfs(image: &mut Vec<Vec<i32>>, x: i32, y: i32, init_color:i32, color: i32) {
            if x < 0 || x >= image.len() as i32 || y < 0 || y >= image[0].len() as i32 {
                return;
            }
            if image[x as usize][y as usize] != init_color {
                return;
            }

            image[x as usize][y as usize] = color;
            
            dfs(image, x, y -1, init_color, color);
            dfs(image, x, y +1, init_color, color);
            dfs(image, x -1, y, init_color, color);
            dfs(image, x +1, y, init_color, color);
        }

        let  mut image = image;
        dfs(&mut image, sr, sc, init_color, color);
        image.to_vec()
    }
}