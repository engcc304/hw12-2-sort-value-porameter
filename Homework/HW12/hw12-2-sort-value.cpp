/*
    สร้าง Struct เพื่อเก็บข้อมูลของคน 2 คน โดยเก็บข้อมูล ชื่อ , อายุ , เพศ และคะแนนสะสม และแสดงผลออกมาบนหน้าจอ
    
    Test case:
        Student A
        Name : 
            Yorn
        Score : 
            21.42

        Student B
        Name : 
            Omen
        Score : 
            56.00

        Student C
        Name : 
            Alice
        Score : 
            80.75

        Student D
        Name : 
            Violet
        Score : 
            67.76

    Output:
        Alice Violet Omen Yorn
        80.75 67.76 56.00 21.42

    Test case:
        Student A
        Name : 
            Payna
        Score : 
            77.77
            
        Student B
        Name : 
            Zanis
        Score : 
            88.88

        Student C
        Name : 
            Lubu
        Score : 
            66.66

        Student D
        Name : 
            Krixi
        Score : 
            99.99

    Output:
        Krixi Zanis Payna Lubu
        99.99 88.88 77.77 66.66

*/

#include <stdio.h>

struct Person {
    char Name[20] ;
    float Score ;
};

int main() {
    struct Person A , B , C , D ;

    // รับข้อมูลของ Person A
    printf( "Student A\n" ) ;
    printf( "Name : " ) ;
    scanf( "%s" , A.Name ) ;
    printf( "Score : " ) ;
    scanf( "%f" , &A.Score ) ;
    
    printf( "Student B\n" ) ;
    printf( "Name : " ) ;
    scanf( "%s" , B.Name ) ;
    printf( "Score : " ) ;
    scanf( "%f" , &B.Score ) ;

    printf( "Student C\n" ) ;
    printf( "Name : " ) ;
    scanf( "%s" , C.Name ) ;
    printf( "Score : " ) ;
    scanf( "%f" , &C.Score ) ;

    printf( "Student D\n" ) ;
    printf( "Name : " ) ;
    scanf( "%s" , D.Name ) ;
    printf( "Score : " ) ;
    scanf( "%f" , &D.Score ) ;

// รับข้อมูลของ Person B
    printf( "%s %s %s %s \n " , A.Name , B.Name , C.Name , D.Name ) ;
    printf( "%0.2f %0.2f %0.2f %0.2f " , A.Score, B.Score , C.Score , D.Score ) ;
    

    
    return 0 ;
}
