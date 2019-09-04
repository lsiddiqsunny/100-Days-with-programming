/*https://www.interviewbit.com/problems/palindrome-integer/*/
int Solution::isPalindrome(int A) {
    
    string ans=to_string(A);
    string rem=ans;
    reverse(rem.begin(),rem.end());
    if(ans==rem){
        return true;
    }
    else return false;
}
