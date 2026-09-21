class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        stack<int>st;

        for(int i=0;i<n;i++){
            string ch=tokens[i];

            if(ch=="+" || ch=="-" || ch=="/" || ch=="*"){

                int b=st.top();
                st.pop();
                int a=st.top();
                st.pop();

                int result=0;
                
                if(ch=="+"){
                    result=a+b;
                }
                else if(ch=="-"){
                    result=a-b;
                }
                else if(ch=="*"){
                    result=a*b;
                }
                else{
                    result=a/b;
                }
                st.push(result);

            }
            else{
                st.push(stoi(ch));
            }
        }
        return st.top();
    }
};
