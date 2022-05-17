//
// Created by matan on 09/05/2022.
//
#include "OrgChart.hpp"
using namespace ariel;

OrgChart::OrgChart(){
    root = new Node();
}

OrgChart& OrgChart::add_root(string head_manager){
    //this->root->set_name(head_manager);
    return *this;
}

OrgChart& OrgChart::add_sub(string manager, string worker){
//    bool found_manager = false;
//    // going through an iterator
//    Node* manager_node;
//    if (!found_manager) {
//        throw invalid_argument("There's no such manager");
//    }
//    Node worker_node = Node(worker);
//    manager_node->add_child(&worker_node);
    return *this;
}

string OrgChart::get_manager(string worker){
//    bool found_worker = false;
//    // iterator to find the worker node
//    if (!found_worker) {
//        throw invalid_argument("There's no such worker");
//    }
    return "";
}

string OrgChart::get_root(){return "";}

ostream & ariel::operator<< (ostream& output, const OrgChart& orgChart){return output;}

OrgChart::Iterator OrgChart::begin_level_order(){
    OrgChart::Iterator check(this->root);
    return check;
}

OrgChart::Iterator OrgChart::end_level_order(){
    OrgChart::Iterator check(nullptr);
    return check;
}

OrgChart::Iterator OrgChart::begin_reverse_order(){
    OrgChart::Iterator check(this->root);
    return check;
}

OrgChart::Iterator OrgChart::reverse_order(){
    OrgChart::Iterator check(nullptr);
    return check;
}

OrgChart::Iterator OrgChart::begin_preorder(){
    OrgChart::Iterator check(this->root);
    return check;
}

OrgChart::Iterator OrgChart::end_preorder(){
    OrgChart::Iterator check(nullptr);
    return check;
}

OrgChart::Iterator OrgChart::begin(){
    OrgChart::Iterator check(this->root);
    return check;
}
OrgChart::Iterator OrgChart::end(){
    OrgChart::Iterator check(nullptr);
    return check;
}