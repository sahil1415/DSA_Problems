#include <iostream>
#include <map>

int main() {
    // Create a map of integers to strings
    std::map<int, std::string> myMap;

    // Insert some elements into the map
    myMap[1] = "one";
    myMap[2] = "two";
    myMap[3] = "three";

    // Key to find
    int key = 2;

    // Use find to check if the key exists
    auto it = myMap.find(key);

    // Check if the key was found
    if (it != myMap.end()) {
        std::cout << "Key " << key << " found with value: " << it->second << std::endl;
    } else {
        std::cout << "Key " << key << " not found in the map." << std::endl;
    }

    // Trying to find a key that does not exist
    key = 4;
    it = myMap.find(key);

    if (it != myMap.end()) {
        std::cout << "Key " << key << " found with value: " << it->second << std::endl;
    } else {
        std::cout << "Key " << key << " not found in the map." << std::endl;
    }

    return 0;
}
