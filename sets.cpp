#define lld long long int

//  declaring a set with type long long int

set<lld> s;

// inserting an element x in the set 

s.insert(x);

// get the size of the set

s.size()

// getting an element from the set

auto it = s.find(x);
if(it==s.end()) cout<<"Element does not exists";
else cout<<"Element exists";
/*
Return Value: The find function returns an iterator which points to the element which is searched in the set container.
If the element is not found, then the iterator points to the position just after the last element in the set.
*/

// deleting  the vlue if it exists

auto it = s.find(n);
if(it!=s.end()) s.erase(it);

