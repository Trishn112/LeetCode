class Solution {
public:
    string smallestPalindrome(string s) {
        string firsthalf="";
        string middle="";
        string secondhalf="";
        vector<int>freq(26,0);
        for(char i:s){
            freq[i-'a']++;
        }
        for(int i=0;i<26;i++){
            firsthalf+=string(freq[i]/2,char(i+'a'));
        } 
        for(int i=0;i<26;i++){
            if(freq[i]%2==1){
                middle=char(i+'a');
                break;
            }
        }
        secondhalf=firsthalf;
        reverse(secondhalf.begin(),secondhalf.end());
        return firsthalf+middle+secondhalf;

    }
};