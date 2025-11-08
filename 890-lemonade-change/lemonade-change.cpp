class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills[0]!=5){
             return false;
        }
        int amnt=5*bills.size();
        int fifth=0;
        int tenth=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                fifth++;
            }
            else if(bills[i]==10){
                if(fifth)
                 {fifth--;
                 tenth++;}
                 else{
                    return false;
                 }
            }
            else{
               
               if(tenth&&fifth){
                 tenth--;
                 fifth--;
               }
               else if(fifth>=3){
                fifth=fifth-3;
               }
               else{
                return false;
               }
            }
        }
         return true;
    }
};