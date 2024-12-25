# Geek Jump

Geek wants to climb from the 0th stair to the (n-1)th stair. At a time, the Geek can climb either one or two steps. A `height[N]` array is also given. Whenever the Geek jumps from stair `i` to stair `j`, the energy consumed in the jump is `abs(height[i] - height[j])`, where `abs()` means the absolute difference.  

Return the minimum energy that can be used by the Geek to jump from stair `0` to stair `N-1`.

---

### Example:

**Input:**  
`n = 4, height = {10, 20, 30, 10}`  

**Output:**  
`20`  

**Explanation:**  
- Geek jumps from the 1st to the 2nd stair (`|20 - 10| = 10` energy lost).  
- Then jumps from the 2nd to the last stair (`|10 - 20| = 10` energy lost).  
- Total energy lost is `20`, which is the minimum.

---

### Your Task:
You don't need to read input or print anything. Your task is to complete the function `MinimumEnergy()`, which takes the array `height` and the integer `n`, and returns the minimum energy that is lost.

---

### Expected Complexity:
- **Time Complexity:** O(n)  
- **Space Complexity:** O(n)  

---

### Constraints:
- `1 <= n <= 100,000`  
- `1 <= height[i] <= 1,000`
