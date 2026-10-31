#ifndef __KSU_H_APK_V2_SIGN
#define __KSU_H_APK_V2_SIGN

#include <linux/types.h>

#define EXPECTED_SIZE 5211013
#define EXPECTED_HASH "27CB50F35F7EFBCBF4480F744761BA81C32BE5554CA69F66C3D4A7BCB5340988"

bool is_manager_apk(char *path);
int get_pkg_from_apk_dir_path(char *pkg, const char *path);

#endif
