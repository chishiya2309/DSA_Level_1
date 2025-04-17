class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            map<int, int> num_map; // Map to store the number and its index
            vector<int> result;
            for(int i = 0; i < nums.size(); i++)
            {
                int complement = target - nums[i]; //Calculate the complement
                if(num_map.find(complement) != num_map.end()) // Check if the complement exists in the map
                {
                    result.push_back(num_map[complement]); // If it exists, push the index of the complement to the result
                    result.push_back(i); //Push the current index to the result
                    return result; // Return the result as soon as we find the two indices
                }else 
                {
                    num_map[nums[i]] = i; // If it doesn't exist, add the current number and its index to the map
                }
            }
            return result; // Return an empty vector if no solution is found
        }
    };