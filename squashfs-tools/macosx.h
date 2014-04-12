#ifndef SQUASHFS_MACOSX
#define SQUASHFS_MACOSX 1

// MAC OS X specific defines

#ifndef FNM_EXTMATCH
#define FNM_EXTMATCH   0
#endif

#define strdupa(s)   strdup(s)

// do not track info (because of sigtimedwait/sigwaitinfo)
#define SQUASHFS_DISABLE_INFO  1
#define disable_info()
#define update_info(arg)
#define init_info()

// extended attribute manipulation
#define llistxattr(path, buf, size)   listxattr((path), (buf), (size), XATTR_NOFOLLOW)
#define lgetxattr(path, name, value, size)   getxattr((path), (name), (value), (size), 0, XATTR_NOFOLLOW)
#define lsetxattr(path, name, value, size, flags)   setxattr((path), (name), (value), (size), 0, (flags) | XATTR_NOFOLLOW)

#endif