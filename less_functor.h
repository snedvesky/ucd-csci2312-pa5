//Scott Nedvesky 104976030
//CSC 2312
//PA5
//May 8, 2016
//less_functor.h

#ifndef PROJECT_LESS_FUNCTOR_H
#define PROJECT_LESS_FUNCTOR_H

namespace CS2312 {
    
    template <typename T>
    class less {
        
    public:
        
        less () {}
        bool operator ()(const T &one, const T &two) {
            if (one < two) {
                return true;
            }
        return false;
        }
    };
    
    template <>
    class less<const char*> {
    
    public:
        
        less () {}
        bool operator ()(const char *one, const char *two) {
            
            if (*one < *two) {
                return true;
            }
            return false;
        };
    };
}
#endif //PROJECT_LESS_FUNCTOR_H