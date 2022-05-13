//
// Created by matan on 09/05/2022.
//
#include "OrgChart.hpp"
using namespace ariel;

OrgChart::OrgChart(){}

OrgChart& OrgChart::add_root(string head_manager){return *this;}

OrgChart& OrgChart::add_sub(string manager, string worker){return *this;}

ostream & ariel::operator<< (ostream& output, const OrgChart& orgChart){return output;}

vector<string>::iterator OrgChart::begin_level_order(){
    vector<string>::iterator check;
    return check;
}

vector<string>::iterator OrgChart::end_level_order(){
    vector<string>::iterator check;
    return check;
}

vector<string>::iterator OrgChart::begin_reverse_order(){
    vector<string>::iterator check;
    return check;
}

vector<string>::iterator OrgChart::reverse_order(){
    vector<string>::iterator check;
    return check;
}

vector<string>::iterator OrgChart::begin_preorder(){
    vector<string>::iterator check;
    return check;
}

vector<string>::iterator OrgChart::end_preorder(){
    vector<string>::iterator check;
    return check;
}

vector<int>:: iterator OrgChart::begin(){
    vector<int>::iterator check;
    return check;
}
vector<int>:: iterator OrgChart::end(){
    vector<int>::iterator check;
    return check;
}

string OrgChart::get_manager(string worker){return "";}

string OrgChart::get_root(){return "";}