class Solution {
public:
    void dfs(string &num, int target, int start,
             long long cur_value, long long last_operand,
             string exp, vector<string> &result) {

        if (start == num.size()) {
            if (cur_value == target) {
                result.push_back(exp);
            }
            return;
        }

        for (int i = start; i < num.size(); i++) {

            // Skip numbers with leading zeros
            if (i > start && num[start] == '0')
                break;

            string cur_num = num.substr(start, i - start + 1);
            long long current_value = stoll(cur_num);

            if (start == 0) {
                // First number
                dfs(num, target, i + 1,
                    current_value,
                    current_value,
                    cur_num,
                    result);
            } else {

                // Addition
                dfs(num, target, i + 1,
                    cur_value + current_value,
                    current_value,
                    exp + "+" + cur_num,
                    result);

                // Subtraction
                dfs(num, target, i + 1,
                    cur_value - current_value,
                    -current_value,
                    exp + "-" + cur_num,
                    result);

                // Multiplication
                dfs(num, target, i + 1,
                    cur_value - last_operand + last_operand * current_value,
                    last_operand * current_value,
                    exp + "*" + cur_num,
                    result);
            }
        }
    }

    vector<string> addOperators(string num, int target) {
        vector<string> result;
        dfs(num, target, 0, 0, 0, "", result);
        return result;
    }
};