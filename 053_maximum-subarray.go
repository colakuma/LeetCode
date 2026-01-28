// https://leetcode.cn/problems/maximum-subarray/

func maxSubArray(nums []int) int {
	currentSum := nums[0]
	maxSum := currentSum
	for i := 1; i < len(nums); i++ {
		currentSum = max(nums[i], currentSum+nums[i])
		maxSum = max(maxSum, currentSum)
	}
	return maxSum
}