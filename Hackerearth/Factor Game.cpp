    #include <iostream>
    using namespace std;
     
    int fxx(int x)
    {
    	int i;
    	for(i=2;i<=x;i++)
    	{
    		if(x%i==0)
    		break;
    				
    	}	
    	return x+i;								
    }
     
    int main()
    	{
    		int j,num,t,t1,k;
    		cin>>num;
    		for(k=0;k<num;k++)
    		{
    			cin>>t>>t1;
    			if(t%2==0)
    			t+=2*t1;
    			else
    			{
    				t=fxx(t);
    				t+=2*(t1-1);
    			}
    			
    			cout<<t<<endl;
    		}
     
    	}
