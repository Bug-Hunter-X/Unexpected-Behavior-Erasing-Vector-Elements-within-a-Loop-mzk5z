std::vector<int> vec = {1, 2, 3, 4, 5};

// Solution 1: Iterate backwards
for (int i = vec.size() - 1; i >= 0; --i) {
  vec.erase(vec.begin() + i);
}

// Solution 2: Use iterator and erase-remove idiom
vec.erase(std::remove_if(vec.begin(), vec.end(), [](int i){ return true; }), vec.end());

// Solution 3: Create a new vector
std::vector<int> vec2;

//or
//std::vector<int> vec2 = {};

//Another example 
vec.clear(); //clears the vector completely

// Expected: vec is empty for all cases