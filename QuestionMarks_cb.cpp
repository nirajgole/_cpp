#include <iostream>
#include <string>
using namespace std;

bool QuestionsMarks(string str)
{

    string str_2;
    int len = str.length();

    int count = 0;
    int sum = 0;
    int pos_1 = 0;
    int pos_2 = 0;
    int sub_len = 0;
    int i = 0, j = 0;
    int k = 0;

    //cout<<len<<endl;
    for (int i = pos_2; i < len ; i++)
    {
        //cout << str[i] << endl;
        if (str[i] >= '0' && str[i] <= '9')
        {
            sum += str[i] - 48;
            //cout << "0 + first integer : " << sum << endl;
            pos_1 = i;
            cout << "Position of first integer : " << pos_1 << endl;
            for (int j = i + 1; j < len; j++)
            {
                if (str[j] >= '0' && str[j] <= '9')
                {
                    sum += str[j] - 48;
                    pos_2 =j;

                    cout<<"position of second integer : "<<j<<endl;
                    //cout << "first integer + second integer : " << sum << endl;
                    sub_len = j - i + 1;
                    cout << "lenth of substring : " << sub_len << endl;
                     str_2 = str.substr(pos_1, sub_len);
                     str=str.substr(pos_2);
                     len=str.length();
                     cout<<str_2<<endl;
                    if (sum == 10 && sub_len > 3)
                    {
                        //sum = 0;
                        for (int i = 0; i < sub_len; i++)
                        {
                            if (str_2[i] == '?')
                                count++;
                        }
                        if (count == 3)
                        {
                            k++;
                            
                            //cout<<str<<endl<<pos_2;
                            cout<<k<<endl;
                            //cout <<"*****************************************************    Pair "<<++k<<" : [ "<< str_2[0] << ","<< str_2[sub_len-1]<<" ]   ***************************************"<<endl;
                           //sub_len = 0;
                        }
                    }
                }
            }
        }
        count=0;
        sum=0;
        sub_len=0;
    }
    if (k != 0)
        return true;
    else
        return false;
}

int main(void)
{
    string arr = "arrb6???4xxbl5???eee5";
    // keep this function call here
    //cout << QuestionsMarks(gets(stdin));
    //cout<<arr[2];
    cout<<"Final Result : "<<QuestionsMarks(arr);
    return 0;
}