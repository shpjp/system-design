
// SINGLE 
#include <bits/stdc++.h>
using namespace std;

class Parent {
public:
    void display() {
        cout << "This is the Parent class." << endl;
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "This is the Child class (Single Inheritance)." << endl;
    }
};

int main() {
    Child obj;
    obj.display();
    obj.show();
    return 0;
}

// MULTILEVEL

#include <bits/stdc++.h>
using namespace std;

class Grandparent {
public:
    void grandFeature() {
        cout << "Feature of Grandparent" << endl;
    }
};

class Parent : public Grandparent {
public:
    void parentFeature() {
        cout << "Feature of Parent" << endl;
    }
};

class Child : public Parent {
public:
    void childFeature() {
        cout << "Feature of Child (Multilevel Inheritance)." << endl;
    }
};

int main() {
    Child obj;
    obj.grandFeature();
    obj.parentFeature();
    obj.childFeature();
    return 0;
}

// HIERARICHAL

#include <bits/stdc++.h>
using namespace std;

class Parent {
public:
    void commonFeature() {
        cout << "Common feature from Parent" << endl;
    }
};

class Child1 : public Parent {
public:
    void feature1() {
        cout << "Feature of Child1" << endl;
    }
};

class Child2 : public Parent {
public:
    void feature2() {
        cout << "Feature of Child2" << endl;
    }
};

int main() {
    Child1 obj1;
    Child2 obj2;

    obj1.commonFeature();
    obj1.feature1();

    obj2.commonFeature();
    obj2.feature2();

    return 0;
}

// MULTIPLE 
#include <bits/stdc++.h>
using namespace std;

class A {
public:
    void featureA() {
        cout << "Feature from A" << endl;
    }
};

class B {
public:
    void featureB() {
        cout << "Feature from B" << endl;
    }
};

// Child inherits from both A and B
class C : public A, public B {
public:
    void featureC() {
        cout << "Feature from C (Multiple Inheritance)." << endl;
    }
};

int main() {
    C obj;
    obj.featureA();
    obj.featureB();
    obj.featureC();
    return 0;
}

// java does not support Multiple Inheritance as it generates a DIAMOND PROBLEM.

// HYBRID : 
#include <bits/stdc++.h>
using namespace std;

class A {
public:
    void featureA() {
        cout << "Feature of A" << endl;
    }
};

class B : public A {
public:
    void featureB() {
        cout << "Feature of B (inherits A)" << endl;
    }
};

class C {
public:
    void featureC() {
        cout << "Feature of C" << endl;
    }
};

class D : public B, public C {
public:
    void featureD() {
        cout << "Feature of D (Hybrid Inheritance)" << endl;
    }
};

int main() {
    D obj;
    obj.featureA();  // From A
    obj.featureB();  // From B
    obj.featureC();  // From C
    obj.featureD();  // From D
    return 0;
}


