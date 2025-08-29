/*

Ternary numeric notation is quite popular in Berland. To telegraph the ternary number the Borze alphabet is used. Digit 0 is transmitted as «.», 1 as «-.» and 2 as «--». You are to decode the Borze code, i.e. to find out the ternary number given its representation in Borze alphabet.

Input
The first line contains a number in Borze code. The length of the string is between 1 and 200 characters. It's guaranteed that the given string is a valid Borze code of some ternary number (this number can have leading zeroes).

Output
Output the decoded ternary number. It can have leading zeroes.

*/


# include <iostream>
# include <vector>
# include <string>

using namespace std;

int main(){
    string input;
    cin >> input;

    string ans = "";

    for(int i = 0 ; i<input.length() ; i++){
        if(input[i]=='.'){
            ans += '0';
        }
        else{
            char ch = input[i+1];
            if(ch=='.'){
                ans += '1';
                i++;
            }
            else{
                ans += '2';
                i++;
            }
        }
    }

    cout << ans;

    return 0;
}