#include <vector>
#include <string>
#include <iostream>

using namespace std;

void elimDups(vector<string> &words);
void biggies(vector<string> &words, vector<string>::size_type sz);

int main(int argc, char** argv)
{
    vector<string> vec = {"hello", "world", "zzz", "xxx", "yyy", "lll", "ddjjd", "zzz", "world", "mmxmx", "nnnn", "eeee"};
    biggies(vec, 3);
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);
    stable_sort(words.begin(), words.end(),[](const string &a, const string &b) {return a.size() < b.size();});
    auto wc = find_if(words.begin(), words.end(), [sz](const string &a) {return a.size() >= sz;});
    auto count = words.end() - wc;
    cout << count << " of length " << sz << " or longer" << endl;
    for_each(wc, words.end(), [](const string &s){cout << s << " ";});
    cout << endl;
}

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}


