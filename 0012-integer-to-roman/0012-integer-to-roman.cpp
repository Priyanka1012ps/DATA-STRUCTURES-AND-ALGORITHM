class Solution {
public:
    string intToRoman(int n) {
        string ans="";
        string nos[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int val[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        
        for(int i=0;n>0;i++){
            while(n>=val[i]){
                n -= val[i];
                ans += nos[i];
            }            
        }        
        return ans;
    }
};