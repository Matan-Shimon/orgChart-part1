//
// Created by matan on 09/05/2022.
//

#pragma once
#include "iostream"
#include<iterator> // for iterators
#include<vector> // for vectors
using namespace std;
namespace ariel {
    class OrgChart{
    public:
        OrgChart();
        OrgChart& add_root(string head_manager);
        OrgChart& add_sub(string manager, string worker);
        friend ostream & operator<< (ostream& output, const OrgChart& orgChart);
        vector<string>::iterator begin_level_order();
        vector<string>::iterator end_level_order();
        vector<string>::iterator begin_reverse_order();
        vector<string>::iterator reverse_order();
        vector<string>::iterator begin_preorder();
        vector<string>::iterator end_preorder();
        vector<int>:: iterator begin();
        vector<int>:: iterator end();
        string get_manager(string worker);
        string get_root();
    };
}