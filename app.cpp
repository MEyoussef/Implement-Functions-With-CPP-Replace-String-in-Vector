#include <iostream>
#include <vector>
using namespace std;

/**
 * This function replaces a specified number of occurrences of a target string with a new string
 * in a vector of strings.
 *
 * @param strings The vector of strings to modify. This is the vector of strings that will be modified
 *    by this function.
 * @param target The target string to replace. This is the string that will be replaced by the new
 *    string.
 * @param new_value The new string to replace the target string with. This is the string that will
 *    replace the target string.
 * @param count The number of occurrences of the target string to replace. This is the number of
 *    times the target string will be replaced by the new string. The default value is 7, but it can
 *    be any number lower than the vector size.
 *
 * @return The modified vector of strings. This is the vector of strings after it has been modified by
 *    this function.
 *
 * @throws None. This function does not throw any exceptions.
 */
vector<string> replace_string_vector(vector<string> strings, string target, string new_value, int count = 7)
{
    // Check if the count is greater than the size of the vector of strings
    if (count > strings.size())
    {
        // If the count is greater than the size of the vector of strings, print an error message and
        // exit the program
        cout << "Error, Count Number is More than The Vector Size By ( " << count - strings.size() << " )" << endl;
        exit(0);
    }

    // Loop through each string in the vector of strings
    for (int i = 0; i < strings.size(); i++)
    {
        // Check if the count is greater than 0
        if (count > 0)
        {
            // Check if the current string is equal to the target string
            if (target == strings[i])
            {
                // If the current string is equal to the target string, replace it with the new string
                strings[i] = new_value;
                // Decrease the count by 1
                count -= 1;
                // Check if the count has reached 0
                if (count == 0)
                {
                    // If the count has reached 0, print a message and break out of the loop
                    cout << "Your Count = " << count << " You Can not Replace Anything Else Anymore" << endl;
                    cout << "Result : ";
                    break;
                }
            }
        }
        // Check if the count is 0
        else if (count == 0)
        {
            // If the count is 0, print a message and break out of the loop
            cout << "No Strings Will Be Replaced And Default Vector Will Be Returned" << endl;
            break;
        }
    }
    // Return the modified vector of strings
    return strings;
}

int main()
{
    vector<string> result = replace_string_vector({"Na1", "Name2", "Na1", "Name3", "Na1"}, "Na1", "NameComplete");
    for (int j = 0; j < result.size(); j++)
    {
        cout << result[j] << " ";
    }
    return 0;
}