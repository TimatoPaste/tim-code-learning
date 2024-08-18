#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main(){
    //vector: dynamic array
    std::vector<int> apple;//std::vector<type> name
    std::vector<std::string> tickets;

    cout<<tickets.size()<<endl;//returns length
    cout<<tickets.empty()<<endl;//1 if empty, 0 if not;
    tickets.push_back("Norah Jones");//adds string to back of vector
    tickets.push_back("Clairo");
    tickets.push_back("Laufey");
    cout<<tickets[0]<<endl; 
    cout<<tickets[1]<<endl; 
    cout<<tickets[2]<<endl; 
    
    cout<<endl;
    //can also initialize vectors like this:
    std::vector<int> banana = {1,2,3,4,5};
    for(int a : banana){
        cout<<a<<" ";
    }

    cout<<endl<<endl;

    // .begin() and .end() return the iterators corresponding to the front and back of the vector, respectively
    // .front() and .back() return the front and back item of the vector, respectively
    // .insert(index,value) will insert value at the index of the vector, moving original content to the later indices

    banana.insert(banana.begin(),10);//places 10 at 0 index in vector banana; note: insert does not take ints for the place
    banana.insert(banana.end()-1,100);//places 100 one place before the last index in vector banana (so end()-1)
    cout<<"after inserts: "<<endl;
    for(int a : banana){
        cout<<a<<" ";
    }
    cout<<endl<<endl;

    //removes last item in vector
    banana.pop_back();

    cout<<"after pop back: "<<endl;
    for(int a : banana){
        cout<<a<<" ";
    }
    cout<<endl<<endl;

    //removes items from vector starting from first parameter to last one, not including last item in range
    banana.erase(banana.begin(),banana.begin()+3);//removes 3 items from vector banana starting from the first index. Does not include last index typed
    cout<<"after erase: "<<endl;
    for(int a : banana){
        cout<<a<<" ";
    }

    
    return 0;
}