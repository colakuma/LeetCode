// https://leetcode.cn/problems/count-common-words-with-one-occurrence

impl Solution {
    pub fn count_words(words1: Vec<String>, words2: Vec<String>) -> i32 {
        let mut map1 = std::collections::HashMap::new();
        let mut map2 = std::collections::HashMap::new();

        for word in words1 {
            let count = map1.entry(word).or_insert(0);
            *count += 1;
        }

        for word in words2 {
            let count = map2.entry(word).or_insert(0);
            *count += 1;
        }

        let mut res = 0;
        for (word, count) in map1 {
            if count == 1 && map2.get(&word) == Some(&1) {
                res += 1;
            }
        }
        res
    }
}