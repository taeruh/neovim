#pragma once

/// List of possible XDG variables
typedef enum {
  kXDGNone = -1,
  kXDGConfigHome,  ///< XDG_CONFIG_HOME
  kXDGDataHome,    ///< XDG_DATA_HOME
  kXDGCacheHome,   ///< XDG_CACHE_HOME
  kXDGStateHome,   ///< XDG_STATE_HOME
  kXDGRuntimeDir,  ///< XDG_RUNTIME_DIR
  kXDGConfigDirs,  ///< XDG_CONFIG_DIRS
  kXDGDataDirs,    ///< XDG_DATA_DIRS
} XDGVarType;
