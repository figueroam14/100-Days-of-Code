// This is a comment in C++. DUH!

/* 
* This is
* a  multiline 
* comment! 
*/ 



// While statement

#include <iostream>
using namespace std;

int main()
    {
        /*
        int sum = 0, val=1;

        while(val <= 10)    {
            sum += val;
            ++val;
        }

        cout << "Sum of 1 to 10 inclusive is " << val << endl;
        */
       // -------------------------------------------------

        // Ex 1.11 | Write a program that prompts the user 
        //           for two integers. Print each number in
        //           the range specified by the two integers.


        /* int num_1, num_2;

        cout << "Enter number 1 and 2: " << endl;
        cin >> num_1 >> num_2;

        int num;

        while (num_1 <= num_2)
        {

            cout << num_1 << endl;
            ++num_1;
        } */
        

       // -------------------------------------------------

      /*   int sum = 0;
        for (int i =-100; i <=100; ++i)
            {
                sum += i;
                cout << i;
            } */


        /* int sum = 0, value = 0;

        while(cin >> value)
            sum+=value;
            
        cout << "Sum is " << sum << endl; */
            


















    // 1.4 | The If Statement



    int currVal = 0, val =0;

    if(cin >> currVal)  {
        int cnt = 1;
        while(cin >> val)
            if(val == currVal)
                ++cnt;
            else
            {
                cout << currVal << " occurs" << cnt << " times" << endl;
                currVal = val;
                cnt = 1;
            }
        
        cout << currVal << " occurs " << cnt << " times" << endl;
            
    }

    


        return 0;
        exit(0);
    }