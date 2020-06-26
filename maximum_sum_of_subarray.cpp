// please declare the variables
// uses O( n ) time complexity


lld maxSumSub(vector<lld>& v , lld l)
{
    lld x = 0;
    lld y =0 ;
    for(i=0;i<l;i++)
    {
        y += v[i];
        if(x<y)
        {
            x=y;

        }
        if(y<0)
            y=0;
    }
    return x;
}
