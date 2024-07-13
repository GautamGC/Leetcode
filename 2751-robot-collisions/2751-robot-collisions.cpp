class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        vector<int> idx(positions.size());
        iota(idx.begin(), idx.end(), 0);
        sort(idx.begin(), idx.end(), [&](auto& i1, auto& i2){ return positions[i1] < positions[i2]; });
         
        vector<int> stack;
        for (auto i: idx){
            stack.push_back(i);
            do {
                int sn = stack.size();
                if (sn < 2) break;
                int i1 = stack[sn-2], i2 = stack[sn-1];
                if (!(directions[i1] == 'R' && directions[i2] == 'L')) break;
                if (healths[i1] == healths[i2]){
                    stack.resize(sn-2);
                    healths[i1] = 0;
                    healths[i2] = 0;
                }else if (healths[i1] > healths[i2]){
                    stack.pop_back();
                    healths[i1] -= 1;
                    healths[i2] = 0;
                }else{
                    stack.resize(sn-2); stack.push_back(i2);
                    healths[i2] -= 1;
                    healths[i1] = 0;
                }
            }while(true);
        }
 
        vector<int> ans;
        for (auto h: healths)
            if (h > 0) ans.push_back(h);
 
        return ans;
    }
};