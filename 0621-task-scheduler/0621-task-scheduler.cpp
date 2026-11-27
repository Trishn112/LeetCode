
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>freq(26,0);
        for(char c:tasks){
            freq[c-'A']++;
        }
        priority_queue<int>pq;
        for(int f:freq){
            if(f>0){
                pq.push(f);
            }
        }
        int time=0;
        queue<pair<int,int>>q;
        while(!pq.empty()||!q.empty()){
            time++;
            while(!q.empty()&&q.front().second<=time){
                pq.push(q.front().first);
                q.pop();
            }
            if(!pq.empty()){
                int remain=pq.top();
                pq.pop();
                remain--;
                if(remain>0){
                    q.push({remain,time+n+1});
                }
            }
        }
        return time;
    }
};
