#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

struct PersonInfo {
    string name;
    vector<string> phones;
};

void print(const vector<PersonInfo>& people);

void print(const vector<PersonInfo>& people)
{
    for (size_t i = 0; i < people.size(); i++) {
        cout << " name : " << people[i].name << " ; phones : ";
            for (size_t j = 0; j < people[i].phones.size(); j++) {
                cout << people[i].phones[j] << " ";
            }
            cout << endl;
    }
}

int main(int argc, char** argv)
{
    string line, word;
    vector<PersonInfo> people;
    while (getline(cin, line)) {
        if (line.empty()) {
            break;
        }
        PersonInfo info;
        istringstream record(line);
        record >> info.name;
        while (record >> word)
            info.phones.push_back(word);
        people.push_back(info);
    }
    print(people);
}

