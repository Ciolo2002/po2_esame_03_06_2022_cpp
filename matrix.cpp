#include <vector>
using namespace std;
template <class T>
class matrix{
private:
    vector<T> m;
    int r,c;
public:
    matrix<T>(const matrix<T>& x): m(x.m){};
    matrix():m(){};
    matrix(int r_, int c_, const T& t_=0): r(r_),c(c_), m(r_*c_, t_){
        /*for(int i=0;i<r;++i){
            for(int j=0;i<c;++j){
                m.push_back(t_);
            }
        } */
    }
    ~matrix()=default;

    using value_type=T;
    using iterator= typename vector<T>::iterator;
    using const_iterator= typename  vector<T>::const_iterator;

    T& operator()(const int& r_,const int& c_){
        return m.at(r_*c_);
    }
    T& operator()(const int & r_, const int& c_) const{
        return m.at(r_*c_);
    }

    matrix<T>& operator=(const matrix<T>& t){
        (*this).m=t.m;
        return *this;
    }

    iterator begin(){
        return m.begin();
    }
    const_iterator begin() const{
        return m.cbegin();
    }

    iterator end(){
        return m.end();
    }
    const_iterator end() const{
        return m.cend();
    }

};

int main(){
    int x=4;
    int y=4;
    matrix<int> my_matrix;

    my_matrix(y,x);


}