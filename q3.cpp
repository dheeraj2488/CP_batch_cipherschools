
    #include <bits/stdc++.h>
    using namespace std;
    void addNewElement(  vector<int>&  dynamicArray){
        int el;
        cin>>el;
        dynamicArray.push_back(el);
    }
    int main() {
        vector<int> dynamicArray;
        int num;
        cin>>num;
        for(int i =0 ; i<num ; i++){
            int el;
            cin>>el;
            dynamicArray.push_back(el);
        }

        for(int &el: dynamicArray){
            cout<< el << " ";
        }
        cout<<endl;
        
        addNewElement(dynamicArray);
        cout<<"Updated Array : "<<endl;
        for(int & el : dynamicArray){
            cout<< el << " ";
        }
        cout<<endl;
        return 0;
    }