#include <iostream>

using namespace std;

int main(){
    int num_of_case;
    cin >> num_of_case;
    int n,m;
    for(int i=0; i<num_of_case; i++){
        cin >> n >> m;
        int div[n];
        unsigned long long int res1=1,res2=1;
        int temp;
        for(int j=0; j<n; j++){
            div[j]=(j+1);
        }

        for(int j=0; j<n;j++){
            temp=(m-j);
            for(int k=n-1; k>=0; k--){
                if(div[k]!=1 && temp % div[k]==0){
                    temp=temp/div[k];
                    div[k]=1;
                    break;
                }
            }
            res1*=temp;
        }

        for(int j=0; j<n; j++){
            res2*=div[j];
        }
        cout << res1/res2<<endl;
    }
    return 0;
}