#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int num_students;
    cout << "Enter the number of students: ";
    cin >> num_students;

    vector<string> names(num_students);
    vector<double> grades(num_students);

    // Input student names and grades
    for (int i = 0; i < num_students; ++i) {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> names[i];
        cout << "Enter " << names[i] << "'s grade: ";
        cin >> grades[i];
    }

    // Calculate average grade
    double sum = 0.0;
    for (double grade : grades) {
        sum += grade;
    }
    double average_grade = sum / num_students;

    // Find highest and lowest grades
    double highest_grade = *max_element(grades.begin(), grades.end());
    double lowest_grade = *min_element(grades.begin(), grades.end());

    // Display results
    cout << "\nStudent grades:\n";
    for (int i = 0; i < num_students; ++i) {
        cout << names[i] << ": " << grades[i] << endl;
    }
    cout << "\nAverage grade: " << average_grade << endl;
    cout << "Highest grade: " << highest_grade << endl;
    cout << "Lowest grade: " << lowest_grade << endl;

    return 0;
}