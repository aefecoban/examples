#include <iostream>
#include <fstream>
#include <string>

#ifndef WMODE
#define WMODE ios::out
#endif

#ifndef RMODE
#define RMODE ios::in
#endif

#ifndef AMODE
#define AMODE ios::app
#endif

using namespace std;

class FS{
    protected:
        fstream file;
    public:
        string filelocation;
        bool isFileExists = false;
        FS(){}
        FS(string f){
            filelocation = f;
            file.open(filelocation);
            isFileExists = !file.fail();
            file.close();
        }
        string read(){
            string rData = "";
            if(isFileExists){
                string line = "";
                file.open(filelocation, RMODE);
                if(file.is_open()){
                    while (getline(file, line))
                    {
                        rData.append(line + '\n');
                    }
                    rData.pop_back();
                    file.close();
                }
            }
            return rData;
        }
        bool create(){
            if(!isFileExists){
                file.open(filelocation, WMODE);
                if(file.is_open()){
                    file.close();
                    return true;
                }
            }
            return false;
        }
        bool write(string d){
            create();
            file.open(filelocation, WMODE);
            file << d;
            return true;
        }
        bool append(string d){
            create();
            file.open(filelocation, AMODE);
            file << d;
            return true;
        }
};
