/*
 * Copyright 2016 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef GrShadowRRectOp_DEFINED
#define GrShadowRRectOp_DEFINED

#include <memory>
#include "GrColor.h"

class GrContext;
class GrDrawOp;
class SkMatrix;
class SkRRect;
class SkStrokeRec;

namespace GrShadowRRectOp {

std::unique_ptr<GrDrawOp> Make(GrContext*,
                               GrColor,
                               const SkMatrix& viewMatrix,
                               const SkRRect& rrect,
                               SkScalar blurWidth,
                               SkScalar insetWidth);
}

#endif
