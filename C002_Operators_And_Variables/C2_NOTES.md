
---

# C2. 📚 C Programming – Notes and Concepts

---

## 1. Data Type Notes

- `int` and `long` can be the same size (e.g., 32-bit), depending on **compiler setup** and **configuration**, even on 64-bit systems.
- Use `<limits.h>` to check ranges like `INT_MIN`, `INT_MAX`, `LONG_MIN`, `LONG_MAX`.
- Compilers (GCC, MSVC) may default to 32-bit types unless explicitly configured.

### ✅ Initializing `long` in C

```c
long myLong = 123456789L;  // Use 'L' suffix for clarity
```

### ✅ Type Declaration Validity

| Type            | Valid?  | Description                        |
|-----------------|---------|------------------------------------|
| `long long`     | ✅ Yes  | Usually 64-bit, larger than `long` |
| `double double` | ❌ No   | Invalid type in C                  |
| `long double`   | ✅ Yes  | High-precision floating-point type |

---

#### ✅ Declare Literals

- **Use `LL` or `ll`** for `long long` literals:  
  ```c
  long long a = 1235456789LL;
  ```

- **Use `L`** for `long double` literals:  
  ```c
  long double b = 1234567.89012L;
  ```

#### 📥 Input and 📤 Output Format Specifiers

- **`%lld`** for `long long`:
  ```c
  scanf("%lld", &a);
  printf("Value = %lld\n", a);
  ```

- **`%Lf`** for `long double`:
  ```c
  scanf("%Lf", &b);
  printf("Value = %Lf\n", b);
  ```

--- 

---

## 2. Sequence Control Instructions

Defines **flow of execution** in code:

1. **Sequential Execution** – Runs line-by-line.
2. **Branching** –
   - *Conditional*: `if`, `else`, `switch`, `JZ`, `JNZ`
   - *Unconditional*: `goto`, `JMP`
3. **Looping** – `for`, `while`, `do...while`
4. **Subroutine Calls** – `function()`, `CALL`, `RET`

---

## 3. Assignment Examples

✅ Valid:

```c
z = b * a;
```

❌ Invalid:

```c
b * a = z;  // Can't assign to an expression
```

---

## 4. Computer Math is Different

- ❗ No implicit multiplication:

```c
printf("The value of 4 * 5 is %d\n", 4.5);    // ❌ wrong specifier
printf("The value of 4 * 5 is %d\n", (4)(5)); // ❌ invalid syntax
printf("The value of a * b = %f\n", ab);      // ❌ 'ab' isn't a valid variable
```

---

## 5. Exponentiation

- ⚠️ C **does not** support `^` as power operator (`^` is bitwise XOR)

Use:
```c
#include <math.h>
pow(a, b);  // ✅ Correct way
```

---

## 6. Operator Associativity (Left to Right)

```c
8 * 2 / 3 * 2
= 16 / 3 * 2
= 5 * 2
= 10
```

But with brackets:
```c
(8 * 2) / (3 * 2) = 16 / 6 = 2
```

---

## 7. Primitive vs Non-Primitive Types

| Type Category | Examples                                             |
| ------------- | ---------------------------------------------------- |
| Primitive     | `int`, `char`, `float`, `bool`                       |
| Non-Primitive | `Array`, `Struct`, `Union`, `Pointer`, `Linked List` |

### 🛆 Arrays

- Type: Non-primitive
- Memory: Contiguous
- Size: Fixed during declaration

### 🧵 Linked Lists (Detailed in Data Structures repo)

- Type: Non-primitive
- Memory: Dynamic
- Size: Flexible at runtime

---

## 8. ✨ Character vs Integer

| Input | Type         | Explanation                      |
|-------|--------------|----------------------------------|
| `'2'` | Character ✅ | ASCII value 50                   |
| `21`  | Integer   ❌ | Two-digit number                 |
| `'-'` | Character ✅ | ASCII value 45                   |
| `-2`  | Integer   ❌ | Negative number, not a character |

### ☞ Tips

- Anything in `'single quotes'` → **character**
- Anything outside quotes → **number**

---
