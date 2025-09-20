#include <bits/stdc++.h>
using namespace std;

class Movie {
private:
    string title;
    int duration;

public:
    // Parameterized constructor
    Movie(string t, int d) {
        title = t;
        duration = d;
        cout << "Parameterized constructor called" << endl;
    }

    void displayDetails() {
        cout << "Title: " << title << ", Duration: " << duration << " mins" << endl;
    }
};

int main() {
    Movie m2("Inception", 148);  // Parameterized constructor is invoked
    m2.displayDetails();
    return 0;
}
