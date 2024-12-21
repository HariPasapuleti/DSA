# Longest Common Subsequence
Reference - https://www.youtube.com/watch?v=NPZn9jBrX8U
## Problem Description

The **Longest Common Subsequence** problem is to find the length of the longest subsequence that is common to two strings. A subsequence is derived by deleting some or no characters from a string without changing the order of the remaining characters.

### Example 1:
**Input**:  
`text1 = "abcde"`, `text2 = "ace"`  
**Output**:  
`3`  
**Explanation**: The longest common subsequence is `"ace"` and its length is `3`.

### Example 2:
**Input**:  
`text1 = "abc"`, `text2 = "abc"`  
**Output**:  
`3`  
**Explanation**: The longest common subsequence is `"abc"` and its length is `3`.

### Example 3:
**Input**:  
`text1 = "abc"`, `text2 = "def"`  
**Output**:  
`0`  
**Explanation**: There is no common subsequence, so the result is `0`.

---

## Constraints
- `1 <= text1.length, text2.length <= 1000`
- `text1` and `text2` consist of only lowercase English letters.

---

## Approach: Dynamic Programming

We use a 2D Dynamic Programming (DP) table to store the length of the LCS for substrings of `text1` and `text2`. The recurrence relation is:
- If `text1[i-1] == text2[j-1]`, then:  
  `dp[i][j] = dp[i-1][j-1] + 1`
- Otherwise:  
  `dp[i][j] = max(dp[i-1][j], dp[i][j-1])`

### Algorithm
1. Create a DP table of size `(len(text1)+1) x (len(text2)+1)` initialized to 0.
2. Iterate through both strings to fill the DP table using the recurrence relation.
3. The value at `dp[len(text1)][len(text2)]` gives the length of the longest common subsequence.

---

