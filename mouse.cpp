#include <iostream>
#include <vector>
#include <string>
#include<numeric>
class CodeWars{
public:
static int divisors(int n){
    int count{};
    for (int i=1;i<=n;i++){
        if (n%i==0){
            count++;
        }else{

        }
    }
    return count;
}
static std::string odd_or_even(const std::vector<int> &arr){
    return std::accumulate(arr.begin(),arr.end(),0)&1?"odd":"even";
}
static std::vector<int> evenNumbers(std::vector<int>arr,int n){

}
};
int main(){

}