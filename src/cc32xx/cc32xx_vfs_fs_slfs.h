/*
 * Copyright (c) 2014-2018 Cesanta Software Limited
 * All rights reserved
 *
 * Licensed under the Apache License, Version 2.0 (the ""License"");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an ""AS IS"" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CS_FW_PLATFORMS_CC32XX_SRC_CC32XX_VFS_FS_SLFS_H_
#define CS_FW_PLATFORMS_CC32XX_SRC_CC32XX_VFS_FS_SLFS_H_

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define MGOS_VFS_FS_TYPE_SLFS "SLFS"

bool cc32xx_vfs_fs_slfs_register_type(void);

#ifdef __cplusplus
}
#endif

#endif /* CS_FW_PLATFORMS_CC32XX_SRC_CC32XX_VFS_FS_SLFS_H_ */
