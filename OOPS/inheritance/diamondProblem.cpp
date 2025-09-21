#include <bits/stdc++.h>
using namespace std;

class A {
public:
    void show() {
        cout << "Feature from A" << endl;
    }
};

class B : public A {};
class C : public A {};
class D : public B, public C {};  // D inherits from both B and C

int main() {
    D obj;
    // obj.show(); // ❌ Ambiguous: which 'A' to use? From B or C?
    return 0;
}

//fix is by virtual inheritance in c++ and by using interfaces in JAVA
class A {
public:
    void show() {
        cout << "Feature from A" << endl;
    }
};

class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {};

int main() {
    D obj;
    obj.show(); // ✅ Only one shared copy of A
    return 0;
}
