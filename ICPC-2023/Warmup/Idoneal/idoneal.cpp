#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n && (n!=0)){
        bool found = false;
        for(int a=577; a>0; a--){
            for(int b=sqrt(n); b>=a+1; b--){
                int c = (n-a*b)/(a+b);
                if((n-a*b)%(a+b) == 0){
                    if(c>b){
                        cout << a << " " << b << " " << c << "\n";
                        found = true;
                        break;
                    }
                }
            }
            if (found) break;
        }
        if(!found) cout << "idoneal" << "\n";
    }
    return 0;
}
