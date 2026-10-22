#include <iostream>
using namespace std;

int main()
{
    
    int totalProblems = 10;
    int userProblem = 5;
    
    // interface 
    
    cout << "Hello, welcome to Calculus I Explorer." << endl;
    cout << "From the list below, type the correseponding number of the Calculus topic you would like to explore, or 999 to quit. " << endl;
    
    // problem selection loop, sentinel value 999
    // cin >> userProblem;
    if (userProblem == 999) 
    {
        return 0;
    } 
    else 
    {
        for (int i = 0; i <= totalProblems; i++)
        {
            if (i = userProblem)  
            {
                cout << "The problem you selected is: #" << ", " << endl; //problem.name() << endl;
                // DLL.traversalPrint(i);
            }
            else 
            {
                i++;
                return 0;
                /** cout << cout << "Problem number invalid. Try again. " << endl;
                return 0;
                **/
                
            }
        }
    }
    
    /*  
    traverse through doubly linked list
    list stores class header files for each operation, 
    if calculusOperation[x] selected, function call header file containing composite cmath fcts
    example question representing topic (located in h file) 
    pass variable arguments cin 
    function returns, output formatted response in string
    loop back to problem selection or 999 to quit
    */

}
