#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#include <string.h>
using namespace std;

string compileLine(string normalLine) {
    if(normalLine.length() == 0) return "";
    bool allowedEOL = true;
    string compiled = "";
    string spaced[normalLine.length()] = {};

    int index = 0;
    for(int i = 0; i < normalLine.length(); i++) {
        if(normalLine[i] == 32 || normalLine[i] == 9) {
            spaced[index] += " ";
            index++;
        }
        else {
            spaced[index] += normalLine[i];
        }
    }

    for(int i = 0; i < (sizeof(spaced)/sizeof(*spaced)); i++) {
        string word = spaced[i];
        // I should use SWITCH :)
        if(word == "print: ") {
            compiled += "cout << ";
        }
        else if(word == "using ") {
            compiled += "#include ";
            allowedEOL = false;
        }
        else if(word == "define ") {
            compiled += "#define ";
            allowedEOL = false;
        }
        else if(word == "namespace ") {
            compiled += "using namespace ";
        }
        else if(word == "def<int> ") {
            compiled += "int ";
            allowedEOL = false;
        }
        else if(word == "def<float> ") {
            compiled += "float ";
            allowedEOL = false;
        }
        else if(word == "def<double> ") {
            compiled += "double ";
            allowedEOL = false;
        }
        else if(word == "def<long> ") {
            compiled += "long ";
            allowedEOL = false;
        }
        else if(word == "def<long long> ") {
            compiled += "long long";
            allowedEOL = false;
        }
        else if(word == "def<null> ") {
            compiled += "void ";
            allowedEOL = false;
        }
        else if(word == "def<boolean> ") {
            compiled += "bool ";
            allowedEOL = false;
        }
        else if(word == "interface ") {
            compiled += "struct ";
            allowedEOL = false;
        }
        else if(word == "ret " || word == "return ") {
            compiled += "return ";
        }
        else if(word == "input: ") {
            compiled += "cin >> ";
        }
        else {
            compiled += word;
        }
    }

    return compiled;
}

int main() {

    cout << "C+ \n";
    string path = "main.cp";
    string readyCode = "";
    string line;

    ifstream MyReadFile(path);
    while (getline (MyReadFile, line)) {
        readyCode += compileLine("" + line) + '\n';
    }

    MyReadFile.close();

    //cout << readyCode << endl;

    ofstream outdata;
    outdata.open("cp-program.cpp");

    outdata << readyCode;
    outdata.close();

    system("g++ cp-program.cpp -o program.exe");

    return 0;
}
