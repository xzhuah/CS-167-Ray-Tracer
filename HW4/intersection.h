#pragma once
#include "vertexnormal.h"
#include "primitive.h"
#include "sphere.h"
class intersection
{
public:
	vertexnormal vertex;
	primitive* mprimitive;
	intersection() {
		
	}
	intersection(vertexnormal vertex, primitive* mprimitive) {
		this->vertex = vertex;
		this->mprimitive = mprimitive;
	}
	~intersection() {
		//this->primitive = NULL;
	}

private:

};

