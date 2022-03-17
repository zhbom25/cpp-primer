#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <class T>
int getArrayLen(T &array)
{
    return sizeof(array) / sizeof(array[0]);
}

void func_23(void);
void func_3_4_2(void);
void func_30(void);
void func_31(void);
void func_32(void);
void func_34(void);
void func_35(void);
bool compare(void);
bool func_40(void);
void func_41(void);
void func_3_6(void);

int main(int argc, char** argv)
{
    //func_23();
    //func_3_4_2();
    //func_30();
    //func_31();
    //func_32();
    //func_34();
    //func_35();
    //bool ret = func_40();
    //cout << " ret : " << ret << endl;
    //func_41();
    func_3_6();
    return 0;
}

void func_23(void)
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    vector<int> vec(a, a+10);
    for (auto iter=vec.begin(); iter != vec.end(); iter++) {
        *iter = *iter * 2;
    }
    for (auto iter=vec.begin(); iter != vec.end(); iter++) {
        cout << *iter << endl;
    }
}

void func_3_4_2(void)
{
    int a[] = {11,12,13,14,15,16,17,18,19,20};
    int len = getArrayLen(a);
    int sought = 12;
    vector<int> vec(a, a+len);
    auto beg = vec.begin(), end = vec.end();
    auto mid = beg + (end-beg)/2;
    while (mid != end && *mid != sought) {
        if (sought < *mid) {
            end = mid;
        } else {
            beg = mid+1;
        }
        mid = beg + (end-beg)/2;
    }
    cout << " the point : " << (mid-beg) << endl;
}

void func_30(void)
{
    constexpr size_t array_size = 10;
    int ia[array_size];
    for (size_t ix = 0; ix < array_size; ix++) {
        ia[ix] = ix;
    }
}

void func_31(void)
{
    constexpr size_t array_size = 10;
    int ia[array_size];
    for (size_t ix = 0; ix < array_size; ix++) {
        ia[ix] = ix;
    }
    for (size_t ix = 0; ix < array_size; ix++) {
        cout << " output : " << ia[ix] << endl;
    }
    int ib[array_size];
    for (size_t ix = 0; ix < array_size; ix++) {
        ib[ix] = ia[ix];
    }
}

void func_32(void)
{
    vector<int> vec;
    constexpr size_t array_size = 10;
    for (size_t ix = 0; ix < array_size; ix++) {
        vec.push_back(ix);
    }
    for (size_t ix = 0; ix < array_size; ix++) {
        cout << " output : " << vec[ix] << endl;
    }
}

void func_34(void)
{
    int ia[] = {0,1,2,3,4,5,6,7,8,9,10};
    int *pbeg = begin(ia);
    int *pend = end(ia);
    while (pbeg != pend) {
        cout << " output : " << *pbeg << endl;
        pbeg++;
    }
}

void func_35(void)
{
    int ia[] = {0,1,2,3,4,5,6,7,8,9};
    int *pbeg = begin(ia), *pend = end(ia);
    while (pbeg != pend) {
        *pbeg = 0;
        pbeg++;
    }
    for (size_t i = 0; i < 10; i++) {
        cout << " output : " << ia[i] << endl;
    }
}

bool compare(void)
{
    int ia[] = {0,1,2,3,4,5,6,7};
    int ib[] = {0,1,2,3,4,5,6,7};
    int *pabeg = begin(ia), *paend = end(ia);
    int *pbbeg = begin(ib), *pbend = end(ib);
    if (paend - pabeg != pbend - pbbeg) {
        return false;
    }
    while (pabeg != paend) {
        if (*pabeg != *pbbeg) {
            return false;
        }
        pabeg++;
        pbbeg++;
    }
    return true;
}

bool func_40(void)
{
    string str1("hello"),str2("world");
    int len1 = str1.length();
    int len2 = str2.length();
    if (len1 != len2) {
        return false;
    }
    for (size_t i = 0; i < len1; i++) {
        if (str1[i] != str2[i]) {
            return false;
        }
    }
    return true;
}

void func_41(void)
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    vector<int> vec(begin(arr), end(arr));
    for (size_t i = 0; i < vec.size(); i++) {
        cout << " output : " << vec[i] << endl;
    }
    int arr1[end(arr)-begin(arr)];
    for (size_t i = 0; i < vec.size(); i++) {
        arr1[i] = vec[i];
    }
}

void func_3_6(void)
{
    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt];
    for (size_t i = 0; i < rowCnt; i++) {
        for (size_t j = 0; j < colCnt; j++) {
            ia[i][j] = i * colCnt + j;
        }
    }
    for (size_t i = 0; i < rowCnt; i++) {
        for (size_t j = 0; j < colCnt; j++) {
            cout << " output : " << ia[i][j] << endl;
        }
    }
    using int_array = int[4];
    for (auto &row : ia) {
        for (auto &col : row) {
            cout << " output : " << col << endl;
        }
    }
    for (auto *p=ia; p != ia+3; p++) {
        for (auto *q = *p; q != *p+4; q++) {
            cout << " output : " << *q << endl;
        }
    }
}

