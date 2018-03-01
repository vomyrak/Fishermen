//
//  main.cpp
//  newFile
//
//  Created by The Pog on 01/03/2018.
//  Copyright © 2018 Pranav Paul. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>


struct journey {
    
    int a;
    int b;
    int x;
    int y;
    int start;
    int end;
    int startdistance;
    int enddistance;
    int ridenum;
    
};


struct node {
    
    journey data;
    
    node* next;
    
};

using namespace std;

void printList(node* l);

node* createLL(string fileName);



int main(int argc, const char * argv[]) {
    

    return 0;
}


node* createLL(string fileName)
{
    ifstream infile;
    
    string infilename = "b_should_be_easy.in";
    
    
    
    
    infile.open(infilename.c_str());
    
    if(!infile.is_open())
    {
        cout << "could not open input file" << endl;
        exit (EXIT_FAILURE);
    }
    
    
    int tmp1, tmp2, tmp3, tmp4, tmp5, tmp6;
    
    cout << "the file is open"<< endl;
    
    int i = 0;
    
    
    
    string line;
    
    getline(infile,line);
    
    string deleteline = "0";
    line.replace(line.find(deleteline),deleteline.length(),"");
    
    
    int ride = 0;
    
    node* hdList;
    
    bool firstLine = true;
    
    node* rowData = new node;
    
    journey val;
    
    node* nextNode;
    
    while(infile >> tmp1 >> tmp2 >> tmp3 >> tmp4 >> tmp5 >> tmp6)
    {
        
        ride ++;
        
        
        
        val.a = tmp1;
        val.b = tmp2;
        val.x = tmp3;
        val.y = tmp4;
        val.start = tmp5;
        val.end = tmp6;
        
        val.startdistance = 0;
        val.enddistance = 0;
        val.ridenum = ride;
        
        
        if((val.a+val.b) <= val.start)
        {
            nextNode = new node;
            
            rowData -> data = val;
            
            
            rowData -> next = nextNode;
            
            
            if (firstLine)
            {
                
                hdList = rowData;
                hdList -> next = rowData -> next;
                firstLine = false;
            }
            
            rowData = nextNode;
            rowData -> next = NULL;
            
            
        }
        
        
        
    }
    
    
    
    infile.close();
    
    printList(hdList);
    
    
    return hdList;
    
}

void printList(node* l)
{
    
    while(l != NULL){
        
       cout << ((l -> data).a) << endl;
    
        l = l->next;
    }
}
