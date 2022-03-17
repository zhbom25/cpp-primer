#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    vector<int> vec;
    int i;
    while (cin >> i) {
        vec.push_back(i);
    }
    /*
    int pre = vec[0];
    for (int i = 1; i < vec.size(); i++) {
        cout << " sum is : " << pre + vec[i] << endl;
        pre = vec[i];
    }
    */
    int vec_len = vec.size();
    vector<int> sum_arr;
    
    if (vec_len % 2 == 0) {
        for (int i = 0; i < vec_len/2; i++) {
            int sum = vec[i] + vec[vec_len-i-1];
            sum_arr.push_back(sum);
        }
    } else {
        for (int i = 0; i < vec_len/2; i++) {
            int sum = vec[i] + vec[vec_len-i-1];
            sum_arr.push_back(sum);
            cout << " data : " << i << endl;
        }
        sum_arr.push_back(vec[vec_len/2]);
        cout << " data : " << vec_len/2 << endl;
    }

    for (int i = 0; i < sum_arr.size(); i++) {
        cout << " sum is : " << sum_arr[i] << endl;
    }

    return 0;
}
