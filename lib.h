int primecheck(int n,int i)
{
    int count=0;
    if(i==1)
    {
        return 1;
    }
    else
    {
        if(n%i==0)
        {
            count=1;
        }
        else
        {
            return primecheck(n,i-1);
        }
    }
}
