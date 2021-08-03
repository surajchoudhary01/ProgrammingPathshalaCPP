#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    int max = INT_MIN;
    int min = INT_MAX;
    if (n>2)
    {
            for(int i=0;i<n;i++)
        {
            int k;
            cin >> k; 
            arr.push_back(k);
            if(k>=max)
            {
                max = k;
            }
            if(k<= min)
            {
                min = k;
            }
        }

        if(min == max)
        {
            cout << 0;
        }
        else
        {
            int gap = (max-min)/(n-1);
            if((max-min)%(n-1)!=0)
            {
                gap ++;
            }

            
 

            int min_arr[n];
            int max_arr[n];
            for(int j=0;j<n;j++)
            {
                min_arr[j] = INT_MAX;
                max_arr[j] = INT_MIN;
            }

            for(int j=0;j<n;j++)
            {
                int bkt = (arr[j]-min)/gap;
                min_arr[bkt] = arr[j] <= min_arr[bkt] ? arr[j] : min_arr[bkt];
                max_arr[bkt] = arr[j] >= max_arr[bkt] ? arr[j] : max_arr[bkt];

            }

            for(int i=0;i<n;i++)
            {

                cout << i << " "<< max_arr[i] << " " << min_arr[i] << endl;
            }

            int prev = INT_MIN;
            int ans = INT_MIN;
            for(int z=0; z<n; z++)
            {
                if(min_arr[z] == INT_MAX )
                {
                    continue;
                }
                else if(prev == INT_MIN)
                {
                    prev = max_arr[z];
                }
                else
                {
                    ans = (min_arr[z]- prev) > ans ? ( min_arr[z]-prev) : ans ;
                    prev = max_arr[z];
                    
                }
            }

            cout << ans;

        }



    }
    else
    {
        cout << 0;
}        



}

