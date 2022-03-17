#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>

using namespace std;

void func_11_2_1(void);

int main(int argc, char** argv)
{
    /*
    map<string, size_t> word_count;
    string word;
    while (cin >> word) {
        if (word == "q"){
            break;
        }
        ++word_count[word];
    }
    for (const auto &w : word_count)
        cout << w.first << " occurs " << w.second << endl;
    */
    func_11_2_1();
    
    return 0;
}

void func_11(void)
{
    map<string, size_t> word_count;
    set<string> exclude = {"The", "But", "And", "Or", "An", "A", "the", "but", "or", "an", "a"};
    string word;
    while (cin >> word) {
        if (word == "q") {
            if (exclude.find(word) == exclude.end())
                ++word_count[word];
        }
    }
    for (const auto &w : word_count) {
        cout << w.first << " counts " << w.second << endl;
    }
}

void func_11_2_1(void)
{
    map<string, size_t> word_count;
    set<string> exclude = {"the", "but", "and", "or", "an", "a", "The", "But", "And", "Or", "An", "A"};
    map<string, string> authors = {
        {"Joyce", "James"},
        {"Austen", "Jane"},
        {"Dickens", "Charles"}
    };
    word_count["aaa"] = 2;
    word_count["bbb"] = 1;
    word_count.insert({"ccc", 3});
    word_count.insert(make_pair("ddd", 1));
    word_count.insert(pair<string, size_t>("eee", 3));
    word_count.insert(map<string, size_t>::value_type("fff", 5));
    cout << "=====word_count=====" << endl;
    for (const auto &w : word_count) {
        cout << w.first << " counts: " << w.second << endl;
    }
    cout << "=====exclude=====" << endl;
    for (const auto w : exclude) {
        cout << w << endl;
    }
    cout << "=====authors=====" << endl;
    for (const auto &w : authors) {
        cout << w.first << " values: " << w.second << endl;
    }
}


