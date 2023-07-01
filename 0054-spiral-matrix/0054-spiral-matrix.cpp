class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& v) {
        
        
      vector<int>store;
        int val;
        int top = 0;
    int buttom = v.size() - 1;
    int left = 0;
    int right = v[0].size() - 1;

    int direction = 0;

    while (left<=right && top<=buttom)
    {

        // left->right
        if (direction == 0)
        {

            for (int i = left; i <= right; i++)
            {
               val= v[top][i];
                store.push_back(val);
            }
            top++;
        }

        // top->buttom
        else if (direction == 1)
        {
            for (int i = top; i <= buttom; i++)
            {
                val=v[i][right];
                store.push_back(val);
            }
            right--;
        }

        // right->left
        else if (direction == 2)
        {
            for (int i = right; i >= left; i--)
            {
                val=v[buttom][i];
                store.push_back(val);
            }
            buttom--;
        }

        else
            {
                for (int i = buttom; i >= top; i--)
                {
                    val=v[i][left];
                    store.push_back(val);
                }
                    left++;
            }

            direction=(direction+1)%4;
    }
        
        return store;
        
    }
};