//===--- DiagnosticEngine.cpp - Diagnostic Display Engine -----------------===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2014 - 2017 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See https://swift.org/LICENSE.txt for license information
// See https://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//
// This source file is part of the polarphp.org open source project
//
// Copyright (c) 2017 - 2018 polarphp software foundation
// Copyright (c) 2017 - 2018 zzu_softboy <zzu_softboy@163.com>
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See https://polarphp.org/LICENSE.txt for license information
// See https://polarphp.org/CONTRIBUTORS.txt for the list of polarphp project authors
//
// Created by polarboy on 2019/04/25.
//===----------------------------------------------------------------------===//
//  This file defines the DiagnosticEngine class, which manages any diagnostics
//  emitted by Swift.
//
//===----------------------------------------------------------------------===//

#include "polarphp/ast/DiagnosticEngine.h"
#include "polarphp/ast/AstContext.h"
#include "polarphp/ast/AstPrinter.h"
#include "polarphp/ast/Decl.h"
#include "polarphp/ast/DiagnosticSuppression.h"
#include "polarphp/ast/PrintOptions.h"
#include "polarphp/ast/TypeRepr.h"
#include "polarphp/parser/SourceMgr.h"
#include "polarphp/parser/Lexer.h" // bad dependency
#include "polarphp/basic/adt/SmallString.h"
#include "polarphp/basic/adt/Twine.h"
#include "polarphp/utils/CommandLine.h"
#include "polarphp/utils/Format.h"
#include "polarphp/utils/RawOutStream.h"
