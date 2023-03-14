#include <map>
#include <string>
#include <iostream>

using namespace std;

map<string, string> BuildReversedMap(const map<string, string>& input_map) {
    map<string, string> changeling;

    for(auto& [key, value] : input_map) {
        changeling[value] = key;
    }

    return changeling;
}

int main() {
    map<string, string> test1_input = {{"cat"s, "felis catus"s},
                                       {"dog"s, "canis lupus"s}};
    map<string, string> test1_output = {{"felis catus"s, "cat"s},
                                        {"canis lupus"s, "dog"s}};

    if (BuildReversedMap(test1_input) != test1_output) {
        cout << "BuildReversedMap returned wrong dictionary"s << endl;
    }

    else {
        cout << "Good"s << endl;
    }

}
