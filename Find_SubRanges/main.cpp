#include <iostream>
#include <string>
#include <algorithm>
//#include <ranges> // For std::ranges::starts_with and std::ranges::ends_with

using namespace std;

int main()
{
    string data = "This is a sample string to demonstrate std::search sample";
    string search1 = "sample";

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////// std::search with std::string /////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    auto itr = search(data.begin(), data.end(), search1.begin(), search1.end());
    if(itr != data.end()) {
        cout << "First occurrence of '" << search1 << "' found at index "
             << distance(data.begin(), itr) << ": '" << *itr << "'\n";
    } else {
        cout << "'" << search1 << "' not found in the string\n";
    }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////// std::find_end with std::string /////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    auto itr1 = find_end(data.begin(), data.end(), search1.begin(), search1.end());
    if(itr1 != data.end()) {
        cout << "Last occurrence of '" << search1 << "' found at index "
             << distance(data.begin(), itr1) << ": '" << *itr1 << "'\n";
    } else {
        cout << "'" << search1 << "' not found in the string\n";
    }

//    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//    /////////////////// std::ranges::starts_with with std::string /////////////////////////////////////////////////
//    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
//    string prefix1 = "This";
//    string prefix2 = "sample";

//    // Check if data starts with prefix1
//    if (ranges::starts_with(data, prefix1)) {
//        cout << "The string '" << data << "' starts with '" << prefix1 << "'\n";
//    } else {
//        cout << "The string '" << data << "' does not start with '" << prefix1 << "'\n";
//    }

//    // Check if data starts with prefix2
//    if (ranges::starts_with(data, prefix2)) {
//        cout << "The string '" << data << "' starts with '" << prefix2 << "'\n";
//    } else {
//        cout << "The string '" << data << "' does not start with '" << prefix2 << "'\n";
//    }

//    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//    /////////////////// std::ranges::ends_with with std::string /////////////////////////////////////////////////
//    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
//    string suffix1 = "search sample";
//    string suffix2 = "sample";

//    // Check if data ends with suffix1
//    if (ranges::ends_with(data, suffix1)) {
//        cout << "The string '" << data << "' ends with '" << suffix1 << "'\n";
//    } else {
//        cout << "The string '" << data << "' does not end with '" << suffix1 << "'\n";
//    }

//    // Check if data ends with suffix2
//    if (ranges::ends_with(data, suffix2)) {
//        cout << "The string '" << data << "' ends with '" << suffix2 << "'\n";
//    } else {
//        cout << "The string '" << data << "' does not end with '" << suffix2 << "'\n";
//    }

    return 0;
}
