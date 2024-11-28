#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cmath>
#include<vector>
using namespace std;
int	a[9],r1[7],r2[7];


void incorrect()
{
    int x=0;
    for(int i=0;i<9;i++){
        cin >> a[i];
        x+=a[i];
    }
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(x-(a[i]+a[j])==100){
                a[i]=0;
                a[j]=0;
                break;
            }
        }
    }int j=0;
    for(int i=0; i<9; i++){
        if(a[i]!=0){
            r1[j++]=a[i];
        }
    }
    return;
}
bool c[9],flag=0;
void correct(int l)
{
    if(flag)return;
    if(l==7){
        int s=0;
        for(int i=0; i<7; i++){
            s+=a[r2[i]];
        }if(s==100){
            flag=1;
        }return;
    }for(int i=0; i<9; i++){
        if(!c[i]){
            r2[l]=i;
            c[i]=1;
            correct(l+1);
            c[i]=0;
        }
    }
}

int	main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0; i<9; i++){
        a[i]=rand()%99;
        c[i]=0;
    }flag=0;
    correct(0);
    incorrect();
    while (equal(r1,r1+4,r2)){
        main();
    }
    cout << "예제:  = \n";
    for(int i = 0; i < 9; i++)
    {
        cout << a[i] << "\n";
    }
    cout << "\n맞은 답: \n";
    for(int i=0; i<4; i++){
        cout << r1[i] << "\n";
    }
    cout << "\n틀린 답: \n";
    for(int i=0; i<4; i++){
        cout << r2[i] << "\n";
    }
    return 0;
}