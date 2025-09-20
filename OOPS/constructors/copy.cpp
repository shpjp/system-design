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
    }

    // Copy constructor
    Movie(const Movie &m) {
        title = m.title;
        duration = m.duration;
        cout << "Copy constructor called" << endl;
    }

    void displayDetails() {
        cout << "Title: " << title << ", Duration: " << duration << " mins" << endl;
    }
};

int main() {
    Movie original("The Matrix", 136);
    Movie copyMovie(original);  // Copy constructor is invoked
    copyMovie.displayDetails();
    return 0;
}
