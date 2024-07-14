#include <iostream>
#include <vector>
#include <algorithm> // For std::adjacent_find and std::search_n

using namespace std;

int main() {
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////// std::adjacent_find: Searches for the first occurrence of consecutive duplicate elements ////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    vector<int> find_Data{1, 2, 3, 4, 5, 6, 6, 7, 8, 9, 10};

    // Use std::adjacent_find to search for the first pair of consecutive duplicate elements
    auto itr = adjacent_find(find_Data.begin(), find_Data.end());

    // Check if a pair of consecutive duplicate elements was found
    if (itr != find_Data.end()) {
        cout << "std::adjacent_find: First pair of consecutive duplicates found: " << *itr << " at index " << distance(find_Data.begin(), itr) << "\n";
    } else {
        cout << "std::adjacent_find: No consecutive duplicate elements found\n";
    }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////// std::search_n: Searches for n consecutive elements matching a specified value //////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    vector<int> find_Data1{1, 2, 3, 4, 5, 6, 6, 7, 8, 9, 10};

    // Use std::search_n to search for two consecutive elements equal to 6
    auto itr1 = search_n(find_Data1.begin(), find_Data1.end(), 2, 6);

    // Check if the sequence was found and print the starting index
    if (itr1 != find_Data1.end()) {
        cout << "std::search_n: Sequence of 2 consecutive 6's found starting at index " << distance(find_Data1.begin(), itr1) << "\n";
    } else {
        cout << "std::search_n: Sequence of 2 consecutive 6's not found in the vector\n";
    }

    return 0;
}
