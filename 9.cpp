    #include <iostream> 
    #include <iomanip> 
    #include <string>
    #include <sstream> 
    #include <fstream> 
    #include <math.h> 
    #include <stdio.h>
     
    using namespace std;
     
    int main()
    {
        for (int a=2 ; a < 1000 ; a++)
        {
            bool prime = true;
     
            for(int c=2 ; c*c <= a ; c++)
            {
                if(a % c == 0)
                {
                    prime = false;
                    break;
                }
            }
     
            if(prime) cout << a << " ";
        }
     
        return 0;
    }
