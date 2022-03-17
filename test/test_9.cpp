#include "test_9.h"
#include <forward_list>

using namespace std;

int main(int argc, char** argv)
{
    list<deque<int>> lq;
    for (size_t i = 0; i < 10; i++) {
        deque<int> dq;
        for (size_t j = 1; j < 100; j++) {
            dq.push_back(j);
        }
        dq.push_front(0);
        lq.push_back(dq);
    }
    for (list<deque<int>>::iterator lit = lq.begin(); lit != lq.end(); ++lit) {
        deque<int> & tmp_dq = *lit;
    }

    // vector
    vector<int> vec1;
    vector<int> vec2(10);
    vector<int> vec3(10, -1);
    vector<int> vec4 = {0,1,2,3,4,5,6,7,8,9};
    vector<int> vec5(vec4);
    vector<int> vec6(vec4.begin(), vec4.end());

    list<int> li = {1,2,3,4,5,6,7,8};
    // vector<double> vec(li.begin(), li.end());
    vector<int> vec7 = vec4;
    vector<double> vec(vec7.begin(), vec7.end());
    for (size_t i = 0; i < vec.size(); i++) {
        cout << " number : " << vec[i] << endl;
    }

    vector<string> svec1(10, "hello kity");
    vector<string> svec2(24, "wwww");
    swap(svec1, svec2);
    for (size_t i = 0; i < svec1.size(); i++) {
        cout << " svec1 : " << svec1[i] << endl;
    }
    for (size_t j = 0; j < svec2.size(); j++) {
        cout << " svec2 : " << svec2[j] << endl;
    }

    // 9.14
    list<char*> li1;
    char a1[] = "hello";
    char a2[] = "world";
    char a3[] = "www";
    char a4[] = "sslslss";
    li1.push_back(a1);
    li1.push_back(a2);
    li1.push_back(a3);
    li1.push_back(a4);
    vector<string> vec8(li1.begin(), li1.end());
    for (size_t i = 0; i < vec8.size(); i++) {
        cout << " vec8 : " << vec8[i] << endl;
    }

    // 9.31
    vector<string> svec;
    list<string> slist;
    slist.insert(slist.begin(), "Hello!");
    svec.insert(svec.begin(), "Hello!");
    svec.insert(svec.end(), 10, "Anna");
    vector<string> v = {"quasi", "simba", "frollo", "scar"};
    slist.insert(slist.begin(), v.end() - 2, v.end());
    slist.insert(slist.end(), {"these", "words", "will", "go", "at", "the", "end"});
    for (auto it = slist.cbegin(); it != slist.cend(); ++it) {
        cout << *it << endl;
    }

    // 9.18
    string str;
    /*
    deque<string> deq;
    while (cin>>str) {
        if (str == "aaaa")
            break;
        deq.push_back(str);
    }
    for (auto it = deq.cbegin(); it != deq.cend(); ++it) {
        cout << *it << endl;
    }
    */

    // 9.19
    list<string> deq;
    while (cin>>str) {
        if (str == "aaaa")
            break;
        deq.push_back(str);
    }
    for (auto it = deq.cbegin(); it != deq.cend(); ++it) {
        cout << *it << endl;
    }

    // 9.20
    list<int> lst = {12,33,21,14,16,34,99,28,10,78,31,45,66};
    deque<int> deq1;
    deque<int> deq2;
    for (auto it = lst.cbegin(); it != lst.cend(); ++it) {
        if (*it % 2 == 0)
            deq2.push_back(*it);
        else
            deq1.push_back(*it);
    }
    cout << "奇数:" << endl;
    for (deque<int>::const_iterator it = deq1.cbegin(); it != deq1.cend(); ++it) {
        cout << *it << endl;
    }
    cout << "偶数:" << endl;
    for (deque<int>::const_iterator it = deq2.cbegin(); it != deq2.cend(); ++it) {
        cout << *it << endl;
    }

    // 9.24
    vector<int> vec9 = {1,2,3,4,5,6,7,8,9};
    cout << "vec[0] : " << vec9.at(0) << endl;
    cout << "vec[1] : " << vec9[1] << endl;
    cout << "vec[0] : " << vec9.front() << endl;
    cout << "vec[0] : " << *(vec9.begin()) << endl;
    
    // 9.33
    list<int> lst1 = {0,1,2,3,4,5,6,7,8,9,10};
    auto it = lst1.begin();
    while (it != lst1.end()) {
        if (*it % 2)
            it = lst1.erase(it);
        else
            ++it;
    }
    /*
    auto it1 = lst1.cbegin();
    while (it1 != lst1.cend()) {
        cout << "number : " << *it1 << endl;
        it1++;
    }
    */

    // 9.25
    /*
    lst1.erase(lst1.begin(), lst1.end());
    auto it1 = lst1.cbegin();
    while (it1 != lst1.cend()) {
        cout << "number : " << *it1 << endl;
        it1++;
    }
    */
    lst1.erase(lst1.end(), lst1.end());
    auto it1 = lst1.cbegin();
    while (it1 != lst1.cend()) {
        cout << "number : " << *it1 << endl;
        it1++;
    }

    // 9.26
    int ia[] = {0,1,2,3,4,5,6,7,8,9,10};
    vector<int> vec10(ia, ia+10);
    for (auto it = vec10.cbegin(); it != vec10.cend(); ++it) {
        cout << "vec10 : " << *it << endl; 
    }
    list<int> lst10(ia, ia+10);
    for (auto it = lst10.cbegin(); it != lst10.cend(); ++it) {
        cout << "lst10 : " << *it << endl;
    }

    // 9.27
    forward_list<int> flst = {0,1,2,3,4,5,6,7,8,9};
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    while (curr != flst.end()) {
        if (*curr % 2)
            curr = flst.erase_after(prev);
        else {
            prev = curr;
            ++curr;
        }
    }
    for (auto it = flst.cbegin(); it != flst.cend(); ++it) {
        cout << "flst : " << *it << endl;
    }

    /*
    // 9.31
    vector<int> vec11 = {1,2,3,4,5,6,7,8,9};
    auto iter = vec11.begin();
    while (iter != vec11.end()) {
        if (*iter % 2) {
            iter = vec11.insert(iter, *iter);
            iter += 2;
        } else {
            iter = vec11.erase(iter);
        }
    }
    print(vec11);

    // 9.31-1
    list<int> vec12 = {1,2,3,4,5,6,7,8,9};
    auto iter1 = vec12.begin();
    while (iter1 != vec12.end()) {
        if (*iter1 % 2) {
            iter1 = vec12.insert(iter1, *iter1);
            forward_n(iter1, 2);
        } else {
            iter1 = vec12.erase(iter1);
        }
    }
    print(vec12);
    */

    // 9.34
    vector<int> vec13 = {1,2,3,4,5,6,7,8,9,10};
    auto iter2 = vec13.begin();
    while (iter2 != vec13.end()) {
        if (*iter2 % 2) {
            iter2 = vec13.insert(iter2, *iter2);
            ++iter2;
        }
        ++iter2;
    }
    print(vec13);

    // 9.39
    vector<string> svec3;
    svec3.reserve(1024);
    for (int i = 0; i < 1048; i++) {
        svec3.push_back("hello");
    }
    svec3.resize(svec3.size()+svec3.size()/2);
    cout << "size : " << svec3.size() << endl;
    cout << "capacity : " << svec3.size() << endl;
    
    // 9.5.1
    const char *cp = "hello world!!!";
    char noNull[] = {'H', 'i'};
    string s1(cp);
    print(s1);
    string s2(noNull, 2);
    print(s2);
    string s3(noNull);
    print(s3);
    string s4(cp+6, 5);
    print(s4);
    string s5(s1, 6, 5);
    print(s5);
    string s6(s1, 6);
    print(s6);
    string s7(s1, 6, 20);
    print(s7);
    //string s8(s1, 16);
    //print(s8);        // out_of_range

    // substr
    string s("hello world");
    string s12 = s.substr(0, 5);
    string s13 = s.substr(6);
    string s14 = s.substr(6, 11);
    //string s15 = s.substr();

    // 9.41
    vector<char> vec14 = {'H', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd'};
    /*
    for (size_t i = 0; i < vec14.size(); i++) {
        tmp_str.push_back(vec14[i]);
    }
    cout << tmp_str << endl;
    */
    string tmp_str(vec14.begin(), vec14.end());
    cout << tmp_str << endl;

    vector<char> vec15(8);
    char tmp_c;
    while (cin >> tmp_c) {
        if (tmp_c == 'q')
            break;
        vec15.push_back(tmp_c);
    }
    string tmp_str1(vec15.begin(), vec15.end());
    cout << " tmp_str1 : " << tmp_str1 << endl;

    const char *cp_char = "Stately, plump Buck";
    string tmp_str2(cp_char, 7);
    tmp_str2.insert(tmp_str2.size(), cp_char+7);
    cout << " tmp_str2 : " << tmp_str2 << endl;

    string tmp_str3 = "some string", tmp_str4 = "some other string";
    tmp_str3.insert(0, tmp_str4);
    tmp_str3.insert(0, tmp_str4, 0, 10);
    cout << "tmp_str3 : " << tmp_str3 << endl;

    string tmp_str5("C++ primer"), tmp_str6 = tmp_str5;
    tmp_str5.insert(tmp_str5.size(), " 4th Ed.");
    tmp_str6.append(" 4th Ed.");
    cout << "str5 : " << tmp_str5 << endl;
    cout << "str6 : " << tmp_str6 << endl;

    // 9.43
    string tmp_str7("C++ Primer 3th End.");
    tmp_str7.erase(11, 4);
    cout << "tmp_str7 : " << tmp_str7 << endl;
    tmp_str7.insert(11, "5th");
    cout << "tmp_str7 : " << tmp_str7 << endl;

    
    return 0;
}
