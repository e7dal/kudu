// Copyright (c) 2013, Cloudera, inc.
// Confidential Cloudera Information: Covered by NDA.
//
// Inline implementations of BlockId methods which are rarely
// used.
#ifndef KUDU_FS_BLOCK_ID_INL_H
#define KUDU_FS_BLOCK_ID_INL_H

#include <string>

#include "kudu/gutil/strtoint.h"

namespace kudu {

inline std::string BlockId::hash0() const { return id_.substr(0, 2); }
inline std::string BlockId::hash1() const { return id_.substr(2, 2); }
inline std::string BlockId::hash2() const { return id_.substr(4, 2); }
inline std::string BlockId::hash3() const { return id_.substr(6, 2); }

} // namespace kudu
#endif /* KUDU_FS_BLOCK_ID-INL_H */
