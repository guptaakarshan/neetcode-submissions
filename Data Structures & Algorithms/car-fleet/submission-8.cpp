class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>array;

        int i=0;
        int j=0;

        while(i<position.size() && j<speed.size()){
            array.push_back({position[i],speed[j]});
            i++;
            j++;
        }

        sort(array.begin(),array.end(),greater<pair<int,int>>());

        stack<double>st;

        for(int i=0;i<array.size();i++){
            int dis=array[i].first;
            int speed=array[i].second;
            double time=(double)(target-dis)/speed;

            if(st.empty() || time>st.top()){
                st.push(time);
            }
            else{
                continue;
            }

            
        }

        int ans=st.size();
        return ans;
    }
};
