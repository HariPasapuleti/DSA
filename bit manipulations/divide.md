# Divide Two Integers

## Problem Description
Given two integers `dividend` and `divisor`, perform integer division **without using multiplication, division, or modulus operators**. The result should truncate towards zero (i.e., discard the fractional part).

### Constraints
1. `-2^31 <= dividend, divisor <= 2^31 - 1`
2. `divisor != 0`
3. If the quotient exceeds the range of a 32-bit signed integer:
   - Return `2^31 - 1` if it is greater than `2^31 - 1`.
   - Return `-2^31` if it is less than `-2^31`.

---

## Examples

### Example 1
**Input**:
```text
dividend = 10, divisor = 3
```
