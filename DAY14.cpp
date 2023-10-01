//557. Reverse Words in a String II

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string temp = "";
        string ans = "";
        int i = 0;
        while(s[i] == ' '){
            i++;
        }

        while( i < n){
            if(s[i] != ' '){
                temp.push_back(s[i]);
                i++;
            }
            else{
                reverse(temp.begin(),temp.end());
                temp += s[i];
                ans += temp;
                temp.clear();
                i++;
            }   
        }
        reverse(temp.begin(),temp.end());
        ans += temp;
        temp.clear();
        return ans;
    }
};
