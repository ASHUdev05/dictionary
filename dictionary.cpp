#include <iostream>  
using namespace std; 
class Dictionary
{
public:
    static int const row = 2;
    string test [row][3]=  
    {  
        {"ambigue","abduce","aberrated"},  
        {"An ambiguous statement or expression.","To draw or take away.","Characterized by defects, abnormality, or deviation from the usual, typical, or expected course."} 
    };
};

int calc(string a)
{
    Dictionary dic;
        for(int i=0;i<3;i++)
        {
            if(a==dic.test[0][i])
            {
                return i;
            }
        }
        return -1;
};

int main()  
{  
string inp = "";
Dictionary dic;
    cout<<"Enter word:"<<endl;
    cin>>inp;
    if(calc(inp)<0)
    {
        cout<<"Not found"<<endl;
    }
    else
    {
        cout<<dic.test[1][calc(inp)]<<endl;
    }
    return 0;
};