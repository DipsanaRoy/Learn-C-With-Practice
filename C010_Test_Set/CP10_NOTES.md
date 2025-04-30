
---

# ✍️ Cp 10. Formatted Output in C
Welcome to a mini refresher on two cool I/O functions: `fprintf` & `snprintf`. Think of them as twins with different destinations — one writes to files, the other to strings.

---

## 📁 1. `fprintf()` — *Formatted Writing to a File*
Just like `printf()` writes to your screen, `fprintf()` writes formatted text to a file (or any stream).

### Syntax:
```c
fprintf(FILE *stream, const char *format, ...);
```

- `stream`: Destination (e.g., a file pointer like `fptr`, or `stdout`).
- `format`: Format string (e.g., `"Score: %d\n"`).
- `...`: Values to fill into the format string.

### ✅ Example:
```c
FILE *fptr = fopen("output.txt", "w");
if (fptr) {
    fprintf(fptr, "Hello, %s! You scored %d points.\n", "Dipsana", 98);
    fclose(fptr);
}
```

📄 **Output inside `output.txt`:**
```
Hello, Dipsana! You scored 98 points.
```

> 🔥 Great for: Logging, saving data, creating reports, and more.

---

## 🧵 2. `snprintf()` — *Formatted Writing to a String*
This function is used when you want to create a string in memory — kind of like building a message quietly without showing or saving it immediately.

### Syntax:
```c
int snprintf(char *str, size_t size, const char *format, ...);
```

- `str`: The destination string (your memory buffer).
- `size`: Max size of the buffer (to avoid overflows).
- `format`: Format string.
- `...`: Values to insert.

---

### ✅ Example 1: Store a Message in a String
```c
char buffer[50];
snprintf(buffer, sizeof(buffer), "Hello, %s! You scored %d points.", "Dipsana", 98);
printf("%s\n", buffer);
```

🖥️ **Output:**
```
Hello, Dipsana! You scored 98 points.
```

---

### ✅ Example 2: Create Dynamic Filenames
```c
int n = 5;
char filename[20];
snprintf(filename, sizeof(filename), "emp%d.txt", n); // -> "emp5.txt"

FILE *ptr = fopen(filename, "w");
if (ptr) {
    fprintf(ptr, "This file is for employee number %d.\n", n);
    fclose(ptr);
}
```

📁 This will create a file named `emp5.txt` and write to it.

> 🧡 `snprintf` shines when you need to dynamically generate filenames, log entries, or formatted strings before using them.

---

## 🔁 Quick Comparison Table:

| 🧩 **Feature**        | 📝 **`fprintf`**                           | 🧵 **`snprintf`**                      |
|------------------------|--------------------------------------------|-----------------------------------------|
| **Writes to**          | A file or stream (`FILE *`)                | A character array (`char[]`)            |
| **Goes to screen?**    | Only if `stdout` is used                   | No — unless manually printed            |
| **Where it stores?**   | External destination (file, console, etc.) | Internal — builds a string in memory    |
| **Use-case**           | Logging, reports, saving output            | Building messages, filenames, buffers   |
| **Risk of overflow?**  | Yes (need to control input manually)       | No (size-limited by buffer you provide) |

---

### 💡 Tip: `sprintf()` vs `snprintf()`

- **`sprintf()`** is like `snprintf()` but **doesn't limit the size** — which means it can **overflow** if you're not careful.
  
```c
char msg[50];
sprintf(msg, "Hi %s, score: %d", "Dipsana", 98); // ⚠️ Risky
```

- **`snprintf()`** lets you set a max buffer size — much safer!

```c
snprintf(msg, sizeof(msg), "Hi %s, score: %d", "Dipsana", 98); // ✅ Safe
```

> ✅ **Pro tip:** Always use `snprintf()` unless you *totally* control the output size.

---
