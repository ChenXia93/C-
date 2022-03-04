**getline()**
- gets the whole line of string 
```c++
#include <iostream>
using namespace std;

int main() {
string str;
cout<<"May i know your names"<<endl;
getline(cin,str);           // gets the whole line

cout<<"Hello "<<str;

return 0;
}

```

