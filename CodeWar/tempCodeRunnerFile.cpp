bool compare(std::string s1, std::string s2)
{
    int sum_s1=0;
    int sum_s2=0;



    for(char c:s1)
    {
        if(c>=48 && c<=57)
        {
            sum_s1=0;
            break;
        }
        sum_s1+=::toupper(c);
    }
    for(char d:s2)
    {
        if(d>=48 && d<=57)
        {
            sum_s2=0;
            break;
        }
        sum_s2+=::toupper(d);
    }

    if(sum_s1==sum_s2)
        return true;
    else
        return false;

}