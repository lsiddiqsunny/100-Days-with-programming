/* https://www.interviewbit.com/problems/excel-column-title/ */

string Solution::convertToTitle(int A) {
    
    map<int,char>mp;
    for(int i=0;i<26;i++){
        mp[i+1]='A'+i;
    }
    string ans="";
    while(A>0){
        int x=A%26;
        if(x==0){
            x=26;
            A-=26;
        }
        ans+=mp[x];
        A/=26;
        
    }
    reverse(ans.begin(),ans.end());
    return ans;
    
    
}


