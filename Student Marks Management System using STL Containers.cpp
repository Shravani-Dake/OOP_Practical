#include <iostream>
#include <map>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>
using namespace std;

void addStudent(map<string, vector<int>>& studentRecords, const string& name, const vector<int>& marks) {
    studentRecords[name] = marks;
}

void displayRecords(const map<string, vector<int>>& studentRecords) {
    for (const auto& record : studentRecords) {
        const string& name = record.first;
        const vector<int>& marks = record.second;
        
        double average = accumulate(marks.begin(), marks.end(), 0.0) / marks.size();
        
        cout << "Student: " << name << ", Marks: ";
        for (int mark : marks) {
            cout << mark << " ";
        }
        cout << ", Average: " << average << endl;
    }
}

void findTopper(const map<string, vector<int>>& studentRecords) {
    string topper;
    double highestAverage = -1.0;

    for (const auto& record : studentRecords) {
        const string& name = record.first;
        const vector<int>& marks = record.second;
        
        double average = accumulate(marks.begin(), marks.end(), 0.0) / marks.size();
        
        if (average > highestAverage) {
            highestAverage = average;
            topper = name;
        }
    }

    cout << "Topper: " << topper << " with average " << highestAverage << endl;
}

int main() 
{
    map<string, vector<int>> studentRecords;
    addStudent(studentRecords, "Alice", {80, 90, 85});
    addStudent(studentRecords, "Bob", {75, 65, 70});
    addStudent(studentRecords, "Charlie", {95, 92, 88});
    displayRecords(studentRecords);
    findTopper(studentRecords);
    return 0;
}

