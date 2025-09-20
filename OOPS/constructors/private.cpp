#include <bits/stdc++.h>
using namespace std;

class Movie {
private:
    string title;
    int duration;

    // Private constructor
    Movie(string t, int d) {
        title = t;
        duration = d;
        cout << "Private constructor called" << endl;
    }

public:
    // Static method to create object using private constructor
    static Movie createSecretMovie() {
        return Movie("Secret Movie", 999);
    }

    void displayDetails() {
        cout << "Title: " << title << ", Duration: " << duration << " mins" << endl;
    }
};

int main() {
    // Movie m("Hidden", 120); ❌ Not allowed, constructor is private
    Movie secret = Movie::createSecretMovie();  // ✅ Allowed
    secret.displayDetails();
    return 0;
}
