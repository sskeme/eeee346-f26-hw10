#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

class GradeBook {
private:
   // TODO: create a map object that stores key-value pairs consisting of a string and an integer

public:
    void addScore(string name, int score) {
        // TODO
    }

    void curve(int points) {
        // TODO: create a lambda, then loop with an iterator and the lambda
    }

    int countAbove(int threshold) {
        // TODO: use count_if and a lambda that takes a pair object
    }

    double average() {
        int total = 0;             
        // TODO: create a lambda, then loop with an iterator and the lambda
        return static_cast<double>(total) / scores.size();
    }

    void display() {
        for (auto p : scores) {
            cout << "  " << p.first << ": " << p.second << endl;
        }
    }
};
