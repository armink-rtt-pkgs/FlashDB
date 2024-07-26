/*
 * Copyright (c) 2020, Armink, <armink.ztl@gmail.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief configuration file
 */

#ifndef _FDB_CFG_H_
#define _FDB_CFG_H_

/* #define FDB_USING_FILE_POSIX_MODE */
/* #define FDB_USING_FAL_MODE */
/* more configuration macro is in rtconfig.h */

#include <rtthread.h>

#ifdef RT_USING_FAL
#define FDB_USING_FAL_MODE
#endif

#ifdef RT_USING_DFS
#if RT_VER_NUM >= 0x40100
#include <sys/stat.h>
#include <sys/statfs.h>
#include <unistd.h>
#else
#include <dfs_posix.h>
#endif /* RT_VER_NUM >= 0x40100 */
#endif /* RT_USING_DFS */

#define FDB_PRINT(...) rt_kprintf(__VA_ARGS__)

#endif /* _FDB_CFG_H_ */
