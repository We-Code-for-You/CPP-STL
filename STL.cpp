#include "bits/stdc++.h"
using namespace std;



//d   0emo function
void solveaj()
{
    cout<<"solveaj called"<<endl;

}


// pairs in cpp

void explainPair()
{

// Pairs lies in utility library

    pair<int,int> p = {1,3};

    cout<<p.first<<endl;          //accessing first element from single pair
    cout<<p.second<<endl;         //accessing second pair from single pair

    pair <pair<int,string>,pair<int,string>> a = {{1,"ajit"},{2,"akt"}};            // pair of pair
    
    cout<<a.first.first <<" "<<a.second.first<<endl;      // accessing first values from both pair 
    cout<<a.first.second<< " "<< a.second.second<<endl;     // accessing second elements from pair which is also a part of another main pair

    // pair array

    pair<int, int> arr[2] = {{1,11},{2,22}};

    cout<<arr[1].first<< " has value : "<<arr[1].second<<endl;


    

}

void explainvector()
{
    // Vectors are dynamic arrays which allow dynamic size allocation and they have some spacial function to manupilate

    // vector traversing places
    // 1]    v.begin()      2]      v.end()         3]      v.rbegin()      4]      v.rend()

    vector<int> v = {1,3,4,5};                //declaration

    v.push_back(10);
    v.emplace_back(20);                                 // same as push_back() but faster.
    
    cout<<"Using at() : "<<v.at(0)<<endl;                                   // print using at();

    cout<<"Print using back() : "<<v.back()<<endl;                                // Print using back();


    vector<int> ::iterator it1 = v.begin();          // declare itrator for vector 
    it1=it1+3;
    cout<<*(it1)<<endl;

    vector<int> ::iterator it = v.end(); 
    cout<<*(it-1)<<endl; 

    vector<pair<int,int>> vp= {{2,222}};            // Print using itrator it


    vp.push_back({3,33});           // insert into pair vector using pushback
    vp.emplace_back(5,55);          // insert using emplace back

    vector <pair<int,int>> ::iterator itr = vp.begin();             // set strting at vector.begin()

    cout<<vp[0].first<<" has value"<<vp[0].second<<endl;            // print value at 0'th place frist & second

    vector<pair<int,int>> ::iterator itr2 =vp.end();                 // set strating at vector.end();

    cout<<vp[1].first<<" Has value "<<vp[1].second<<endl;           // print value at 1'st place first & second


    // Traversing vector using for loop
    cout<<" Values from vecor v are :  \n Using for loop : ";

    for(auto it=v.begin();it != v.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<" \n Using for each loop : ";

    for(auto itr : v)
    {
        cout<<itr<<" ";
    }
    cout<<endl;

    // deletion in vector

    v.erase(v.begin());

    cout<<" after deleting begin ";
    for(auto it: v)
    { 
        cout<<it<<" ";
    }
    cout<<" \n After deleting range 1-3    :  ";

    v.erase(v.begin(),v.end()-1);
    // cout<<"\n";

    for(auto it : v)
    {
        cout<< it<<" ";
    }
    cout<<" \n";

    // insert into vector v

    v.insert(v.begin()+1,3);

    cout<<"\n After insering 3 at begin+1  :";
     for(auto it : v)
    {
        cout<< it<<" ";
    }
    cout<<" \n";

    vector<int> v2(2,50);

     for(auto it : v2)
    {
        cout<< it<<" ";
    }
    cout<<" \n Copy 1 vec into 2 : ";

    v2.insert(v2.begin(),v.begin(),v.end());

     for(auto it : v2)
    {
        cout<< it<<" ";
    }
    cout<<" \n Some other functions";

    cout<<" Size of v2 : "<<v.size()<<endl;     //size

    v.swap(v2);                                 // swap

    v.clear();                                  //clear
    cout<<"Cleared"<<endl;

     for(auto it : v)
    {
        cout<< it<<"  ";
    }
    cout<<" \n";

    cout<<" \n v1 is";
    if(v.empty())
    {
        cout<<"Empty..."<<endl;
    }
    else
    {
        cout<<"\n Not empty..."<<endl;
    }  

    cout<<" \n v2 is";

    if(v2.empty())
    {
        cout<<"Empty..."<<endl;
    }
    else
    {
        cout<<" Not empty..."<<endl;
    }   
    // End

}

void explainList()
{

        list<int> ls ={1,2,3,4,56,7,8,9,23};

        ls.push_back(334);                  //      insert at back
        ls.emplace_back(322);               //      insert at back
        ls.push_front(34);                  //      insert at front
        ls.emplace_front(34);               //      insert at front

        for(auto it:ls)
        {
            cout<<it<<" ";
        }
        cout<<" \n";
        for(auto i=ls.begin();i!=ls.end();i++)
        {
                cout<<*(i)<<" ";
        }

    

}

void explainDeque()
{
    deque <int> dq;

    dq.push_back(23);
    dq.push_back(55);
    dq.emplace_back(45);
    dq.push_front(44);
    cout<<" Top On : "<<dq[1]<<endl;

    cout<<" Front :"<<dq.front()<<endl;
    cout<<" Back : "<<dq.back()<<endl;

    cout<<dq[2];

    cout<<"\n Present Dqueue : "; 

    for(auto it:dq)
    {
            cout<<it<<" ";
    }
    cout<<endl;

    cout<<" POP Front"<<endl;
    dq.pop_front();

    cout<<" POP Back "<<endl;

    dq.pop_back();



    for(auto it:dq)
    {
        cout<<it<<" ";
    }
    cout<<endl;



}

void explainStack()
{
        stack <int> st;

        st.push(100);
        st.push(200);
        st.emplace(300);

        cout<<" Cuttent top odf Stack is : "<<st.top()<<endl;


        stack <int> st_copy(st);

        while(!st_copy.empty())
        {
                cout<<st_copy.top()<<" ";
                st_copy.pop();
        }
        cout<<endl;

}

void explainQueue()
{
        queue<char> ch;

        ch.push('a');
        ch.emplace('b');
        ch.emplace('6');

        ch.push('e');

        queue<char>ch2(ch);

        while(!ch2.empty())
        {
            cout<<ch2.front();
            ch2.pop();

        }
        cout<<endl;

        cout<<"1-True | 0-False "<<ch2.empty()<<endl;


}

void explainPriorityQ()
{
        priority_queue<string> pq;

        pq.push("aaa");
        pq.push("bbb");
        pq.emplace("ccc");

        cout<<"Crrent top on : "<<pq.top();

        cout<<endl;

        priority_queue<string> copy(pq);

        while(! copy.empty())
        {
            cout<<copy.top()<<" ";
            copy.pop();
        }
        cout<<endl;

    priority_queue<string ,vector<string>,greater<string>> mpq;

    pq.push("ddd");
    mpq.push("aaa");
    mpq.push("bbb");
    mpq.push("ccc");
    mpq.emplace("ddd");

    
    while(!mpq.empty())
    {
        cout<<mpq.top()<<" ";
        mpq.pop();
    }
    cout<<endl;

   
    cout<<"pq.isempty() -"<<pq.empty()<<endl;
    cout<<"mpq.isempty() - "<<mpq.empty()<<endl;

}

void explainSetAndMultiset()
{
    set<int> st={12,33,44,55,66,77,534,353,424,332};

    cout<<" \n Count in set is : "<<st.size()<<endl;

    int cnt=st.count(44);
    cout<<"\n Count(44) : "<<cnt<<endl;


    for(auto it:st)
    {
        cout<<it<<" ";
    }
    cout<<"\n \n Found 55 at : ";

    auto itr=st.find(55);

    st.erase(55);
    for(auto it:st)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    auto it1=st.find(44);
    auto it2=st.find(77);

    st.erase(it1,it2);
    cout<<" \n After Erase from 44-77 : ";

    for(auto it:st)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<"\n \n \n \n Multi Set \n \n \n"<<endl;

    multiset<int> ms;

    ms.insert(3);
    ms.insert(4);
    ms.insert(5);
    ms.emplace(6);
    ms.emplace(5);
    ms.emplace(6);
    ms.insert(7);
    ms.insert(7);


    for(auto it:ms)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    ms.erase(5);
    cout<<" Erase 5 : ";
    for(auto it:ms)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    ms.erase(ms.find(6));

    ms.erase(ms.find(7),ms.find(7));

     cout<<" Erase 7 to 7+1 : ";
    for(auto it:ms)
    {
        cout<<it<<" ";
    }
    cout<<endl;

}
void explainMap()
{
    
    map<int,int> mp;

    mp.emplace(1,100);
    mp.insert({2,200});
    mp.insert({3,300});
    mp.insert({4,400});

    mp.insert({5,500});
    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<" ";
    }

    cout<<" \n \n Current size of map : "<<mp.size()<<endl;

    map <int,int> mp2;

    mp2.emplace(6,600);



    mp2.swap(mp);

    for(auto it:mp2)
    {
        cout<<it.first<<" "<<it.second<<" ";
    }
    cout<<endl;

    mp.erase(5);

    for(auto ti:mp)
    {
        cout<<ti.first<<" "<<ti.second<<" ";
    }
    cout<<endl;

    cout<<"\n Empty() : mp is - "<<mp.empty()<<endl;

    bool a=mp2.empty();

    cout<<"\n Mp2 is empty : "<<a<<endl;

    map<int,map<int,int>> mmp;
    mmp.emplace(23,(33,56));
    mmp.insert({34,{45,76}});
    mmp.insert({100,{20,44}});

    for(auto it:mmp)
    {
           // cout<<it.first<<"  Has values "<<it.second.begin()<<" ";
    }



}
int main()
{
       
//    solveaj();        //call for sample function
//    explainPair();   //call for pairs
    explainvector();      // call for vector
//    explainList();
//    explainDeque();
//    explainStack();    //LIFO
//    explainQueue();
//     explainPriorityQ();          //pq- PriorityQueue & mpq-MinimumPriorityQueue
//   explainSetAndMultiset();
     //   explainMap();
  
    
    return 0;
}