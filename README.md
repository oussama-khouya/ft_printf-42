# 🖨️ ft_printf

## Description

**ft_printf** is a reimplementation of the standard C library function `printf`. The goal of this project is to understand how formatted output works internally by handling **variadic arguments**, parsing format strings, and managing low-level output in C.

This function mimics the behavior of `printf` for a limited set of conversions, following the **42 project specifications**.

---

## 🧠 What You Learn

* Variadic functions using `stdarg.h`
* Parsing and interpreting format strings
* Managing different data types
* Writing robust and extensible C code
* Handling edge cases and return values

---

## ⚙️ Supported Conversions

```
%c   character
%s   string
%p   pointer address
%d   decimal (signed int)
%i   integer
%u   unsigned int
%x   hexadecimal (lowercase)
%X   hexadecimal (uppercase)
%%   percent sign
```

---

## 🔧 Prototype

```c
int ft_printf(const char *format, ...);
```

---

## 🛠️ Installation

Clone the repository and compile:

```bash
make
```

This will generate:

```
libftprintf.a
```

---

## 🚀 Usage

Include the header file in your project:

```c
#include "ft_printf.h"
```

Example:

```c
ft_printf("Hello %s! Number: %d\n", "world", 42);
```

Compile with:

```bash
gcc main.c libftprintf.a
```

---

## 🧪 Behavior & Details

* Returns the total number of characters printed
* Handles `NULL` strings safely
* Correctly prints pointer addresses
* Manages negative numbers and edge cases

---

## ⚠️ Limitations

* No floating-point support
* Does not handle all flags of the original `printf`
* Behavior matches project requirements, not full libc

---

## 📌 Rules & Constraints

* Written in **C**
* Follows **42 Norm**
* Uses only allowed functions
* No memory leaks
* No global variables

---

## 👤 Author

**Oussama Khouya**
42 Student

---

## ✅ Status

✔️ Project completed and validated

---

> ft_printf teaches you how powerful simple C really is — once you control the output, you control the program 🔥
