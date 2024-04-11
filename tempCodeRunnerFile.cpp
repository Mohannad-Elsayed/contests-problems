for (int i = 0; i<n; ++i){
        if (indices[nums[i]] > indices[nums[i+1]]){
            ans++; 
            cout << i << ' ' << indices[nums[i]] << ' ' <<  indices[nums[i+1]] << '\n';
        }
    }