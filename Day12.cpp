class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string temp = "";
        int size = s.length()-1;
        int i = 0;
        int j = size; // last pointer
        // remove white space
        // Skip white spaces at the end of the string
        while (j >= i && s[j] == ' ') {
            j--;
        }

        while(j >= i){
            if(s[j] != ' '){
                temp += s[j];
                j--;
            }
            else{

                if(!temp.empty()){
                    reverse(temp.begin(),temp.end());
                    ans += temp;
                    temp.clear();
                }
                // Append the space
                ans += ' ';
                j--;


                 // Skip consecutive spaces if space is found
                while (j >= i && s[j] == ' ') {
                    j--;
                }
            }
        }
         // Append the last word (if any) without a trailing space
        if (!temp.empty()) {
            reverse(temp.begin(), temp.end());
            ans += temp;
        }
        size = ans.length()-1;
        if(ans[size] == ' '){
            ans.erase(size);
        }
        return ans;
    }
};
