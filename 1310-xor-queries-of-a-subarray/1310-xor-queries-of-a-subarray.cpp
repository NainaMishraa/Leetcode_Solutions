class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();

        vector<int> prefix(n + 1, 0);

        // Build prefix XOR
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] ^ arr[i];
        }

        vector<int> answer;

        // Answer each query
        for (auto &q : queries) {
            int left = q[0];
            int right = q[1];

            answer.push_back(prefix[right + 1] ^ prefix[left]);
        }

        return answer;
    }
};