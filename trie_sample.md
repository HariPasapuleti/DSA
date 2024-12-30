## Problem: 1268. Search Suggestions System

You are given an array of strings `products` and a string `searchWord`.  
Design a system that suggests at most three product names from `products` after each character of `searchWord` is typed.  

### Example 1
**Input:**  
`products = ["mobile", "mouse", "moneypot", "monitor", "mousepad"]`  
`searchWord = "mouse"`

**Output:**  
`[["mobile","moneypot","monitor"],["mobile","moneypot","monitor"],["mouse","mousepad"],["mouse","mousepad"],["mouse","mousepad"]]`

---

### Example 2
**Input:**  
`products = ["havana"]`  
`searchWord = "havana"`

**Output:**  
`[["havana"],["havana"],["havana"],["havana"],["havana"],["havana"]]`

---

### Constraints

1. 1 ≤ products.length ≤ 1000
2. 1 ≤ products[i].length ≤ 3000
3. 1 ≤ sum(products[i].length) ≤ 2 * 10^4
4. All strings in products are unique.
5. products[i] consists of lowercase English letters.
6. 1 ≤ searchWord.length ≤ 1000
7. searchWord consists of lowercase English letters.
