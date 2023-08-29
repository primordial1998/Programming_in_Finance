//
//  Node.cpp
//  finalProject1
//
//  Created by Zhuofan Dong on 12/21/20.
//

#include "Node.hpp"

Node::Node(string name, int num)
    :stockName(name), stockNum(num), price(0.0)
{
    this->prev = NULL;
    this->next = NULL;
}

void Node::setStockNum(int num)
{
    stockNum = num;
}

int Node::getStockNum()
{
    return stockNum;
}

string Node::getStockName()
{
    return stockName;
}

double Node::getPrice()
{
    return price;
}

Node * Node::getNext()
{
    return next;
}
