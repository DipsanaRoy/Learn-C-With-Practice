<!-- CP2 -->
---

### ✅ Q1: Analyze the Statements

i) `int a; b = a;` → ❌ Invalid: `b` is undeclared.

ii) `int v = 3^3;` → ✅ Valid but misleading: `^` is bitwise XOR, **not exponentiation**.

iii) `char dt = '21 Dec 2020';` → ❌ Invalid: `'` is for single characters, use `"` for strings.

**Answer:** i) and iii) are invalid.

---

### ✅ Q2: Type of Result

In `3.0/8 - 2`,  
- `3.0` makes the division a `double`.  
- `2` is promoted to `double`.  
- Final result is `double`.

If assigned like `float x = 3.0/8 - 2;` → stored as `float`.

---
