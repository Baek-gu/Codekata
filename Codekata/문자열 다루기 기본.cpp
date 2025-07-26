#include <string>
#include <vector>
#include <ctype.h>

using namespace std;

bool solution(string s) {
    if (s.length() != 4 && s.length() != 6)
    {
        return false;
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] > '9' || s[i] < '0')
        {
            return false;
        }
    }

    return true;
}


// ==========================

//    #include <string>
//    #include <vector>
//    #include <ctype.h>
//    
//    using namespace std;
//    
//    bool solution(string s) {
//        if (s.length() != 4 && s.length() != 6)
//        {
//            return false;
//        }
//    
//        for (int i = 0; i < s.length(); i++) {
//            if (!isdight(s[i]))
//            {
//                return false;
//            }
//        }
//    
//        return true;
//    }