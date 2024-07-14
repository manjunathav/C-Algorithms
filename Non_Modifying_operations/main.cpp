#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////// std::any_of: Checks if any element matches the condition ///////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    vector<int> data{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    // Use std::any_of to check if any element in the vector is equal to 2
    bool returnVal = any_of(data.begin(), data.end(), [](int val) {
        return val == 2;
    });

    // Print the result
    if (returnVal) {
        cout << "std::any_of: At least one value is 2 in the list\n";
    } else {
        cout << "std::any_of: No value is 2 in the list\n";
    }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////// std::all_of: Checks if all elements match the condition ////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    vector<int> allof_Data{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Use std::all_of to check if all elements in the vector are less than 10
    returnVal = all_of(allof_Data.begin(), allof_Data.end(), [](int data) {
        return data < 10;
    });

    // Print the result
    if (returnVal) {
        cout << "std::all_of: All values are less than 10 in the list\n";
    } else {
        cout << "std::all_of: Not all values are less than 10 in the list\n";
    }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////// std::none_of: Checks if no elements match the condition ////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    vector<int> noneofData{11, 12, 13, 14, 15, 16, 17, 18};

    // Use std::none_of to check if no element in the vector is less than 10
    returnVal = none_of(noneofData.begin(), noneofData.end(), [](int data) {
        return data < 10;
    });

    // Print the result
    if (returnVal) {
        cout << "std::none_of: No values are less than 10 in the list\n";
    } else {
        cout << "std::none_of: There are values less than 10 in the list\n";
    }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////// std::count: Counts the number of elements equal to a specific value ///////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    vector<int> count_Data{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int countVal = 10;

    // Use std::count to count the number of elements equal to countVal
    int countResult = count(count_Data.begin(), count_Data.end(), countVal);

    // Print the result
    cout << "std::count: The number " << countVal << " appears " << countResult << " times in the list\n";

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////// std::count_if: Counts the number of elements matching a condition /////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    vector<int> countif_Data{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    // Use std::count_if to count the number of elements less than 10
    countVal = count_if(countif_Data.begin(), countif_Data.end(), [](int data) {
        return data < 10;
    });

    // Print the result
    cout << "std::count_if: The number of elements less than 10 is " << countVal << "\n";

    return 0;
}
