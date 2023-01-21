#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "list.h"
#include "elemtype.h"
extern Item* ConcatenaN(Item** v, size_t v_size);
extern Item* BucketSort(Item* i);