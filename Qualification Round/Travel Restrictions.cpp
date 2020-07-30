
#include <bits/stdc++.h>
using namespace std;

#define MAX_N 51

int main() {

	int T;
	cin>>T;
    int tp=T;
	while(T--)
	{
		cout<<"Case #:"<<tp-T<<endl;
		int n,k,flag;
		cin>>n;
		char  in[MAX_N];
		char out [MAX_N];
		char arr[MAX_N][MAX_N];
		for(int i=0;i<n;i++)
        {
                for(int j=0;j<n;j++)
            {
                arr[i][j]='\0';
            }

        }
              cin>>in;
              cin>>out;
        for(int i=0;i<n;i++)
         for(int j=0;j<n;j++)
        {
            if(i==j)
                arr[i][j]='Y';
            else if((i-j==1) || (i-j==-1) || (j-i==1) || (j-i==-1))
               {
                if(out[i]=='Y' and in[j]=='Y')
                    arr[i][j]='Y';
                else
                    arr[i][j]='N';}
            else if(out[i]=='Y' && in[j]=='Y')
                {if(i<j)
                    {k = i+1;
                    flag=0;
                    while(k<j){
                        if(out[k]=='N' or in[k]=='N')
                            {flag=1;
                            break;}
                        k+=1;}
                    if(flag==1)
                        arr[i][j]='N';
                    else
                        arr[i][j]='Y';}
                else{
                    k = j+1;
                    flag=0;
                    while(k<i){
                        if(out[k]=='N' or in[k]=='N')
                            {flag=1;
                            break;}
                        k+=1;}
                    if(flag==1)
                        arr[i][j]='N';
                    else
                        arr[i][j]='Y';}}
            else
                arr[i][j]='N';
         }
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<n;j++)
            {
                cout<<arr[i][j];
            }
            cout<<"\n";
        }

	   }

	return 0;
}// } Driver Code Ends

