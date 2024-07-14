#include <iostream>
#include <vector>
#include <algorithm> // For std::find, std::find_if, std::find_if_not, std::find_first_of

using namespace std;

int main() {
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////// std::find: Searches for a specific value in the container ///////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    vector<int> find_Data{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int findVal = 7;

    // Use std::find to search for the value 7 in the vector
    auto it = find(find_Data.begin(), find_Data.end(), findVal);

    // Check if the value was found and print its index
    if (it != find_Data.end()) {
        cout << "std::find: Value " << findVal << " found at index " << distance(find_Data.begin(), it) << "\n";
    } else {
        cout << "std::find: Value " << findVal << " not found in the vector\n";
    }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////// std::find_if: Searches for the first element that matches a condition //////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    vector<int> findIf_Data{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Use std::find_if to search for the first even number in the vector
    auto itr = find_if(findIf_Data.begin(), findIf_Data.end(), [](int data) {
        return data % 2 == 0;
    });

    // Check if an even number was found and print the value and its index
    if (itr != findIf_Data.end()) {
        cout << "std::find_if: First even number is " << *itr << " at index " << distance(findIf_Data.begin(), itr) << "\n";
    } else {
        cout << "std::find_if: No even number found in the vector\n";
    }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////// std::find_if_not: Searches for the first element that does not match a condition ///////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    vector<int> findIfNot_Data{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Use std::find_if_not to search for the first element that is not equal to 2
    auto itr2 = find_if_not(findIfNot_Data.begin(), findIfNot_Data.end(), [](int data) {
        return data == 2;
    });

    // Check if such an element was found and print the value and its index
    if (itr2 != findIfNot_Data.end()) {
        cout << "std::find_if_not: First value not equal to 2 is " << *itr2 << " at index " << distance(findIfNot_Data.begin(), itr2) << "\n";
    } else {
        cout << "std::find_if_not: All values are equal to 2 in the vector\n";
    }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////// std::find_first_of: Searches for the first occurrence of any element from another range ////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    vector<int> find_first_of1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> find_first_of2{5, 4};

    // Use std::find_first_of to search for the first occurrence of any element from find_first_of2 in find_first_of1
    auto itr3 = find_first_of(find_first_of1.begin(), find_first_of1.end(), find_first_of2.begin(), find_first_of2.end());

    // Check if any such element was found and print the value and its index
    if (itr3 != find_first_of1.end()) {
        cout << "std::find_first_of: First matching element is " << *itr3 << " at index " << distance(find_first_of1.begin(), itr3) << "\n";
    } else {
        cout << "std::find_first_of: No matching element found in the vector\n";
    }

    return 0;
}
