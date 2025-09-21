# Polymorphism in C++ – My Notes

Okay so I’m writing this for myself while studying, so the explanation will be **simple and straight**.  
Polymorphism basically means **many forms**. It’s one of the pillars of OOP along with encapsulation, inheritance, and abstraction.  

---

## Types of Polymorphism

There are **two main types** in C++:

1. **Compile-time Polymorphism (Static)**  
2. **Run-time Polymorphism (Dynamic)**  

---

### 1️⃣ Compile-time Polymorphism

- Happens **at compile time**  
- The compiler knows which function to call **before running the program**  
- Examples:
  - **Function Overloading** → same function name, different parameters  
    ```cpp
    class Math {
    public:
        int add(int a, int b) { return a + b; }
        int add(int a, int b, int c) { return a + b + c; }
    };

    int main() {
        Math m;
        cout << m.add(1, 2) << endl;       // calls 2-param version
        cout << m.add(1, 2, 3) << endl;    // calls 3-param version
    }
    ```
  - **Operator Overloading** → same operator, different meaning  
    ```cpp
    class Point {
    public:
        int x, y;
        Point(int a, int b) : x(a), y(b) {}
        Point operator+(const Point &p) {
            return Point(x + p.x, y + p.y);
        }
    };

    int main() {
        Point p1(1, 2), p2(3, 4);
        Point p3 = p1 + p2;
        cout << p3.x << ", " << p3.y << endl;  // 4, 6
    }
    ```

---

### 2️⃣ Run-time Polymorphism

- Happens **at runtime**  
- Compiler doesn’t know which function to call until the program is running  
- Achieved using **Inheritance + Virtual Functions**  

Example:
```cpp
class Animal {
public:
    virtual void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a = new Dog();
    a->speak();  // Dog barks → run-time decides which speak() to call
}
