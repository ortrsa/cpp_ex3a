#include "Matrix.hpp"
using namespace std;
using namespace zich;

namespace zich{
  
  
            /*plus operator*/
            Matrix Matrix::operator+(){
                Matrix a{{1, 1, 1, 1, 1, 1, 1, 1, 1}, 3, 3};
                return(a);
            }
            Matrix Matrix::operator+(const Matrix &mat){
                Matrix a{{1, 1, 1, 1, 1, 1, 1, 1, 1}, 3, 3};
                return(a);
            }
            Matrix Matrix::operator+=(const Matrix &mat){
                Matrix a{{1, 1, 1, 1, 1, 1, 1, 1, 1}, 3, 3};
                return(a);
            }
            
            /*minus operator*/
            Matrix Matrix::operator-(){
                Matrix a{{1, 1, 1, 1, 1, 1, 1, 1, 1}, 3, 3};
                return(a);
            }
            Matrix Matrix::operator-(const Matrix &mat){
                Matrix a{{1, 1, 1, 1, 1, 1, 1, 1, 1}, 3, 3};
                return(a);
            }
            Matrix Matrix::operator-=(const Matrix &mat){
                Matrix a{{1, 1, 1, 1, 1, 1, 1, 1, 1}, 3, 3};
                return(a);
            }

            /*comper operator*/
            bool Matrix::operator == (const Matrix &mat)const{
                return(true);
            }
            bool Matrix::operator <= (const Matrix &mat)const{
                return(true);
            }
            bool Matrix::operator >= (const Matrix &mat)const{
                return(true);
            }
            bool Matrix::operator < (const Matrix &mat)const{
                return(true);
            }
            bool Matrix::operator > (const Matrix &mat) const {
                return(true);
            }
            bool Matrix::operator != (const Matrix &mat) const {
                return(true);
            }
            
            /*increes and decrees operator*/
            Matrix Matrix::operator++(){
                Matrix a{{1, 1, 1, 1, 1, 1, 1, 1, 1}, 3, 3};
                return(a);
            }
            Matrix Matrix::operator--(){
                Matrix a{{1, 1, 1, 1, 1, 1, 1, 1, 1}, 3, 3};
                return(a);
            }
            Matrix Matrix::operator++(int n){
                Matrix a{{1, 1, 1, 1, 1, 1, 1, 1, 1}, 3, 3};
                return(a);
            }
            Matrix Matrix::operator--(int n){
                Matrix a{{1, 1, 1, 1, 1, 1, 1, 1, 1}, 3, 3};
                return(a);
            }


            /*mult operator*/
            Matrix Matrix::operator*(const Matrix &mat){
                Matrix a{{1, 1, 1, 1, 1, 1, 1, 1, 1}, 3, 3};
                return(a);
            }
            Matrix Matrix::operator*=(const Matrix &mat){
                Matrix a{{1, 1, 1, 1, 1, 1, 1, 1, 1}, 3, 3};
                return(a);
            }
            Matrix Matrix::operator*(const double num){
                Matrix a{{1, 1, 1, 1, 1, 1, 1, 1, 1}, 3, 3};
                return(a);
            }
            Matrix Matrix::operator*=(const double num){
                Matrix a{{1, 1, 1, 1, 1, 1, 1, 1, 1}, 3, 3};
                return(a);
            }

            Matrix operator*(double num, Matrix& nm){
                Matrix a{{1, 1, 1, 1, 1, 1, 1, 1, 1}, 3, 3};
                return(a);
            }

            /*input and output*/
            std::ostream &operator << ( std::ostream &output, const Matrix &mat){
                return(output<<"hi");
            }
            std::istream &operator >>(std::istream &input, Matrix &mat){
                int a;
                return(input >> a);
            }


        
    };
    


