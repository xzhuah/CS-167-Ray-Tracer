#pragma once
#include "vertexnormal.h"
#include "primitive.h"

class intersection
{
public:
	vertexnormal vertex;
	Primitive* mprimitive;
	intersection() {
		
	}
	intersection(vertexnormal vertex, Primitive* mprimitive) {
		this->vertex = vertex;
		this->mprimitive = mprimitive;
	}
	~intersection() {
		//this->primitive = NULL;
	}

private:

};

