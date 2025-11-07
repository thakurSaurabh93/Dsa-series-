class Solution {
public:
    int totalFruit(vector<int>& f) {
        int i=0;
        int j=0;
        int maxlen=0;
        map<int,int>m;
        while(j<f.size()){
            m[f[j]]++;
            if(m.size()>2){
                
                    m[f[i]]--;
                    if(m[f[i]]==0){
                        m.erase(f[i]);
                    }
                    i++;
                

            }

            if(m.size()<=2){
              maxlen=max(maxlen,j-i+1);

            }
            j++;
        }

        return maxlen;
    }
};