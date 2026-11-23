# Introduction

In this homework assignment, you will practice working with an associative container (map) and lambda functions in C++. You will use lambda expressions with `count_if` and also create lambdas and call them directly inside your own loops.

# Tasks

The file `gradeBook.h` contains the definition of a class named GradeBook that you need to complete. 
The member functions are relatively straightforward, so you will implement them directly within the class definition. 
Below is a description of the class and its required functionality:

* private member variable:
  * map<string, int> named `scores`: Stores each student's name (key) and score (value).
* public member functions:
  * `addScore`:
    * Has a string parameter `name` and an int-typed parameter `score`.
    * return data type: void
    * Adds the student with the parameters to the map `scores`.
  * `curve`:
    * Has an int-typed parameter `points`.
    * return data type: void
    * Creates a lambda function that takes an int-typed parameter `s` and returns that `s` plus `points`, but never more than 100. Then uses a loop with an iterator to update every student's score with this lambda.
  * `countAbove`:
    * Has an int-typed parameter `threshold`.
    * Returns an int.
    * Uses `count_if` and a lambda function that takes a pair object to count the students whose scores are greater than `threshold`. For the `count_if` built-in function, refer to the lecture slides or https://cplusplus.com/reference/algorithm/count_if/.
  * `average`:
    * No parameters.
    * Returns a double.
    * Creates a lambda function that takes an int-typed `t` and an int-typed `s` and returns their sum. Then uses a loop with an iterator and this lambda to add up all the scores, and returns the average score of all students.
  * `display`:
    * Already implemented.
    * Loops through the map and prints each student's name and score.

# Hints

* The lambda for `curve()` needs to capture `points`. When you loop with an iterator `it`, `it->first` is the name and `it->second` is the score. You can assign to `it->second` to update a score.
* The lambda for `countAbove()` needs to capture `threshold`. Its parameter is a pair<string, int>, which represents one map element (name and score).
* For `average()`, start with a total of 0 and update it in each iteration.
* You may assume the map is not empty when calling average and topStudent.

main.cpp is already provided. Do not modify it.

# Compile and Test

1. Type the following commands on Terminal.

```
g++ -o main *.cpp
```
```
./main
```

2. This homework assignment does not require any input. Here are the expected outputs:

```
== Original ==
  Alice: 85
  Bob: 72
  Carol: 90
  David: 58
  Eve: 67
Average: 74.4
Above 80: 2

== After curve (+10) ==
  Alice: 95
  Bob: 82
  Carol: 100
  David: 68
  Eve: 77
Average: 84.4
Above 80: 3
```

# Submit

Please upload your gradeBook.h file to myCourses > Assignments > HW10. Do not submit *.docx, *.pdf, *.txt, or *.zip file.
   
