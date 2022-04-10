class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n)
    {
        vector<string>v;

          int k=1;
        for(int i=0;i<target.size();i++)
        {
           
            while(target[i]!=k)
            {
                 v.push_back("Push");
                  v.push_back("Pop");
                 k++;
                
            }
             v.push_back("Push");
             k++;
        }
        // }
        return v;
    }
};
// class Solution {
// public:
// 	vector<string> buildArray(vector<int>& target, int n) {
// 		int c = 1;
// 		vector<string>ans;
// 		for(int i=0;i<target.size();i++){
// 			while(target[i]!=c){
// 				ans.push_back("Push");
// 				ans.push_back("Pop");
// 				c++;
// 			}
// 			ans.push_back("Push");
// 			c++;
// 		}
// 		return ans;
// 	}
// };