#include "doctest.h"
#include "Matrix.hpp"
using namespace zich;

#include <string>
using namespace std;



std::vector<double> vec1 = {1, 0, 0, 0, 1, 0, 0, 0, 1,1,1,1};
Matrix m1{vec1, 3, 4};  

std::vector<double> vec2 = {1, 0, 0, 0, 1, 0, 0, 0, 1};
Matrix m2{vec2, 3, 3};  

std::vector<double> vec3 = {1,1,1,1,1,1,1,1,1};
Matrix m3{vec3, 3, 3};  

/*for matrix mult*/
std::vector<double> vec4 = {1, 3, 4, 5, 1, 6};
Matrix m4{vec4, 2, 3}; 

std::vector<double> vec5 = {1, 0, 0, 0, 1, 0, 0, 0, 1,1,2,3};
Matrix m5{vec5, 3, 4};

/*scalar mult*/
std::vector<double> vec9 = {1, 1, 1, 1, 1, 1, 1, 1, 1};
Matrix m9{vec9, 3, 3}; 
// ans for m9*3    
std::vector<double> vec10 = {3, 3, 3, 3, 3, 3, 3, 3, 3};
Matrix m10{vec10, 3, 3}; 


/*add and sub 1*/
std::vector<double> vec6 = {0, 0, 0, 0, 0, 0, 0, 0, 0};
Matrix m6{vec6, 3, 3};  

std::vector<double> vec7 = {1, 1, 1, 1, 1, 1, 1, 1, 1};
Matrix m7{vec7, 3, 3};  

std::vector<double> vec8 = {0, 0, 0, 0, 0, 0, 0, 0, 0};
Matrix m8{vec8, 3, 3};  

/*results*/
std::vector<double> vec11 = {3, 3, 3, 3};
Matrix m11{vec11, 2, 2}; 
std::vector<double> vec12 = {1, 2, 3, 4};
Matrix m12{vec12, 2, 2}; 

// m11+m12
std::vector<double> vec13 = {1, 2, 3, 4};
Matrix m13{vec13, 2, 2}; 
// m11-m12
std::vector<double> vec14 = {2, 1, 0, -1};
Matrix m14{vec14, 2, 2}; 



TEST_CASE("Chack no throw whan matrix in the same size") {
    
    /*plus operator*/
    CHECK_NOTHROW(m2+=m3);
    CHECK_NOTHROW(m2+m3);
    CHECK_NOTHROW(m3+=m2);
    CHECK_NOTHROW(m3+m2);

    /*minus operator*/
    CHECK_NOTHROW(m2-=m3);
    CHECK_NOTHROW(m2-m3);
    CHECK_NOTHROW(m3-=m2);
    CHECK_NOTHROW(m3-m2);
    
    /*comper operator*/
    CHECK_NOTHROW(CHECK_EQ((m2<m3),true));
    CHECK_NOTHROW(CHECK_EQ((m2>m3),true));
    CHECK_NOTHROW(CHECK_EQ((m2<=m3),true));
    CHECK_NOTHROW(CHECK_EQ((m2>=m3),true));
    CHECK_NOTHROW(CHECK_EQ((m2==m3),true));
    CHECK_NOTHROW(CHECK_EQ((m2!=m3),true));
    CHECK_NOTHROW(CHECK_EQ((m3<m2),true));
    CHECK_NOTHROW(CHECK_EQ((m3>m2),true));
    CHECK_NOTHROW(CHECK_EQ((m3<=m2),true));
    CHECK_NOTHROW(CHECK_EQ((m3>=m2),true));
    CHECK_NOTHROW(CHECK_EQ((m3==m2),true));
    CHECK_NOTHROW(CHECK_EQ((m3!=m2),true));

}

TEST_CASE("Chack throw whan matrix are not in the same size") {
    
    /*plus operator*/
    CHECK_THROWS(m1+=m2);
    CHECK_THROWS(m1+m2);
    CHECK_THROWS(m2+=m1);
    CHECK_THROWS(m2+m1);

    /*minus operator*/
    CHECK_THROWS(m1-=m2);
    CHECK_THROWS(m1-m2);
    CHECK_THROWS(m2-=m1);
    CHECK_THROWS(m2-m1);
    
    /*comper operator*/
    CHECK_THROWS(CHECK_EQ((m2<m3),true));
    CHECK_THROWS(CHECK_EQ((m2>m3),true));
    CHECK_THROWS(CHECK_EQ((m2<=m3),true));
    CHECK_THROWS(CHECK_EQ((m2>=m3),true));
    CHECK_THROWS(CHECK_EQ((m2==m3),true));
    CHECK_THROWS(CHECK_EQ((m2!=m3),true));
    CHECK_THROWS(CHECK_EQ((m3<m2),true));
    CHECK_THROWS(CHECK_EQ((m3>m2),true));
    CHECK_THROWS(CHECK_EQ((m3<=m2),true));
    CHECK_THROWS(CHECK_EQ((m3>=m2),true));
    CHECK_THROWS(CHECK_EQ((m3==m2),true));
    CHECK_THROWS(CHECK_EQ((m3!=m2),true));

}


TEST_CASE("Chack Matrix mult") {
    /*basic mult*/

    // (2X3)*(3X4) = (2X4)
    CHECK_NOTHROW(m4*m5);
    // (3X4)*(2X3) = ERROR
    CHECK_THROWS(m5*m4);

    /*scalar mult*/
    CHECK(m9*3 == m10);

                                          
}

TEST_CASE("Check results") {
    
    CHECK(m6++ == m7);
    CHECK(m7-- == m8);

    CHECK(m11 + m12 == m13);
    CHECK(m11 - m12 == m14);
    CHECK(m3>m2);
    CHECK(m2<m3);
    CHECK(m3<=m9);
    CHECK(m3>=m9);
    CHECK(m3==m9);
    CHECK(m3!=m2);

    

}

TEST_CASE("Check trowing and not in some cases") {
    // matrix dont fit the vector
    std::vector<double> vec15 = {2, 1, 0, -1,3,4,5,2,3};
    CHECK_THROWS(Matrix m15(vec15, 3, 5));
    CHECK_THROWS(Matrix m15(vec15, 2, 2));        
    
    // vector size is 7
    std::vector<double> vec16 = {2, 1, 0, -1,3,4,5};
    CHECK_THROWS(Matrix m15(vec15, 3, 3)); 
    
    CHECK_NOTHROW(m11++);
    CHECK_NOTHROW(m11--);
    CHECK_NOTHROW(++m11);
    CHECK_NOTHROW(--m11);

}
