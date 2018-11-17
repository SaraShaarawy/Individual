///name - Sara Mahmoud
///ID -   20170109
#include <iostream>

using namespace std;

void RecursiveSubset(string prefix , string rest)
{
    if (rest == "")
        cout << "{ " << prefix << " }" << endl;
    else
    {
        RecursiveSubset(prefix + rest.substr(0,1), rest.substr(1));
        RecursiveSubset(prefix , rest.substr(1));
    }
}
void ListSubsets(string str)
{
    RecursiveSubset("",str);
}
int main()
{
    string inputWord , inputWord_without_spese;
    cout << "Please enter string to print out all possible subsets : ";
    getline(cin,inputWord);
    for(int i = 0 ;  i < inputWord.length(); i++)
    {
        if (inputWord[i] != ' ')
        {
            inputWord_without_spese+=inputWord[i];
        }
    }
    ListSubsets(inputWord_without_spese);
    return 0;
}
