# Sum of Sum of Divisors
<!-- Coding ninja's -->
## Problem Statement
You are given an integer `n`.

The function `sumOfDivisors(n)` is defined as the sum of all divisors of `n`.

Find the sum of `sumOfDivisors(i)` for all `i` from `1` to `n`.

## Example
### Input:
```plaintext
n = 5
```
### Output:
```plaintext
21
```

### Explanation:
We need to find the sum of `sumOfDivisors(i)` for all `i` from `1` to `5`.

- `sumOfDivisors(1) = 1`
- `sumOfDivisors(2) = 2 + 1 = 3`
- `sumOfDivisors(3) = 3 + 1 = 4`
- `sumOfDivisors(4) = 4 + 2 +1 = 7`
- `sumOfDivisors(5) = 5 + 1 = 6`

Therefore, our answer is:
```plaintext
sumOfDivisors(1) + sumOfDivisors(2) + sumOfDivisors(3) + sumOfDivisors(4) + sumOfDivisors(5) = 1 + 3 + 4 + 7 + 6 = 21
```

## Sample Test Cases
### Sample Input 1:
```plaintext
3
```
### Sample Output 1:
```plaintext
8
```

#### Explanation:
- `sumOfDivisors(1) = 1`
- `sumOfDivisors(2) = 2 + 1 = 3`
- `sumOfDivisors(3) = 3 + 1 = 4`

Total sum: `1 + 3 + 4 = 8`

### Sample Input 2:
```plaintext
10
```
### Sample Output 2:
```plaintext
87
```

## Expected Time Complexity:
Try to solve this in `O(sqrt(n))`.

## Constraints:
- `1 <= n <= 3 * 10^4`
- **Time Limit:** `1 sec