class Solution {
private:
public:
    bool isValid(string s) {
        std::stack<char> _stack;

        std::unordered_map<char, char> my_map {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for(char c: s)
        {
            if(my_map.contains(c))
            {
                if(!_stack.empty() && my_map[c] == _stack.top())
                {
                    _stack.pop();
                } else {
                    return false;
                }
            } else {
                _stack.push(c);
            }
        }

        return _stack.empty();
    }
};
