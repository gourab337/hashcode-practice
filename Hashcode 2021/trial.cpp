#include<iostream>
#include<stdio.h>
#include <unordered_map>
using namespace std;
 
int main() {
    freopen("Inputs/b.txt", "r", stdin); // Reading from input file
    freopen("Output/b_out.txt", "w", stdout); // Writing to output file
 
    int D,I,S,V,F;
    int B[9104],E[9104],L[9104],P[9104];
    string sn,sn5;
    int i,j,k,sn3[9104],n,cs[9104][9104],n2;
 
    unordered_map<string, int> sn2;
    unordered_map<int, string> sn4;
 
    scanf("%d %d %d %d %d",&D,&I,&S,&V,&F);
 
    n=0;
    for(i=0;i<S;i++) {
        scanf("%d %d",&B[i],&E[i]);        
        cin >> sn;                
        sn2[sn]=sn3[i]=n;
        sn4[n]=sn;
        n++;         
        scanf("%d",&L[i]);
    }
    for(i=0;i<V;i++) {
        scanf("%d\n",&P[i]);
        for(j=0;j<P[i];j++) {            
            cin >> sn;            
            cs[i][j]=sn2[sn];         
        }
    }
 
    printf("%d\n",P[0]-1);
    for(i=0;i<P[0]-1;i++) {       
        for(j=0;j<S;j++) {
            if(cs[0][i]==sn3[j]) {
                printf("%d\n",E[j]);
                printf("1\n");
                cout << sn4[cs[0][i]] << " ";                
                printf("2\n");                              
                break;
            }
        }
    }
 
 
    return 0;
}
 
