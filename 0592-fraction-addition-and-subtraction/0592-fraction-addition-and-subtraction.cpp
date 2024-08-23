class Solution {
public:
    string fractionAddition(string expression) {
        int numo =0;
        int deno =1;
        int i=0;
        int n= expression.size();
        while(i<n)
        {int sign=1;
        if(expression[i]=='+'||expression[i]=='-')
        {if(expression[i]=='-')
        sign=-1;
        i++;}
        int num=0;
        while(i<n && isdigit(expression[i]))
        {num=num*10+(expression[i]-'0');
        i++;}
        num*=sign;
        i++;
        int den=0;
        while(i<n && isdigit(expression[i]))
        {den=den*10+(expression[i]-'0');
        i++;}
        numo=numo*den+num*deno;
        deno*=den;
        int gcdVal=gcd(abs(numo),deno);
        numo/=gcdVal;
        deno/=gcdVal;
        }
        return  to_string(numo)+'/'+to_string(deno);
        
        
    }
};