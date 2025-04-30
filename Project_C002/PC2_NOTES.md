
---

# PC2. Tips:

---

## 💡 Tip 1:
```c
char moves[] = {'r', 'p', 's'};
char comp = moves[rand() % 3];
```

You can **skip the array** and do:

```c
char comp = "rps"[rand() % 3];
```

➔ `"rps"` is a **string literal** (`const char[]`), so indexing it works the same.
➔ Think of it as a **temporary string** which is dissolved instantly.
➔ Saves a line and makes it look **even cleaner**!

---

## 💡 Tip 2:

**Avoid recursion** for *continue-or-stop* programs — **use loops instead**!

Why?

| 🚫 Recursion                     | ✅ Loops                          |
|----------------------------------|------------------------------------|
| Eats stack memory 💾             | Constant memory usage 🔁          |
| Risk of crash with long use 💥   | Safe for millions of runs 🛡️      |
| Harder to trace/debug 🧩         | Clear, linear flow 📜             |

➔ Recursion is **overkill** for simple input-based logic.  
➔ Use it only for **tiny programs**, **demos**, or **code golf** fun!

---
