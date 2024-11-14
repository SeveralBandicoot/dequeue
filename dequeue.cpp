/*

Dequeue

11/10/24

@AJ Enrique Arguello

Objectives: 
    What is dequeue? When we pop( ) the Queue, where does it remove the data from?

    Create an example with Strings and load 4 names into a Queue and a Stack.

    Run a Display Function( )

    pop each one and display again

    Compare your results

*/

#include <iostream>
#include <deque>
#include <stack>

using namespace std;

void display(deque<string> dequeStrings, stack<string> stackStrings);
int main() {
    deque<string> dequeStrings = {"Abigal", "Bailey", "Sam", "Jason", "Norman"};
    stack<string> stackStrings;

    // push names to stack
    stackStrings.push("Abigal");
    stackStrings.push("Bailey");
    stackStrings.push("Sam");
    stackStrings.push("Jason");
    stackStrings.push("Norman");

    /*dequeStrings.pop_back();
    stackStrings.pop();*/

    display(dequeStrings, stackStrings);

    return 0;
}

void display(deque<string> dequeStrings, stack<string> stackStrings) {
    cout << "Queue Display: " << endl; // display contents of dequeue
    for (int i = 0; i < dequeStrings.size(); i ++) {
        cout << dequeStrings[i] << endl;
    }

    cout << "\n\nStack Display" << endl; // display contents of stack
    while (!stackStrings.empty()) {
        cout << stackStrings.top() << endl;
        stackStrings.pop();
    }
}