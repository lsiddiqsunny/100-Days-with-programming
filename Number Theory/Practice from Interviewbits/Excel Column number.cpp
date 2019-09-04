/*https://www.interviewbit.com/problems/excel-column-number/ */

int power(int n,int p){
    int ans=1;
    for(int i=1;i<=p;i++){
        ans*=n;
    }
    return ans;
    
}

int Solution::titleToNumber(string A) {
    map<char,int>mp;
    for(int i=0;i<26;i++){
        mp['A'+i]=i+1;
    }
    
    int n=A.size();
    int ans=0;
    reverse(A.begin(),A.end());
    for(int i=0;i<n;i++){
        ans+=(mp[A[i]])*power(26,i);
    }
    return ans;
    
}
