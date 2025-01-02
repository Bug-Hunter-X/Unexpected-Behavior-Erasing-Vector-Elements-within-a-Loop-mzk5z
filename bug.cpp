std::vector<int> vec = {1, 2, 3, 4, 5};

for (int i = 0; i < vec.size(); ++i) {
  vec.erase(vec.begin() + i);
}

// Expected: vec is empty
// Actual: vec contains {2, 4}