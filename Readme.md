# 🐱 meowsay

A simple C++ program that prints your input text alongside a cute ASCII cat!

## 📦 About

This program takes any text you pass as command-line arguments and displays it with an adorable ASCII cat.  
If no arguments are provided, it shows a helpful usage message.

---

## 🧪 How to Run

### 🛠️ Build (using Make)

Make sure you have a C++ compiler like `g++` installed, then run:

```bash
make
```

This will compile the `main.cpp` and generate the `meowsay` executable.

### 🚀 Execute

```bash
./meowsay Hello world!
```

### 📤 Output

```
       Hello world!
 ／l 
（ﾟ､ ｡７
  l  ~ヽ
  じしf_,)ノ
```

---

## ℹ️ Help

If you run the program without any arguments:

```bash
./meowsay
```

You will see:

```
$ ./meowsay <text>
Usage: ./meowsay <text>
Description: This program takes a string as an argument and prints it with a cat ASCII art.
Example: ./meowsay Hello
This will print:
       Hello
 ／l 
（ﾟ､ ｡７
  l  ~ヽ
  じしf_,)ノ
```

---

## 🧵 File Structure

```
.
├── main.cpp       # Source code
├── Makefile       # Build instructions
└── README.md      # This documentation
```

---

## 🐾 Extra Notes

- You can customize the cat ASCII art by editing the `meow()` function in `main.cpp`.
- A great beginner project for learning how to use command-line arguments in C++.

---

## 📜 License

Totally open to use, modify, and share. No restrictions — just have fun! 😺
