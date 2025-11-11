#ifndef NODE_CPP
#define NODE_CPP
#include "node.hpp"
#include <iostream>

namespace NodeSystem
{
    void Node::Update()
    {
        for(int i = 0; i < components.size(); i++)
        {
        }
    }

    void Node::Initialize()
    {
        std::cout << "Node Initialized" << std::endl;
    }
    
}

#endif //NODE_CPP