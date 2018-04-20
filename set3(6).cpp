#include <iostream >
#include <string>
//vocales const
const string vowels = " aeiou ";
void pigLatinify ( const string s) {
    
    if(s. size () == 0) {//si la el lenght de la cadena es o return la misma cadena
        cout<<size<<;endl
        return s;
    }

    if(s. find ("qu") == 0) { // Starts with "qu"
        return s. substr (2, s. size () -2) + "-" + s. substr (0, 2) + "ay";
        }
    else if( vowels . find (s [0]) != string :: npos )
        { return s + " way";}
    else
        {return s. substr (1, s. size () -1) + "-" + s[0] + "ay"}
 }

int main(){



    std::cout << pigLatinify( "ayuda");


    return 0;
}
