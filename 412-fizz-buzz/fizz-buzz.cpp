class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>answer;
        int i=1;
        while(i<=n){
            if(i%3==0 && i%5==0){
                answer.push_back("FizzBuzz");
            }
            else if(i%3==0){
                answer.push_back("Fizz");
            }
            else if(i%5==0){
                answer.push_back("Buzz");
            }
            else{
                answer.push_back(to_string(i));
            }
            i++;
        }
        return answer;
    }
};