//
// Created by matan on 09/05/2022.
//


#include "iostream"
#include<iterator>
#include<vector>
#include "Node.hpp"

using namespace std;

namespace ariel {
    class OrgChart{
    private:
        Node* root;
    public:
        OrgChart();
        OrgChart& add_root(string head_manager);
        OrgChart& add_sub(string manager, string worker);
        string get_manager(string worker);
        string get_root();
        friend ostream & operator<< (ostream& output, const OrgChart& orgChart);

        class Iterator{
        private:
            Node* curr_node;
            int flag;
            int iter_size;
        public:
            Iterator(Node* ptr = nullptr, int flag = 1){
                this->curr_node = ptr;
                this->flag = flag;
                this->iter_size = 0;
            }
            Iterator& operator++(){
//                if (flag == 1) {
//                    this->curr_node = this->curr_node->get_childs().at(0);
//                }
                return *this;
            }
            Iterator operator++(int){
                Iterator iter_copy = *this;
                ++*this;
                return iter_copy;
            }
            bool operator!=(Iterator iterator) const {
                return false;
            }
            bool operator==(Iterator other_iter) const {
                return false;
            }
            string & operator*() const {
                return this->curr_node->name;
            }
            string * operator->() const {
                return &this->curr_node->name;
            }
        };

        Iterator begin_level_order();
        Iterator end_level_order();
        Iterator begin_reverse_order();
        Iterator reverse_order();
        Iterator begin_preorder();
        Iterator end_preorder();
        Iterator begin();
        Iterator end();
    };
}