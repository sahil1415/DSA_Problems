#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int, int> p = {1,3};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int, pair<int, int>> p1 = {1,{2,3}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

    pair<int, int> p2[] = {{1,2},{3,4},{5,6}};
    cout<<p2[0].first<<" "<<p2[0].second<<endl;
 }
void explainVectors(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.emplace_back(5);   // generally emplace_back is faster than push_back
    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;

    vector<int> v1(2,10); //creates  VECTOR OF SIZE 2 CONTAINING ONLY 10
    for(auto it1 : v1){
        cout<<it1<<" ";
    }
    cout<<endl;

    vector<int> v2(5);  //creates a vector of size 5 containing only 0's
    for(auto it2 : v2){
        cout<<it2<<" ";
    }
    cout<<endl;

    vector<int> v3(v1);  // copying vectors
    for(auto it3 : v3){
        cout<<it3<<" ";
    }
    cout<<endl;

    v1.swap(v2); // swapping the contents of v1 to v2 and vice versa

    //inserting pairs in the vectors
    vector<pair<int, int>> v4;
    v4.push_back({1,2});
    v4.push_back({3,4});
    cout<<v4[0].first<<" "<<v4[0].second<<endl;

    // iterators in vectors
    vector<int> :: iterator it = v.begin();
    cout<<*it<<endl;
    it++;

    // using iterators to traverse the vector
    for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    // more simpler way top do
    for(auto it = v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+1);

    for(auto it = v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    v.erase(v.begin()+2, v.end()-1);
     for(auto it = v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    v.insert(v.begin(),300);
    v.insert(v.begin()+2,2,10);

    for(auto it = v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    v.clear();
    cout<<v[0]<<endl;


}


int main(){
    explainPair();
    cout<<"End of the pairs"<<endl;
    explainVectors();
    cout<<"End of the vectors"<<endl;
}