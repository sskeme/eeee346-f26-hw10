#include "gradeBook.h"

int main() {
    GradeBook gb;
    gb.addScore("Alice", 85);
    gb.addScore("Bob", 72);
    gb.addScore("Carol", 90);
    gb.addScore("David", 58);
    gb.addScore("Eve", 67);

    cout << "== Original ==" << endl;
    gb.display();
    cout << "Average: " << gb.average() << endl;
    cout << "Above 80: " << gb.countAbove(80) << endl;
    cout << "Top student: " << gb.topStudent() << endl;

    gb.curve(10);

    cout << "\n== After curve (+10) ==" << endl;
    gb.display();
    cout << "Average: " << gb.average() << endl;
    cout << "Above 80: " << gb.countAbove(80) << endl;
    cout << "Top student: " << gb.topStudent() << endl;

    return 0;
}
