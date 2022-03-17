#include <iostream>
#include <vector>
#include <string>

using namespace std;

void func_3_2(void);
void func_3_3(void);
void func_13(void);
void func_14(void);
void func_20(void);

int main(int argc, char** argv)
{
    //func_3_2();
    //func_3_3();
    //func_13();
    //func_14();
    func_20();
}

void func_3_2(void)
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    while (cin >> ch) {
        if (ch == 'q') {
            break;
        }
        switch (ch)
        {
            case 'a':
                ++aCnt;
                break;
            case 'e':
                ++eCnt;
                break;
            case 'i':
                ++iCnt;
                break;
            case 'o':
                ++oCnt;
                break;
            case 'u':
                ++uCnt;
                break;
        }
    }
    cout << "aCnt : " << aCnt << " ; " << "eCnt : " << eCnt << " ; " << "iCnt : " << iCnt << " ; " << "oCnt : " << oCnt << " ; " << "uCnt : " << uCnt << endl;
}

void func_3_3(void)
{
    unsigned char ch;
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;

    while (cin >> ch)
    {
        if (ch == 'q') {
            break;
        }
        switch (ch) {
            case 'a': case 'b': case 'e': case 'c': case 'n': case 'd':
            {
                ++aCnt;
                ++eCnt;
                ++iCnt;
                ++oCnt;
                break;
            }
            case 'u':
                ++uCnt;
                break;
        }
    }
    cout << "aCnt : " << aCnt << " ; " << "eCnt : " << eCnt << " ; " << "iCnt : " << iCnt << " ; " << "oCnt : " << oCnt << " ; " << "uCnt : " << uCnt << endl;
}

void func_13(void)
{
    unsigned evenCnt = 0, oddCnt = 0;
    int ch;
    while (cin >> ch) 
    {
        if (ch == 0) {
            break;
        }
        switch (ch)
        {
            case 1: case 3: case 5: case 7: case 9:
                oddCnt++;
                break;
            case 2: case 4: case 6: case 8: case 10:
                evenCnt++;
                break;
            default:
                break;
        }
    }
    cout << "oddCnt : " << oddCnt << " ; " << "evenCnt : " << evenCnt << endl;
}

void func_14(void)
{
    string tmp_str("");
    string pre_str("");
    int max_cnt = 0;
    int cur_cnt = 0;
    while (cin>>tmp_str) {
        if (tmp_str == "end") {
            break;
        }
        if(pre_str.empty()) {
            pre_str = tmp_str;
            max_cnt = 1;
            cur_cnt = 1;
        } else if (tmp_str == pre_str) {
            cur_cnt++;
            max_cnt = (cur_cnt > max_cnt) ? cur_cnt : max_cnt;
        } else {
            pre_str = tmp_str;
            cur_cnt = 1;
        }
    }
    cout << " maxCnt : " << max_cnt << endl;
}

void func_20(void)
{
    string input_str("");
    string tmp_str("");
    while (cin >> input_str) 
    {
        if (tmp_str.empty() || tmp_str != input_str) {
            tmp_str = input_str;
        } else if (tmp_str == input_str) {
            cout << " output str : " << input_str << endl;
        }
    }
}
