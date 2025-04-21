### Question 1: 3Sum
Given an integer array `nums`, return all the triplets `[nums[i], nums[j], nums[k]]` such that `i != j`, `i != k`, and `j != k`, and `nums[i] + nums[j] + nums[k] == 0`.

Notice that the solution set must not contain duplicate triplets.

#### Example 1:
Input: `nums = [-1,0,1,2,-1,-4]`  
Output: `[[-1,-1,2],[-1,0,1]]`  
Explanation:  
- `nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0`.  
- `nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0`.  
- `nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0`.  
The distinct triplets are `[-1,-1,2]` and `[-1,0,1]`.  
The order of the output and the triplets does not matter.

#### Example 2:
Input: `nums = [0,1,1]`  
Output: `[]`  
Explanation: The only possible triplet does not sum up to 0.

#### Example 3:
Input: `nums = [0,0,0]`  
Output: `[[0,0,0]]`  
Explanation: The only possible triplet sums up to 0.

---

### Question 2: 3Sum Closest
Given an integer array `nums` of length `n` and an integer `target`, find three integers in `nums` such that the sum is closest to `target`.

Return the sum of the three integers.

You may assume that each input would have exactly one solution.

#### Example 1:
Input: `nums = [-1,2,1,-4], target = 1`  
Output: `2`  
Explanation: The sum that is closest to the target is `2` (`-1 + 2 + 1 = 2`).

#### Example 2:
Input: `nums = [0,0,0], target = 1`  
Output: `0`  
Explanation: The sum that is closest to the target is `0` (`0 + 0 + 0 = 0`).

---

#### Constraints (for both questions):
- `3 <= nums.length <= 500`
- `-1000 <= nums[i] <= 1000`
- `-10^4 <= target <= 10^4`
