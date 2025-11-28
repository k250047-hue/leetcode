#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>   
using namespace std;

struct Student {
    int age;
    char first_name[51];
    char last_name[51];
    int standard;
};

struct Student createStudent(int age, char *first, char *last, int standard) {
    struct Student s;
    s.age = age;
    strcpy(s.first_name, first);
    strcpy(s.last_name, last);
    s.standard = standard;
    return s;
}

int main() {
    Student st;

    cin >> st.age >> st.first_name >> st.last_name >> st.standard;

    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

    return 0;
}
