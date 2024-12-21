# Shortest Common Supersequence
Reference - https://www.youtube.com/watch?v=xElxAuBcvsU

## Problem Description

The **Shortest Common Supersequence** problem is to find the shortest string that contains two given strings `str1` and `str2` as subsequences. If multiple valid strings exist, any one of them can be returned.

### Definitions
- A **subsequence** of a string is obtained by deleting some (possibly zero) characters without rearranging the remaining characters.
- A **supersequence** of two strings is a string that contains both as subsequences.

### Example 1:
**Input**:  
`str1 = "abac"`, `str2 = "cab"`  
**Output**:  
`"cabac"`  
**Explanation**:  
- `"abac"` is a subsequence of `"cabac"` (by deleting the first `"c"`).  
- `"cab"` is a subsequence of `"cabac"` (by deleting the last `"ac"`).  
- `"cabac"` is the shortest such string.

### Example 2:
**Input**:  
`str1 = "aaaaaaaa"`, `str2 = "aaaaaaaa"`  
**Output**:  
`"aaaaaaaa"`  
**Explanation**:  
- Both strings are identical, so the result is the same as the input.

---

## Constraints
- `1 <= str1.length, str2.length <= 1000`
- `str1` and `str2` consist of only lowercase English letters.

---

## Approach

The problem can be solved using **Dynamic Programming** and the **Longest Common Subsequence (LCS)**:
1. **Find the LCS** of `str1` and `str2`. The LCS represents the common subsequence that appears in both strings.
2. **Build the supersequence** by merging the two strings around their LCS, ensuring the shortest possible result.

### Steps:
1. Compute the LCS of `str1` and `str2`.
2. Use the LCS to guide the merging of characters from both strings.
3. For characters not in the LCS, append them directly to the result.

### Algorithm
1. Create a DP table to calculate the LCS.
2. Trace back through the DP table to build the supersequence by combining characters from `str1` and `str2`.

---