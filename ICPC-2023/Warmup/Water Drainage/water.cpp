#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    while(cin>>n && (n!=0)){
        vector<int> Y(n);
        int x;
        for(int i=0;i<n;i++) cin>>x>>Y[i];
            bool found = false;
            for(int i=1;i<n-1;i++){
                if(Y[i]<Y[i-1] && Y[i]<Y[i+1]){
                    cout << "disaster" << "\n";
                    found = true;
                    break;
                }
            }
            if(!found) cout << "safe" << "\n";
    }
    return 0;
}
