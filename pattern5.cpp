#include<iostream>
using namespace std;
class Solution{
public:
     void pattern5(int n){
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n-i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
     }
};
int main(){
    Solution obj;
    obj.pattern5(4);
    return 0;
}