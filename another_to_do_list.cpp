#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 1000020;
using namespace std;
int main()
{
    int command,ind,nth;
    char data[60][1000];
    while(1){
            scanf(" %d",&command);
            if(command==1){
                cout<<"Enter your value\n";
                gets(data[nth++]);
                getchar();
            }
            else if(command==2){
                    cout<<"List\n";
                for(ind=0;ind<nth;ind++){
                    printf("%s\n",data[ind]);
                }
            }
            else{
                cout<<"Enter the right command\n";
            }
    }
    return 0;
}
