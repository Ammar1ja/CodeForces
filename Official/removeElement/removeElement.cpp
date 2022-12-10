#include <iostream>
#include <string>
using namespace std;
int main()
{
          string name = "Esmaeel";
            
            for (int i = 0;i< name.size();i++) 
            {
                if (name[i] == 'm')
                {
                    for (int j=i;j< name.size()-1;j++) 
                    {
                        
                        name[j] = name[j + 1];
                        
                    }
                }
            }
            name[name.size()-1] = '\0';
           cout<<name;
}