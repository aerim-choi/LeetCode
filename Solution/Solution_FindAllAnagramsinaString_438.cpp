class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int slen = s.length();
        int plen = p.length();

        if (slen < plen)return {};

        vector<int> pv(26, 0), sv(26, 0), res;

        for (int k = 0; k < plen; k++) {
            pv[p[k] - 'a']++;
        }

        int i = 0, j = 0;

        while (j < slen) {
            sv[s[j] - 'a']++;

            if ((j - i + 1) < plen) {
                j++;
            }

            else if ((j - i + 1) == plen) {
                if (pv == sv)
                    res.push_back(i);
                
                sv[s[i] - 'a']--;
                i++;
                j++;
            }
        }
        return res;
    }
    
};

int main() {
    Solution s;
    for (int i : s.findAnagrams("cbaebabacd", "abc")) {
        cout << i << " ";
    }
}

//시간초과1
#include <iostream>
#include <vector>
#include <cstring>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        int pnum = 0; //문자열 p의 아스키 코드값의 세제곱합
        int snum = 0; //슬라이싱 된 문자열 s의 아스키 코드값의 세제곱합 
   
        vector<int> ans;
        if (s.length() < p.length())return ans;
        //문자열 p의 아스키 코드값 세제곱의합 구하기
        for (int i = 0; i < p.length(); i++) {
            pnum += pow(((int)(p[i] - 'a')), 3);
        }
        
        for (int i = 0; i <= s.length() - p.length(); i++) {
            for (int j = i; j < i + p.length(); j++) {
                snum += pow(((int)(s[j] - 'a')), 3);                 \
            }

            //아스키 코드값이 같다면
            if (pnum == snum) {
                ans.push_back(i); //인덱스 값 저장
            }
            snum = 0; //문자열 s의 아스키코드값의 세제곱합 초기화
           
        }
        
        return ans;
    }
    
};

int main() {
    Solution s;
    for (int i : s.findAnagrams("cbaebabacd", "abc")) {
        cout << i << " ";
    }
}
//시간초과2
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        string temp;
   
        vector<int> ans;
        if (s.length() < p.length())return ans;
     
        
        for (int i = 0; i <= s.length() - p.length(); i++) {
            for (int j = i; j < i + p.length(); j++) {
                temp += s[j];                \
            }
            sort(p.begin(),p.end());
            sort(temp.begin(), temp.end());
            if (temp == p) {
                ans.push_back(i);
            }
            temp = "";
            
        }
        
        return ans;
    }
    
};
