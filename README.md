# 🔐 Strong Password Checker II - LeetCode Solution

This repository contains my C++ solution for the **Strong Password Checker II** problem from LeetCode.

---

# 📌 Problem Statement

A password is considered **strong** if:

- It has at least **8 characters**
- Contains at least:
  - one lowercase letter
  - one uppercase letter
  - one digit
  - one special character
- Does **not** contain two identical adjacent characters

Return `true` if the password is strong, otherwise return `false`.

---

# 🧠 Example

## Input

```cpp
password = "IloveLe3tcode!"
```

## Output

```cpp
true
```

---

# 🚀 Approach

I used:

- Boolean flags to track:
  - lowercase letters
  - uppercase letters
  - digits
  - special characters
- String traversal for validation
- Adjacent character checking

If all conditions become true and no adjacent characters are same, the password is considered strong.

---

# 💻 C++ Solution

```cpp
class Solution {
public:
    bool strongPasswordCheckerII(string password) {

        bool found1 = false;
        bool found2 = false;
        bool found3 = false;
        bool found4 = false;
        bool found5 = false;

        if(password.size() < 8)
        {
            return false;
        }

        if(password.size() >= 8)
        {
            found1 = true;
        }

        for(int i = 0; i < password.size(); i++)
        {
            if(password[i] >= 'a' && password[i] <= 'z')
            {
                found2 = true;
            }
            else if(password[i] >= 'A' && password[i] <= 'Z')
            {
                found3 = true;
            }
            else if(password[i] >= '0' && password[i] <= '9')
            {
                found4 = true;
            }
            else if(password[i] == '!' || password[i] == '@' ||
                    password[i] == '#' || password[i] == '$' ||
                    password[i] == '%' || password[i] == '^' ||
                    password[i] == '&' || password[i] == '*' ||
                    password[i] == '(' || password[i] == ')' ||
                    password[i] == '-' || password[i] == '+')
            {
                found5 = true;
            }

            if(password[i] == password[i + 1])
            {
                return false;
            }
        }

        return found1 && found2 && found3 && found4 && found5;
    }
};
```

---

# ⚙️ Complexity Analysis

| Complexity | Value |
|------------|-------|
| Time Complexity | O(n) |
| Space Complexity | O(1) |

---

# 📚 Concepts Used

- C++
- Strings
- Boolean Flags
- Character Validation
- Pattern Checking

---

# 🔥 Key Learning

- Password validation logic
- Efficient string traversal
- Adjacent character checking
- Multiple condition handling in a single loop

---

# 📊 Submission Result

✅ 148 / 148 Testcases Passed  
⚡ Runtime: 0 ms  
🏆 Beats 100% Users  
💾 Memory: 8.09 MB

---

# 👨‍💻 Author

## Mohd Wasim

- 💻 LeetCode: `Mohd_Wasim123`
- 🐙 GitHub: `wasim-1432`
- 🔗 LinkedIn:  
  https://www.linkedin.com/in/mohd-wasim-49b719292/

---

# ⭐ Support

If you found this helpful, give this repository a ⭐ on GitHub.

---
