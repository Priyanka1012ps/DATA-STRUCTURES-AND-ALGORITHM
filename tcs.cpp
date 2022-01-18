#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--)
    { int dsa,toc,dm,dsa1,toc1,dm1;
        cin>>dsa>>toc>>dm;
        cin>>dsa1>>toc1>>dm1;
        int sum1=dsa+toc+dm;
        int sum2=dsa1+toc1+dm1;
       if (sum1>sum2) cout<<"DRAGON"<<endl; else if(sum2>sum1) cout<<"SLOTH"<<endl;
        else if(sum1==sum2)
        {
            if(dsa1!=dsa && dsa>dsa1 )
            cout<<"DRAGON"<<endl;
            else if(dsa1!=dsa && dsa1>dsa) cout<<"SLOTH"<<endl;
            else if(dsa1==dsa && toc!=toc1 && toc>toc1) cout<<"DRAGON"<<endl;
            else if(toc1>toc) cout<<"SLOTH"<<endl;
        else cout<<"TIE"<<endl;
        }
    }
	// your code goes here
	return 0;
}
