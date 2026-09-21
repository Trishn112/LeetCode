class Solution {
public:
    int romanToInt(string s) {
        int val[256] = {0};
        val['I'] = 1;
        val['V'] = 5;
        val['X'] = 10;
        val['L'] = 50;
        val['C'] = 100;
        val['D'] = 500;
        val['M'] = 1000;
        int num=0;
        for(int i=0;i<s.length();i++){
            if(i+1<s.length()&&val[s[i]]<val[s[i+1]]){
                num-=val[s[i]];
            }
            else{
                num+=val[s[i]];
                }
        }return num;
    }
};