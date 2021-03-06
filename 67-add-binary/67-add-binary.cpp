class Solution {
public:
    string addBinary(string a, string b)
    {
        int n1=a.size()-1;
        int n2 =b.size()-1;
        
        int carry=0;
        string result;
        while(n1>=0 || n2>=0)
        {
            int sum=carry;
            if(n1>=0)
            {
            sum += a[n1--]-'0';
                // n1--;
            }
            if(n2>=0)
            {
                sum += b[n2--]-'0';
                // n2--;
            }
             result = result + to_string(sum%2);
            // carry=sum/2;
             carry = sum > 1 ? 1: 0;
        }
           if(carry!=0)
             result=  result+to_string(carry);
        reverse(result.begin(),result.end());
        return result;
    }
    
};
