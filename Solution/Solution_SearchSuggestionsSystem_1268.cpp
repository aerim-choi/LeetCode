//O(N*M*K)/O(N*M)
class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<string> compare; //비교할 문자열을 담을 vector 생성

        sort(products.begin(), products.end()); //products정렬

        vector<vector<string>> suggested(searchWord.length()); //searchWord길이만큼 행생성
        int cnt = 0;

        for (int i = 0;i < searchWord.length();i++) {
            compare.push_back(searchWord.substr(0, i + 1)); //비교할 문자를 삽입
        }

        for (int i = 0;i < searchWord.length();i++) {
            for (int j = 0;j < products.size();j++) {
                if (compare.at(i) == products[j].substr(0, i + 1)) { //비교
                    if (cnt >= 3) { //3개이상 같으면 
                        break; //벡터에 추가하지 않고 종료
                    }
                    else { /
                        suggested[i].push_back(products[j]); //비교한 문자랑 같으면 삽입
                        cnt++;
                    }
                }
            }
            cnt = 0;
        }

        return suggested;
    }
   
};
