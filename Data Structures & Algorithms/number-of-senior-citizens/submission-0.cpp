class Solution {
public:
    int countSeniors(vector<string>& detais) {
        int count=0;

      for(string s:detais){
        int age=(s[11]-'0')*10+(s[12]-'0');

        //age check>60
        if(age>60){
            count++;
        }
      }

      return count;
    }
};