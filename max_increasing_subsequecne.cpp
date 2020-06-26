// find the longest subsequencs in a vector of size n in O( n * log(n) ) time

void solve()
{
    cin>>n;
    vector<lld> v;
    for(i=0;i<n;i++)
    {
        cin>>l;
        v.pb(l);
    }
    x = 0;
    vector<lld > w,parent(n,-1); 
    w.pb(0);
    
    for(i=1;i<n;i++)
    {
        // if you want the longest array in strict increasing 
        // then remove the equal to sign in the below if conditon 
        if(v[i]>=v[w[x]]) 
        {
            x+=1;
            w.pb(i);
            parent[i] = w[x-1];
        }
        else if(v[i]<v[w[0]])
        {
            w[0] = i;
        }
        else
        {
            l = 0;
            r = x;
            ans = -1;
            while(l<=r)
            {
                mid = l +(r-l)/2;
                if(v[w[mid]] >= v[i])
                {
                    ans = mid;
                    r= mid-1;
                }
                else l=mid+1;
            }
            w[ans] = i;
            parent[i] = w[ans-1];
        }
    }
    // the maximum size is x+1
    cout<<x+1<<"\n";
    vector<lld > w3;
    y = w[x];
    while(y!=-1)
    {
        w3.pb(y);
        y = parent[y]; 
    }
    reverse(all(w3));
    for(i=0;i<=x;i++)
    {
        cout<<v[w3[i]]<<" ";
    }
}
