#include "register_types.h"

#include "shape_cast_2d.h"

void register_physicstools_types() {
	ClassDB::register_class<ShapeCast2D>();
}

void unregister_physicstools_types() {
	// nothing to do here
}
