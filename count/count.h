#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "tree.h"
#include "elemtype.h"
extern void TreeCountNodes(const Node* t, int* internal, int* external);