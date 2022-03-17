#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    vector<int> vec1(10, 100);
    for (int i = 0; i < vec1.size(); i++) {
        cout << " output1 : " << vec1[i] << endl;
    }
    vector<int> vec2;
    for (decltype(vec2.size()) i = 0; i < 10; i++) {
        vec2.push_back(100);
    }
    for (int i = 0; i < vec2.size(); i++) {
        cout << " output2 : " << vec2[i] << endl;
    }
    int arr[10] = {10,10,10,10,10,10,10,10,10,10};
    vector<int> vec3(arr, arr+10);
    for (int i = 0; i < vec3.size(); i++) {
        cout << " output3 : " << vec3[i] << endl;
    }
    return 0;
}
