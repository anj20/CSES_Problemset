#include <iostream>
#include <unordered_map>
using namespace std;

// Function to find a pair in an array with a given sum using hashing
void findPair(int nums[], int n, int target)
{
    // create an empty map
    unordered_map<int, int> map;
    // for (int i = 0; i < n; i++)
    // {
    // }

    for (int i = 0; i < n; i++)
    {
        // check if pair (nums[i], target - nums[i]) exists

        // if the difference is seen before, print the pair
        if (map.find(target - nums[i]) != map.end() &&  map[target - nums[i]]+1ll!=map[nums[i]]+1ll)
        {
            if(target-nums[i]==nums[i])
            cout << map[target - nums[i]]+1ll << " "
                 << map[nums[i]]+1l;
            return;
        }
        map[nums[i]] = i;

        // store index of the current element in the map
    }

    // we reach here if the pair is not found
    cout << "IMPOSSIBLE";
}

int main()
{
    int target, n;
    cin >> n;
    cin >> target;
    int nums[n];
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    findPair(nums, n, target);
    return 0;
}