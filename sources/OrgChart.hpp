//
// Created by matan on 09/05/2022.
//

#ifndef ORGCHART_PART1_ORHCHART_H
#define ORGCHART_PART1_ORHCHART_H

#endif //ORGCHART_PART1_ORHCHART_H
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
        vector<string>::iterator end_reverse_order();
        vector<string>::iterator begin_preorder();
        vector<string>::iterator end_preorder();
        string get_manager(string worker);
        string get_root();
    };
}