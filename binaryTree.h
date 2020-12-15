//
// Created by liwaa on 12/15/2020.
//

#ifndef Task2_BINARYTREE_H
#define Task2_BINARYTREE_H

#endif //Task2_BINARYTREE_H
#include <fstream>
#include <string>

class binary_tree {
public:
    class node;
    binary_tree();
    void addRoot(const std::string &data);
    static void addLeft(node *nd, const std::string &data);
    static void addRight(node *nd, const std::string &data);

    node *getRoot();

    std::string get(node *node);
    bool isEmpty();

    void print(std::ostream &os=std::cout);
    static binary_tree read(const char *filename);
    void write(const char *filename);
    void question(char& again);
private:
    void question(node* nd, int depth, char & again);
    void print(std::ostream &os, node *nd, int indent);
    static node *read(std::ifstream &ifs);
    void write(std::ofstream &ofs, node *nd, int depth);
    node *root;
};

struct binary_tree::node {
    node(std::string data);
    std::string data;
    node *left, *right;
};

std::string name_to_filename(const std::string& name);
