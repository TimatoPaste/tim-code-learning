#include <iostream>
#include <string>

//quick note: endl is slower than "\n" because it forces an output buffer flush, which is mostly unnecessary and consumes more time

using std::string;
using std::cout;
using std::endl;

int main(){

    //ways to init string, they are all the  same, but first one is most common
    string apple = "blah";
    string banana("blah");
    char orang[] = {'b','l','a','h'};

    //string functions

    cout<<"length: "<<apple.length()<<endl;//returns length

    cout<<"first item: "<<apple.front()<<endl;//returns first item

    cout<<"last item: "<<apple.back()<<endl;//returns last item

    cout<<"index 2: "<<apple[2]<<endl;//returns item at index 2 (3rd item)
    
    apple[2] = 'e';//reassigns value of item at index 2
    cout<<"after reassign: "<<apple<<endl;

    apple.append("apple");//adds string to back
    cout<<"after append string: "<<apple<<endl;

    apple.append(5,'b');//adds character 5 times to back
    cout<<"after append char: "<<apple<<endl;

    apple.push_back('a');//adds character to back (or an item for normal arrays)
    cout<<"after push back: "<<apple<<endl;

    apple.insert(3,"asdfjasfjd");//inserts string/char at index and pushes the rest of the og string back
    cout<<"after insert: "<<apple<<endl;

    apple.erase(1,3);//erases 10 characters starting with index 1
    cout<<"after erase: "<<apple<<endl;

    apple += "yikes";//concatenate
    cout<<"after concatenate: "<<apple<<endl;

    apple = apple + "yoink";//concatenate
    cout<<"after concatenate: "<<apple<<endl;

    apple.pop_back();//removes last character
    cout<<"after pop back: "<<apple<<endl;

    const string jeez = "hello";//unchangeable string variable

    return 0;
}