// Copyright 2021 The IREE Authors
//
// Licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

#ifndef IREE_COMPILER_DIALECT_STREAM_CONVERSION_STANDARDTOSTREAM_CONVERTSTANDARDTOSTREAM_H_
#define IREE_COMPILER_DIALECT_STREAM_CONVERSION_STANDARDTOSTREAM_CONVERTSTANDARDTOSTREAM_H_

#include "mlir/Pass/Pass.h"
#include "mlir/Transforms/DialectConversion.h"

namespace mlir {
namespace iree_compiler {

// Populates conversion patterns that perform standard/builtin->stream
// conversion. These patterns ensure that nested types are run through the
// provided |typeConverter|.
void populateStandardToStreamConversionPatterns(
    MLIRContext *context, ConversionTarget &conversionTarget,
    TypeConverter &typeConverter, OwningRewritePatternList &patterns);

}  // namespace iree_compiler
}  // namespace mlir

#endif  // IREE_COMPILER_DIALECT_STREAM_CONVERSION_STANDARDTOSTREAM_CONVERTSTANDARDTOSTREAM_H_
