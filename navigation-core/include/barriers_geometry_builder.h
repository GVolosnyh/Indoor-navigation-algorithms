/** barriers_geometry_builder.h
*
* Author: Vasiliy Kosyanchuk <v.kosyanchuk@navigine.com>
* Copyright (c) 2019 Navigine. All rights reserved.
*
*/

#ifndef NAVIGINE_BARRIERS_GEOMETRY_BUILDER_H
#define NAVIGINE_BARRIERS_GEOMETRY_BUILDER_H

#include <level_geometry.h>

namespace navigine {
namespace navigation_core {

LevelGeometry getGeometry(const std::list<Polygon>& allowedArea);

} } // namespace geometry::navigine::navigation_core

#endif // NAVIGINE_BARRIERS_GEOMETRY_BUILDER_H
