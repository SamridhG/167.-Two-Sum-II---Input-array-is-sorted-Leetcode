class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        vector<int>A;
        map<int,int>B;
        for(int i=0;i<num.size();i++)
        {
         int z=target-num[i];
            auto s=B.find(z);
            if(s==B.end())
            {
                B.insert(make_pair(num[i],i+1));
            }
            else
            {
                A.push_back(s->second);
                A.push_back(i+1);
                return A;
            }
        }
        return A;
    }
};
