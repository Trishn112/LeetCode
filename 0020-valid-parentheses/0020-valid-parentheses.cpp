class Solution {
public:
    bool isValid(string a) {
 stack<char> s;

        for(int i = 0; i < a.size(); i++) {
            char ch = a[i];

            // opening brackets push
            if(ch == '(' || ch == '{' || ch == '[') {
                s.push(ch);
            }
            else {
                if(s.empty()) return false;

                char top = s.top();
                s.pop();

                if((ch == ')' && top != '(') ||
                   (ch == '}' && top != '{') ||
                   (ch == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return s.empty();
    }
};