// TreeSDP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Tree.h"
#include "Tree.cpp"
#include <cassert>
#include <iostream>

using namespace std;

int main()
{
	Tree<int> intTree;
	intTree.create();
	intTree.addDirections("LL");
	intTree.addDirections("RR");
	intTree.print();
	
    return 0;
}

