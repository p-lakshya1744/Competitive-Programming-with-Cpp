/*

A BEAUTIFUL YEAR

It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.
Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.

Input
The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.

Output
Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the answer exists.

*/

# include <iostream>
# include <string>
# include <set>

using namespace std;

bool isNotDistinct(int year){
    string str = to_string(year);
    set <char> digits(str.begin(), str.end());
    if(digits.size()!=str.size()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int year;
    cin >> year;

    do{
        year++;
    }
    while(isNotDistinct(year));

    cout << year;

    return 0;
}