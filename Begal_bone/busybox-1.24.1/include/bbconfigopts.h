#ifndef _BBCONFIGOPTS_H
#define _BBCONFIGOPTS_H
/*
 * busybox configuration settings.
 *
 * Licensed under GPLv2 or later, see file LICENSE in this source tree.
 *
 * This file is generated automatically by scripts/mkconfigs.
 * Do not edit.
 */
static const char bbconfig_config[] ALIGN1 =
"CONFIG_HAVE_DOT_CONFIG=y\n"
"CONFIG_DESKTOP=y\n"
"# CONFIG_EXTRA_COMPAT is not set\n"
"CONFIG_INCLUDE_SUSv2=y\n"
"# CONFIG_USE_PORTABLE_CODE is not set\n"
"CONFIG_PLATFORM_LINUX=y\n"
"CONFIG_FEATURE_BUFFERS_USE_MALLOC=y\n"
"# CONFIG_FEATURE_BUFFERS_GO_ON_STACK is not set\n"
"# CONFIG_FEATURE_BUFFERS_GO_IN_BSS is not set\n"
"CONFIG_SHOW_USAGE=y\n"
"CONFIG_FEATURE_VERBOSE_USAGE=y\n"
"CONFIG_FEATURE_COMPRESS_USAGE=y\n"
"CONFIG_FEATURE_INSTALLER=y\n"
"# CONFIG_INSTALL_NO_USR is not set\n"
"# CONFIG_LOCALE_SUPPORT is not set\n"
"CONFIG_UNICODE_SUPPORT=y\n"
"# CONFIG_UNICODE_USING_LOCALE is not set\n"
"# CONFIG_FEATURE_CHECK_UNICODE_IN_ENV is not set\n"
"CONFIG_SUBST_WCHAR=63\n"
"CONFIG_LAST_SUPPORTED_WCHAR=767\n"
"# CONFIG_UNICODE_COMBINING_WCHARS is not set\n"
"# CONFIG_UNICODE_WIDE_WCHARS is not set\n"
"# CONFIG_UNICODE_BIDI_SUPPORT is not set\n"
"# CONFIG_UNICODE_NEUTRAL_TABLE is not set\n"
"# CONFIG_UNICODE_PRESERVE_BROKEN is not set\n"
"# CONFIG_PAM is not set\n"
"CONFIG_FEATURE_USE_SENDFILE=y\n"
"CONFIG_LONG_OPTS=y\n"
"CONFIG_FEATURE_DEVPTS=y\n"
"# CONFIG_FEATURE_CLEAN_UP is not set\n"
"CONFIG_FEATURE_UTMP=y\n"
"CONFIG_FEATURE_WTMP=y\n"
"CONFIG_FEATURE_PIDFILE=y\n"
"CONFIG_PID_FILE_PATH=\"/var/run\"\n"
"CONFIG_FEATURE_SUID=y\n"
"CONFIG_FEATURE_SUID_CONFIG=y\n"
"CONFIG_FEATURE_SUID_CONFIG_QUIET=y\n"
"# CONFIG_SELINUX is not set\n"
"# CONFIG_FEATURE_PREFER_APPLETS is not set\n"
"CONFIG_BUSYBOX_EXEC_PATH=\"/proc/self/exe\"\n"
"CONFIG_FEATURE_SYSLOG=y\n"
"CONFIG_FEATURE_HAVE_RPC=y\n"
"CONFIG_STATIC=y\n"
"# CONFIG_PIE is not set\n"
"# CONFIG_NOMMU is not set\n"
"# CONFIG_BUILD_LIBBUSYBOX is not set\n"
"# CONFIG_FEATURE_INDIVIDUAL is not set\n"
"# CONFIG_FEATURE_SHARED_BUSYBOX is not set\n"
"CONFIG_LFS=y\n"
"CONFIG_CROSS_COMPILER_PREFIX=\"\"\n"
"CONFIG_SYSROOT=\"\"\n"
"CONFIG_EXTRA_CFLAGS=\"\"\n"
"CONFIG_EXTRA_LDFLAGS=\"\"\n"
"CONFIG_EXTRA_LDLIBS=\"\"\n"
"# CONFIG_DEBUG is not set\n"
"# CONFIG_DEBUG_PESSIMIZE is not set\n"
"# CONFIG_UNIT_TEST is not set\n"
"# CONFIG_WERROR is not set\n"
"CONFIG_NO_DEBUG_LIB=y\n"
"# CONFIG_DMALLOC is not set\n"
"# CONFIG_EFENCE is not set\n"
"CONFIG_INSTALL_APPLET_SYMLINKS=y\n"
"# CONFIG_INSTALL_APPLET_HARDLINKS is not set\n"
"# CONFIG_INSTALL_APPLET_SCRIPT_WRAPPERS is not set\n"
"# CONFIG_INSTALL_APPLET_DONT is not set\n"
"# CONFIG_INSTALL_SH_APPLET_SYMLINK is not set\n"
"# CONFIG_INSTALL_SH_APPLET_HARDLINK is not set\n"
"# CONFIG_INSTALL_SH_APPLET_SCRIPT_WRAPPER is not set\n"
"CONFIG_PREFIX=\"./_install\"\n"
"CONFIG_FEATURE_SYSTEMD=y\n"
"CONFIG_FEATURE_RTMINMAX=y\n"
"CONFIG_PASSWORD_MINLEN=6\n"
"CONFIG_MD5_SMALL=1\n"
"CONFIG_SHA3_SMALL=1\n"
"CONFIG_FEATURE_FAST_TOP=y\n"
"# CONFIG_FEATURE_ETC_NETWORKS is not set\n"
"CONFIG_FEATURE_USE_TERMIOS=y\n"
"CONFIG_FEATURE_EDITING=y\n"
"CONFIG_FEATURE_EDITING_MAX_LEN=1024\n"
"# CONFIG_FEATURE_EDITING_VI is not set\n"
"CONFIG_FEATURE_EDITING_HISTORY=255\n"
"CONFIG_FEATURE_EDITING_SAVEHISTORY=y\n"
"# CONFIG_FEATURE_EDITING_SAVE_ON_EXIT is not set\n"
"CONFIG_FEATURE_REVERSE_SEARCH=y\n"
"CONFIG_FEATURE_TAB_COMPLETION=y\n"
"# CONFIG_FEATURE_USERNAME_COMPLETION is not set\n"
"CONFIG_FEATURE_EDITING_FANCY_PROMPT=y\n"
"# CONFIG_FEATURE_EDITING_ASK_TERMINAL is not set\n"
"CONFIG_FEATURE_NON_POSIX_CP=y\n"
"# CONFIG_FEATURE_VERBOSE_CP_MESSAGE is not set\n"
"CONFIG_FEATURE_COPYBUF_KB=4\n"
"CONFIG_FEATURE_SKIP_ROOTFS=y\n"
"# CONFIG_MONOTONIC_SYSCALL is not set\n"
"CONFIG_IOCTL_HEX2STR_ERROR=y\n"
"CONFIG_FEATURE_HWIB=y\n"
"CONFIG_FEATURE_SEAMLESS_XZ=y\n"
"CONFIG_FEATURE_SEAMLESS_LZMA=y\n"
"CONFIG_FEATURE_SEAMLESS_BZ2=y\n"
"CONFIG_FEATURE_SEAMLESS_GZ=y\n"
"# CONFIG_FEATURE_SEAMLESS_Z is not set\n"
"# CONFIG_AR is not set\n"
"# CONFIG_FEATURE_AR_LONG_FILENAMES is not set\n"
"# CONFIG_FEATURE_AR_CREATE is not set\n"
"# CONFIG_UNCOMPRESS is not set\n"
"CONFIG_GUNZIP=y\n"
"CONFIG_BUNZIP2=y\n"
"CONFIG_UNLZMA=y\n"
"# CONFIG_FEATURE_LZMA_FAST is not set\n"
"CONFIG_LZMA=y\n"
"CONFIG_UNXZ=y\n"
"CONFIG_XZ=y\n"
"CONFIG_BZIP2=y\n"
"CONFIG_CPIO=y\n"
"CONFIG_FEATURE_CPIO_O=y\n"
"CONFIG_FEATURE_CPIO_P=y\n"
"# CONFIG_DPKG is not set\n"
"# CONFIG_DPKG_DEB is not set\n"
"# CONFIG_FEATURE_DPKG_DEB_EXTRACT_ONLY is not set\n"
"CONFIG_GZIP=y\n"
"CONFIG_FEATURE_GZIP_LONG_OPTIONS=y\n"
"CONFIG_GZIP_FAST=0\n"
"# CONFIG_FEATURE_GZIP_LEVELS is not set\n"
"CONFIG_LZOP=y\n"
"# CONFIG_LZOP_COMPR_HIGH is not set\n"
"CONFIG_RPM=y\n"
"CONFIG_RPM2CPIO=y\n"
"CONFIG_TAR=y\n"
"CONFIG_FEATURE_TAR_CREATE=y\n"
"CONFIG_FEATURE_TAR_AUTODETECT=y\n"
"CONFIG_FEATURE_TAR_FROM=y\n"
"CONFIG_FEATURE_TAR_OLDGNU_COMPATIBILITY=y\n"
"CONFIG_FEATURE_TAR_OLDSUN_COMPATIBILITY=y\n"
"CONFIG_FEATURE_TAR_GNU_EXTENSIONS=y\n"
"CONFIG_FEATURE_TAR_LONG_OPTIONS=y\n"
"CONFIG_FEATURE_TAR_TO_COMMAND=y\n"
"CONFIG_FEATURE_TAR_UNAME_GNAME=y\n"
"CONFIG_FEATURE_TAR_NOPRESERVE_TIME=y\n"
"# CONFIG_FEATURE_TAR_SELINUX is not set\n"
"CONFIG_UNZIP=y\n"
"CONFIG_BASENAME=y\n"
"CONFIG_CAT=y\n"
"CONFIG_DATE=y\n"
"CONFIG_FEATURE_DATE_ISOFMT=y\n"
"# CONFIG_FEATURE_DATE_NANO is not set\n"
"CONFIG_FEATURE_DATE_COMPAT=y\n"
"CONFIG_DD=y\n"
"CONFIG_FEATURE_DD_SIGNAL_HANDLING=y\n"
"CONFIG_FEATURE_DD_THIRD_STATUS_LINE=y\n"
"CONFIG_FEATURE_DD_IBS_OBS=y\n"
"CONFIG_FEATURE_DD_STATUS=y\n"
"CONFIG_HOSTID=y\n"
"CONFIG_ID=y\n"
"CONFIG_GROUPS=y\n"
"CONFIG_SHUF=y\n"
"CONFIG_SYNC=y\n"
"CONFIG_FEATURE_SYNC_FANCY=y\n"
"CONFIG_TEST=y\n"
"CONFIG_FEATURE_TEST_64=y\n"
"CONFIG_TOUCH=y\n"
"CONFIG_FEATURE_TOUCH_NODEREF=y\n"
"CONFIG_FEATURE_TOUCH_SUSV3=y\n"
"CONFIG_TR=y\n"
"CONFIG_FEATURE_TR_CLASSES=y\n"
"CONFIG_FEATURE_TR_EQUIV=y\n"
"CONFIG_TRUNCATE=y\n"
"CONFIG_UNLINK=y\n"
"CONFIG_BASE64=y\n"
"CONFIG_WHO=y\n"
"CONFIG_USERS=y\n"
"CONFIG_CAL=y\n"
"CONFIG_CATV=y\n"
"CONFIG_CHGRP=y\n"
"CONFIG_CHMOD=y\n"
"CONFIG_CHOWN=y\n"
"CONFIG_FEATURE_CHOWN_LONG_OPTIONS=y\n"
"CONFIG_CHROOT=y\n"
"CONFIG_CKSUM=y\n"
"CONFIG_COMM=y\n"
"CONFIG_CP=y\n"
"CONFIG_FEATURE_CP_LONG_OPTIONS=y\n"
"CONFIG_CUT=y\n"
"CONFIG_DF=y\n"
"CONFIG_FEATURE_DF_FANCY=y\n"
"CONFIG_DIRNAME=y\n"
"CONFIG_DOS2UNIX=y\n"
"CONFIG_UNIX2DOS=y\n"
"CONFIG_DU=y\n"
"CONFIG_FEATURE_DU_DEFAULT_BLOCKSIZE_1K=y\n"
"CONFIG_ECHO=y\n"
"CONFIG_FEATURE_FANCY_ECHO=y\n"
"CONFIG_ENV=y\n"
"CONFIG_FEATURE_ENV_LONG_OPTIONS=y\n"
"CONFIG_EXPAND=y\n"
"CONFIG_FEATURE_EXPAND_LONG_OPTIONS=y\n"
"CONFIG_EXPR=y\n"
"CONFIG_EXPR_MATH_SUPPORT_64=y\n"
"CONFIG_FALSE=y\n"
"CONFIG_FOLD=y\n"
"CONFIG_FSYNC=y\n"
"CONFIG_HEAD=y\n"
"CONFIG_FEATURE_FANCY_HEAD=y\n"
"CONFIG_INSTALL=y\n"
"CONFIG_FEATURE_INSTALL_LONG_OPTIONS=y\n"
"CONFIG_LN=y\n"
"CONFIG_LOGNAME=y\n"
"CONFIG_LS=y\n"
"CONFIG_FEATURE_LS_FILETYPES=y\n"
"CONFIG_FEATURE_LS_FOLLOWLINKS=y\n"
"CONFIG_FEATURE_LS_RECURSIVE=y\n"
"CONFIG_FEATURE_LS_SORTFILES=y\n"
"CONFIG_FEATURE_LS_TIMESTAMPS=y\n"
"CONFIG_FEATURE_LS_USERNAME=y\n"
"CONFIG_FEATURE_LS_COLOR=y\n"
"CONFIG_FEATURE_LS_COLOR_IS_DEFAULT=y\n"
"CONFIG_MD5SUM=y\n"
"CONFIG_MKDIR=y\n"
"CONFIG_FEATURE_MKDIR_LONG_OPTIONS=y\n"
"CONFIG_MKFIFO=y\n"
"CONFIG_MKNOD=y\n"
"CONFIG_MV=y\n"
"CONFIG_FEATURE_MV_LONG_OPTIONS=y\n"
"CONFIG_NICE=y\n"
"CONFIG_NOHUP=y\n"
"CONFIG_OD=y\n"
"CONFIG_PRINTENV=y\n"
"CONFIG_PRINTF=y\n"
"CONFIG_PWD=y\n"
"CONFIG_READLINK=y\n"
"CONFIG_FEATURE_READLINK_FOLLOW=y\n"
"CONFIG_REALPATH=y\n"
"CONFIG_RM=y\n"
"CONFIG_RMDIR=y\n"
"CONFIG_FEATURE_RMDIR_LONG_OPTIONS=y\n"
"CONFIG_SEQ=y\n"
"CONFIG_SHA1SUM=y\n"
"CONFIG_SHA256SUM=y\n"
"CONFIG_SHA512SUM=y\n"
"CONFIG_SHA3SUM=y\n"
"CONFIG_SLEEP=y\n"
"CONFIG_FEATURE_FANCY_SLEEP=y\n"
"CONFIG_FEATURE_FLOAT_SLEEP=y\n"
"CONFIG_SORT=y\n"
"CONFIG_FEATURE_SORT_BIG=y\n"
"CONFIG_SPLIT=y\n"
"CONFIG_FEATURE_SPLIT_FANCY=y\n"
"CONFIG_STAT=y\n"
"CONFIG_FEATURE_STAT_FORMAT=y\n"
"CONFIG_STTY=y\n"
"CONFIG_SUM=y\n"
"CONFIG_TAC=y\n"
"CONFIG_TAIL=y\n"
"CONFIG_FEATURE_FANCY_TAIL=y\n"
"CONFIG_TEE=y\n"
"CONFIG_FEATURE_TEE_USE_BLOCK_IO=y\n"
"CONFIG_TRUE=y\n"
"CONFIG_TTY=y\n"
"CONFIG_UNAME=y\n"
"CONFIG_UNAME_OSNAME=\"GNU/Linux\"\n"
"CONFIG_UNEXPAND=y\n"
"CONFIG_FEATURE_UNEXPAND_LONG_OPTIONS=y\n"
"CONFIG_UNIQ=y\n"
"CONFIG_USLEEP=y\n"
"CONFIG_UUDECODE=y\n"
"CONFIG_UUENCODE=y\n"
"CONFIG_WC=y\n"
"CONFIG_FEATURE_WC_LARGE=y\n"
"CONFIG_WHOAMI=y\n"
"CONFIG_YES=y\n"
"CONFIG_FEATURE_VERBOSE=y\n"
"CONFIG_FEATURE_PRESERVE_HARDLINKS=y\n"
"CONFIG_FEATURE_AUTOWIDTH=y\n"
"CONFIG_FEATURE_HUMAN_READABLE=y\n"
"CONFIG_FEATURE_MD5_SHA1_SUM_CHECK=y\n"
"CONFIG_CHVT=y\n"
"CONFIG_FGCONSOLE=y\n"
"CONFIG_CLEAR=y\n"
"CONFIG_DEALLOCVT=y\n"
"CONFIG_DUMPKMAP=y\n"
"CONFIG_KBD_MODE=y\n"
"CONFIG_LOADFONT=y\n"
"CONFIG_LOADKMAP=y\n"
"CONFIG_OPENVT=y\n"
"CONFIG_RESET=y\n"
"CONFIG_RESIZE=y\n"
"CONFIG_FEATURE_RESIZE_PRINT=y\n"
"CONFIG_SETCONSOLE=y\n"
"CONFIG_FEATURE_SETCONSOLE_LONG_OPTIONS=y\n"
"CONFIG_SETFONT=y\n"
"CONFIG_FEATURE_SETFONT_TEXTUAL_MAP=y\n"
"CONFIG_DEFAULT_SETFONT_DIR=\"\"\n"
"CONFIG_SETKEYCODES=y\n"
"CONFIG_SETLOGCONS=y\n"
"CONFIG_SHOWKEY=y\n"
"CONFIG_FEATURE_LOADFONT_PSF2=y\n"
"CONFIG_FEATURE_LOADFONT_RAW=y\n"
"CONFIG_MKTEMP=y\n"
"CONFIG_PIPE_PROGRESS=y\n"
"CONFIG_RUN_PARTS=y\n"
"CONFIG_FEATURE_RUN_PARTS_LONG_OPTIONS=y\n"
"CONFIG_FEATURE_RUN_PARTS_FANCY=y\n"
"CONFIG_START_STOP_DAEMON=y\n"
"CONFIG_FEATURE_START_STOP_DAEMON_FANCY=y\n"
"CONFIG_FEATURE_START_STOP_DAEMON_LONG_OPTIONS=y\n"
"CONFIG_WHICH=y\n"
"CONFIG_AWK=y\n"
"CONFIG_FEATURE_AWK_LIBM=y\n"
"CONFIG_FEATURE_AWK_GNU_EXTENSIONS=y\n"
"CONFIG_CMP=y\n"
"CONFIG_DIFF=y\n"
"CONFIG_FEATURE_DIFF_LONG_OPTIONS=y\n"
"CONFIG_FEATURE_DIFF_DIR=y\n"
"CONFIG_ED=y\n"
"CONFIG_PATCH=y\n"
"CONFIG_SED=y\n"
"CONFIG_VI=y\n"
"CONFIG_FEATURE_VI_MAX_LEN=4096\n"
"# CONFIG_FEATURE_VI_8BIT is not set\n"
"CONFIG_FEATURE_VI_COLON=y\n"
"CONFIG_FEATURE_VI_YANKMARK=y\n"
"CONFIG_FEATURE_VI_SEARCH=y\n"
"# CONFIG_FEATURE_VI_REGEX_SEARCH is not set\n"
"CONFIG_FEATURE_VI_USE_SIGNALS=y\n"
"CONFIG_FEATURE_VI_DOT_CMD=y\n"
"CONFIG_FEATURE_VI_READONLY=y\n"
"CONFIG_FEATURE_VI_SETOPTS=y\n"
"CONFIG_FEATURE_VI_SET=y\n"
"CONFIG_FEATURE_VI_WIN_RESIZE=y\n"
"CONFIG_FEATURE_VI_ASK_TERMINAL=y\n"
"CONFIG_FEATURE_VI_UNDO=y\n"
"CONFIG_FEATURE_VI_UNDO_QUEUE=y\n"
"CONFIG_FEATURE_VI_UNDO_QUEUE_MAX=256\n"
"CONFIG_FEATURE_ALLOW_EXEC=y\n"
"CONFIG_FIND=y\n"
"CONFIG_FEATURE_FIND_PRINT0=y\n"
"CONFIG_FEATURE_FIND_MTIME=y\n"
"CONFIG_FEATURE_FIND_MMIN=y\n"
"CONFIG_FEATURE_FIND_PERM=y\n"
"CONFIG_FEATURE_FIND_TYPE=y\n"
"CONFIG_FEATURE_FIND_XDEV=y\n"
"CONFIG_FEATURE_FIND_MAXDEPTH=y\n"
"CONFIG_FEATURE_FIND_NEWER=y\n"
"CONFIG_FEATURE_FIND_INUM=y\n"
"CONFIG_FEATURE_FIND_EXEC=y\n"
"CONFIG_FEATURE_FIND_EXEC_PLUS=y\n"
"CONFIG_FEATURE_FIND_USER=y\n"
"CONFIG_FEATURE_FIND_GROUP=y\n"
"CONFIG_FEATURE_FIND_NOT=y\n"
"CONFIG_FEATURE_FIND_DEPTH=y\n"
"CONFIG_FEATURE_FIND_PAREN=y\n"
"CONFIG_FEATURE_FIND_SIZE=y\n"
"CONFIG_FEATURE_FIND_PRUNE=y\n"
"CONFIG_FEATURE_FIND_DELETE=y\n"
"CONFIG_FEATURE_FIND_PATH=y\n"
"CONFIG_FEATURE_FIND_REGEX=y\n"
"# CONFIG_FEATURE_FIND_CONTEXT is not set\n"
"CONFIG_FEATURE_FIND_LINKS=y\n"
"CONFIG_GREP=y\n"
"CONFIG_FEATURE_GREP_EGREP_ALIAS=y\n"
"CONFIG_FEATURE_GREP_FGREP_ALIAS=y\n"
"CONFIG_FEATURE_GREP_CONTEXT=y\n"
"CONFIG_XARGS=y\n"
"CONFIG_FEATURE_XARGS_SUPPORT_CONFIRMATION=y\n"
"CONFIG_FEATURE_XARGS_SUPPORT_QUOTES=y\n"
"CONFIG_FEATURE_XARGS_SUPPORT_TERMOPT=y\n"
"CONFIG_FEATURE_XARGS_SUPPORT_ZERO_TERM=y\n"
"CONFIG_FEATURE_XARGS_SUPPORT_REPL_STR=y\n"
"CONFIG_BOOTCHARTD=y\n"
"CONFIG_FEATURE_BOOTCHARTD_BLOATED_HEADER=y\n"
"CONFIG_FEATURE_BOOTCHARTD_CONFIG_FILE=y\n"
"CONFIG_HALT=y\n"
"# CONFIG_FEATURE_CALL_TELINIT is not set\n"
"CONFIG_TELINIT_PATH=\"\"\n"
"CONFIG_INIT=y\n"
"CONFIG_FEATURE_USE_INITTAB=y\n"
"# CONFIG_FEATURE_KILL_REMOVED is not set\n"
"CONFIG_FEATURE_KILL_DELAY=0\n"
"CONFIG_FEATURE_INIT_SCTTY=y\n"
"CONFIG_FEATURE_INIT_SYSLOG=y\n"
"CONFIG_FEATURE_EXTRA_QUIET=y\n"
"CONFIG_FEATURE_INIT_COREDUMPS=y\n"
"CONFIG_FEATURE_INITRD=y\n"
"CONFIG_INIT_TERMINAL_TYPE=\"linux\"\n"
"CONFIG_MESG=y\n"
"CONFIG_FEATURE_MESG_ENABLE_ONLY_GROUP=y\n"
"CONFIG_ADD_SHELL=y\n"
"CONFIG_REMOVE_SHELL=y\n"
"CONFIG_FEATURE_SHADOWPASSWDS=y\n"
"CONFIG_USE_BB_PWD_GRP=y\n"
"CONFIG_USE_BB_SHADOW=y\n"
"CONFIG_USE_BB_CRYPT=y\n"
"CONFIG_USE_BB_CRYPT_SHA=y\n"
"CONFIG_ADDUSER=y\n"
"CONFIG_FEATURE_ADDUSER_LONG_OPTIONS=y\n"
"# CONFIG_FEATURE_CHECK_NAMES is not set\n"
"CONFIG_LAST_ID=60000\n"
"CONFIG_FIRST_SYSTEM_ID=100\n"
"CONFIG_LAST_SYSTEM_ID=999\n"
"CONFIG_ADDGROUP=y\n"
"CONFIG_FEATURE_ADDGROUP_LONG_OPTIONS=y\n"
"CONFIG_FEATURE_ADDUSER_TO_GROUP=y\n"
"CONFIG_DELUSER=y\n"
"CONFIG_DELGROUP=y\n"
"CONFIG_FEATURE_DEL_USER_FROM_GROUP=y\n"
"CONFIG_GETTY=y\n"
"CONFIG_LOGIN=y\n"
"# CONFIG_LOGIN_SESSION_AS_CHILD is not set\n"
"CONFIG_LOGIN_SCRIPTS=y\n"
"CONFIG_FEATURE_NOLOGIN=y\n"
"CONFIG_FEATURE_SECURETTY=y\n"
"CONFIG_PASSWD=y\n"
"CONFIG_FEATURE_PASSWD_WEAK_CHECK=y\n"
"CONFIG_CRYPTPW=y\n"
"CONFIG_CHPASSWD=y\n"
"CONFIG_FEATURE_DEFAULT_PASSWD_ALGO=\"des\"\n"
"CONFIG_SU=y\n"
"CONFIG_FEATURE_SU_SYSLOG=y\n"
"CONFIG_FEATURE_SU_CHECKS_SHELLS=y\n"
"CONFIG_SULOGIN=y\n"
"CONFIG_VLOCK=y\n"
"CONFIG_CHATTR=y\n"
"CONFIG_FSCK=y\n"
"CONFIG_LSATTR=y\n"
"# CONFIG_TUNE2FS is not set\n"
"CONFIG_MODINFO=y\n"
"CONFIG_MODPROBE_SMALL=y\n"
"CONFIG_FEATURE_MODPROBE_SMALL_OPTIONS_ON_CMDLINE=y\n"
"CONFIG_FEATURE_MODPROBE_SMALL_CHECK_ALREADY_LOADED=y\n"
"# CONFIG_INSMOD is not set\n"
"# CONFIG_RMMOD is not set\n"
"# CONFIG_LSMOD is not set\n"
"# CONFIG_FEATURE_LSMOD_PRETTY_2_6_OUTPUT is not set\n"
"# CONFIG_MODPROBE is not set\n"
"# CONFIG_FEATURE_MODPROBE_BLACKLIST is not set\n"
"# CONFIG_DEPMOD is not set\n"
"# CONFIG_FEATURE_2_4_MODULES is not set\n"
"# CONFIG_FEATURE_INSMOD_TRY_MMAP is not set\n"
"# CONFIG_FEATURE_INSMOD_VERSION_CHECKING is not set\n"
"# CONFIG_FEATURE_INSMOD_KSYMOOPS_SYMBOLS is not set\n"
"# CONFIG_FEATURE_INSMOD_LOADINKMEM is not set\n"
"# CONFIG_FEATURE_INSMOD_LOAD_MAP is not set\n"
"# CONFIG_FEATURE_INSMOD_LOAD_MAP_FULL is not set\n"
"# CONFIG_FEATURE_CHECK_TAINTED_MODULE is not set\n"
"# CONFIG_FEATURE_MODUTILS_ALIAS is not set\n"
"# CONFIG_FEATURE_MODUTILS_SYMBOLS is not set\n"
"CONFIG_DEFAULT_MODULES_DIR=\"/lib/modules\"\n"
"CONFIG_DEFAULT_DEPMOD_FILE=\"modules.dep\"\n"
"CONFIG_BLOCKDEV=y\n"
"CONFIG_FATATTR=y\n"
"CONFIG_FSTRIM=y\n"
"CONFIG_MDEV=y\n"
"CONFIG_FEATURE_MDEV_CONF=y\n"
"CONFIG_FEATURE_MDEV_RENAME=y\n"
"CONFIG_FEATURE_MDEV_RENAME_REGEXP=y\n"
"CONFIG_FEATURE_MDEV_EXEC=y\n"
"CONFIG_FEATURE_MDEV_LOAD_FIRMWARE=y\n"
"CONFIG_MOUNT=y\n"
"CONFIG_FEATURE_MOUNT_FAKE=y\n"
"CONFIG_FEATURE_MOUNT_VERBOSE=y\n"
"# CONFIG_FEATURE_MOUNT_HELPERS is not set\n"
"CONFIG_FEATURE_MOUNT_LABEL=y\n"
"# CONFIG_FEATURE_MOUNT_NFS is not set\n"
"CONFIG_FEATURE_MOUNT_CIFS=y\n"
"CONFIG_FEATURE_MOUNT_FLAGS=y\n"
"CONFIG_FEATURE_MOUNT_FSTAB=y\n"
"CONFIG_FEATURE_MOUNT_OTHERTAB=y\n"
"CONFIG_REV=y\n"
"CONFIG_UEVENT=y\n"
"CONFIG_ACPID=y\n"
"CONFIG_FEATURE_ACPID_COMPAT=y\n"
"CONFIG_BLKID=y\n"
"# CONFIG_FEATURE_BLKID_TYPE is not set\n"
"CONFIG_DMESG=y\n"
"CONFIG_FEATURE_DMESG_PRETTY=y\n"
"CONFIG_FBSET=y\n"
"CONFIG_FEATURE_FBSET_FANCY=y\n"
"CONFIG_FEATURE_FBSET_READMODE=y\n"
"CONFIG_FDFLUSH=y\n"
"CONFIG_FDFORMAT=y\n"
"CONFIG_FDISK=y\n"
"# CONFIG_FDISK_SUPPORT_LARGE_DISKS is not set\n"
"CONFIG_FEATURE_FDISK_WRITABLE=y\n"
"# CONFIG_FEATURE_AIX_LABEL is not set\n"
"# CONFIG_FEATURE_SGI_LABEL is not set\n"
"# CONFIG_FEATURE_SUN_LABEL is not set\n"
"# CONFIG_FEATURE_OSF_LABEL is not set\n"
"# CONFIG_FEATURE_GPT_LABEL is not set\n"
"CONFIG_FEATURE_FDISK_ADVANCED=y\n"
"CONFIG_FINDFS=y\n"
"CONFIG_FLOCK=y\n"
"CONFIG_FREERAMDISK=y\n"
"CONFIG_FSCK_MINIX=y\n"
"CONFIG_MKFS_EXT2=y\n"
"CONFIG_MKFS_MINIX=y\n"
"CONFIG_FEATURE_MINIX2=y\n"
"# CONFIG_MKFS_REISER is not set\n"
"CONFIG_MKFS_VFAT=y\n"
"CONFIG_GETOPT=y\n"
"CONFIG_FEATURE_GETOPT_LONG=y\n"
"CONFIG_HEXDUMP=y\n"
"CONFIG_FEATURE_HEXDUMP_REVERSE=y\n"
"CONFIG_HD=y\n"
"CONFIG_HWCLOCK=y\n"
"CONFIG_FEATURE_HWCLOCK_LONG_OPTIONS=y\n"
"# CONFIG_FEATURE_HWCLOCK_ADJTIME_FHS is not set\n"
"CONFIG_IPCRM=y\n"
"CONFIG_IPCS=y\n"
"CONFIG_LOSETUP=y\n"
"CONFIG_LSPCI=y\n"
"CONFIG_LSUSB=y\n"
"CONFIG_MKSWAP=y\n"
"CONFIG_FEATURE_MKSWAP_UUID=y\n"
"CONFIG_MORE=y\n"
"CONFIG_PIVOT_ROOT=y\n"
"CONFIG_RDATE=y\n"
"CONFIG_RDEV=y\n"
"CONFIG_READPROFILE=y\n"
"CONFIG_RTCWAKE=y\n"
"CONFIG_SCRIPT=y\n"
"CONFIG_SCRIPTREPLAY=y\n"
"CONFIG_SETARCH=y\n"
"CONFIG_SWAPONOFF=y\n"
"CONFIG_FEATURE_SWAPON_DISCARD=y\n"
"CONFIG_FEATURE_SWAPON_PRI=y\n"
"CONFIG_SWITCH_ROOT=y\n"
"CONFIG_UMOUNT=y\n"
"CONFIG_FEATURE_UMOUNT_ALL=y\n"
"CONFIG_FEATURE_MOUNT_LOOP=y\n"
"CONFIG_FEATURE_MOUNT_LOOP_CREATE=y\n"
"# CONFIG_FEATURE_MTAB_SUPPORT is not set\n"
"CONFIG_VOLUMEID=y\n"
"CONFIG_FEATURE_VOLUMEID_BTRFS=y\n"
"CONFIG_FEATURE_VOLUMEID_CRAMFS=y\n"
"CONFIG_FEATURE_VOLUMEID_EXFAT=y\n"
"CONFIG_FEATURE_VOLUMEID_EXT=y\n"
"CONFIG_FEATURE_VOLUMEID_F2FS=y\n"
"CONFIG_FEATURE_VOLUMEID_FAT=y\n"
"CONFIG_FEATURE_VOLUMEID_HFS=y\n"
"CONFIG_FEATURE_VOLUMEID_ISO9660=y\n"
"CONFIG_FEATURE_VOLUMEID_JFS=y\n"
"CONFIG_FEATURE_VOLUMEID_LINUXRAID=y\n"
"CONFIG_FEATURE_VOLUMEID_LINUXSWAP=y\n"
"CONFIG_FEATURE_VOLUMEID_LUKS=y\n"
"CONFIG_FEATURE_VOLUMEID_NILFS=y\n"
"CONFIG_FEATURE_VOLUMEID_NTFS=y\n"
"CONFIG_FEATURE_VOLUMEID_OCFS2=y\n"
"CONFIG_FEATURE_VOLUMEID_REISERFS=y\n"
"CONFIG_FEATURE_VOLUMEID_ROMFS=y\n"
"# CONFIG_FEATURE_VOLUMEID_SQUASHFS is not set\n"
"CONFIG_FEATURE_VOLUMEID_SYSV=y\n"
"CONFIG_FEATURE_VOLUMEID_UDF=y\n"
"CONFIG_FEATURE_VOLUMEID_XFS=y\n"
"CONFIG_CONSPY=y\n"
"CONFIG_CROND=y\n"
"CONFIG_FEATURE_CROND_D=y\n"
"CONFIG_FEATURE_CROND_CALL_SENDMAIL=y\n"
"CONFIG_FEATURE_CROND_DIR=\"/var/spool/cron\"\n"
"CONFIG_I2CGET=y\n"
"CONFIG_I2CSET=y\n"
"CONFIG_I2CDUMP=y\n"
"CONFIG_I2CDETECT=y\n"
"CONFIG_LESS=y\n"
"CONFIG_FEATURE_LESS_MAXLINES=9999999\n"
"CONFIG_FEATURE_LESS_BRACKETS=y\n"
"CONFIG_FEATURE_LESS_FLAGS=y\n"
"CONFIG_FEATURE_LESS_TRUNCATE=y\n"
"CONFIG_FEATURE_LESS_MARKS=y\n"
"CONFIG_FEATURE_LESS_REGEXP=y\n"
"CONFIG_FEATURE_LESS_WINCH=y\n"
"CONFIG_FEATURE_LESS_ASK_TERMINAL=y\n"
"CONFIG_FEATURE_LESS_DASHCMD=y\n"
"CONFIG_FEATURE_LESS_LINENUMS=y\n"
"CONFIG_NANDWRITE=y\n"
"CONFIG_NANDDUMP=y\n"
"# CONFIG_RFKILL is not set\n"
"CONFIG_SETSERIAL=y\n"
"# CONFIG_TASKSET is not set\n"
"# CONFIG_FEATURE_TASKSET_FANCY is not set\n"
"CONFIG_UBIATTACH=y\n"
"CONFIG_UBIDETACH=y\n"
"CONFIG_UBIMKVOL=y\n"
"CONFIG_UBIRMVOL=y\n"
"CONFIG_UBIRSVOL=y\n"
"CONFIG_UBIUPDATEVOL=y\n"
"CONFIG_WALL=y\n"
"CONFIG_ADJTIMEX=y\n"
"# CONFIG_BBCONFIG is not set\n"
"# CONFIG_FEATURE_COMPRESS_BBCONFIG is not set\n"
"CONFIG_BEEP=y\n"
"CONFIG_FEATURE_BEEP_FREQ=4000\n"
"CONFIG_FEATURE_BEEP_LENGTH_MS=30\n"
"CONFIG_CHAT=y\n"
"CONFIG_FEATURE_CHAT_NOFAIL=y\n"
"# CONFIG_FEATURE_CHAT_TTY_HIFI is not set\n"
"CONFIG_FEATURE_CHAT_IMPLICIT_CR=y\n"
"CONFIG_FEATURE_CHAT_SWALLOW_OPTS=y\n"
"CONFIG_FEATURE_CHAT_SEND_ESCAPES=y\n"
"CONFIG_FEATURE_CHAT_VAR_ABORT_LEN=y\n"
"CONFIG_FEATURE_CHAT_CLR_ABORT=y\n"
"CONFIG_CHRT=y\n"
"CONFIG_CRONTAB=y\n"
"CONFIG_DC=y\n"
"CONFIG_FEATURE_DC_LIBM=y\n"
"# CONFIG_DEVFSD is not set\n"
"# CONFIG_DEVFSD_MODLOAD is not set\n"
"# CONFIG_DEVFSD_FG_NP is not set\n"
"# CONFIG_DEVFSD_VERBOSE is not set\n"
"# CONFIG_FEATURE_DEVFS is not set\n"
"CONFIG_DEVMEM=y\n"
"CONFIG_EJECT=y\n"
"CONFIG_FEATURE_EJECT_SCSI=y\n"
"CONFIG_FBSPLASH=y\n"
"# CONFIG_FLASHCP is not set\n"
"# CONFIG_FLASH_LOCK is not set\n"
"# CONFIG_FLASH_UNLOCK is not set\n"
"# CONFIG_FLASH_ERASEALL is not set\n"
"CONFIG_IONICE=y\n"
"# CONFIG_INOTIFYD is not set\n"
"CONFIG_LAST=y\n"
"# CONFIG_FEATURE_LAST_SMALL is not set\n"
"CONFIG_FEATURE_LAST_FANCY=y\n"
"CONFIG_HDPARM=y\n"
"CONFIG_FEATURE_HDPARM_GET_IDENTITY=y\n"
"CONFIG_FEATURE_HDPARM_HDIO_SCAN_HWIF=y\n"
"CONFIG_FEATURE_HDPARM_HDIO_UNREGISTER_HWIF=y\n"
"CONFIG_FEATURE_HDPARM_HDIO_DRIVE_RESET=y\n"
"CONFIG_FEATURE_HDPARM_HDIO_TRISTATE_HWIF=y\n"
"CONFIG_FEATURE_HDPARM_HDIO_GETSET_DMA=y\n"
"CONFIG_MAKEDEVS=y\n"
"# CONFIG_FEATURE_MAKEDEVS_LEAF is not set\n"
"CONFIG_FEATURE_MAKEDEVS_TABLE=y\n"
"CONFIG_MAN=y\n"
"CONFIG_MICROCOM=y\n"
"CONFIG_MOUNTPOINT=y\n"
"CONFIG_MT=y\n"
"CONFIG_RAIDAUTORUN=y\n"
"CONFIG_READAHEAD=y\n"
"CONFIG_RUNLEVEL=y\n"
"CONFIG_RX=y\n"
"CONFIG_SETSID=y\n"
"CONFIG_STRINGS=y\n"
"CONFIG_TIME=y\n"
"CONFIG_TIMEOUT=y\n"
"CONFIG_TTYSIZE=y\n"
"CONFIG_VOLNAME=y\n"
"CONFIG_WATCHDOG=y\n"
"CONFIG_NAMEIF=y\n"
"CONFIG_FEATURE_NAMEIF_EXTENDED=y\n"
"CONFIG_NBDCLIENT=y\n"
"CONFIG_NC=y\n"
"CONFIG_NC_SERVER=y\n"
"CONFIG_NC_EXTRA=y\n"
"# CONFIG_NC_110_COMPAT is not set\n"
"CONFIG_PING=y\n"
"CONFIG_PING6=y\n"
"CONFIG_FEATURE_FANCY_PING=y\n"
"CONFIG_WGET=y\n"
"CONFIG_FEATURE_WGET_STATUSBAR=y\n"
"CONFIG_FEATURE_WGET_AUTHENTICATION=y\n"
"CONFIG_FEATURE_WGET_LONG_OPTIONS=y\n"
"CONFIG_FEATURE_WGET_TIMEOUT=y\n"
"CONFIG_FEATURE_WGET_OPENSSL=y\n"
"CONFIG_FEATURE_WGET_SSL_HELPER=y\n"
"CONFIG_WHOIS=y\n"
"CONFIG_FEATURE_IPV6=y\n"
"# CONFIG_FEATURE_UNIX_LOCAL is not set\n"
"CONFIG_FEATURE_PREFER_IPV4_ADDRESS=y\n"
"# CONFIG_VERBOSE_RESOLUTION_ERRORS is not set\n"
"CONFIG_ARP=y\n"
"CONFIG_ARPING=y\n"
"CONFIG_BRCTL=y\n"
"CONFIG_FEATURE_BRCTL_FANCY=y\n"
"CONFIG_FEATURE_BRCTL_SHOW=y\n"
"CONFIG_DNSD=y\n"
"CONFIG_ETHER_WAKE=y\n"
"CONFIG_FAKEIDENTD=y\n"
"CONFIG_FTPD=y\n"
"CONFIG_FEATURE_FTP_WRITE=y\n"
"CONFIG_FEATURE_FTPD_ACCEPT_BROKEN_LIST=y\n"
"CONFIG_FEATURE_FTP_AUTHENTICATION=y\n"
"CONFIG_FTPGET=y\n"
"CONFIG_FTPPUT=y\n"
"CONFIG_FEATURE_FTPGETPUT_LONG_OPTIONS=y\n"
"CONFIG_HOSTNAME=y\n"
"CONFIG_HTTPD=y\n"
"CONFIG_FEATURE_HTTPD_RANGES=y\n"
"CONFIG_FEATURE_HTTPD_SETUID=y\n"
"CONFIG_FEATURE_HTTPD_BASIC_AUTH=y\n"
"CONFIG_FEATURE_HTTPD_AUTH_MD5=y\n"
"CONFIG_FEATURE_HTTPD_CGI=y\n"
"CONFIG_FEATURE_HTTPD_CONFIG_WITH_SCRIPT_INTERPR=y\n"
"CONFIG_FEATURE_HTTPD_SET_REMOTE_PORT_TO_ENV=y\n"
"CONFIG_FEATURE_HTTPD_ENCODE_URL_STR=y\n"
"CONFIG_FEATURE_HTTPD_ERROR_PAGES=y\n"
"CONFIG_FEATURE_HTTPD_PROXY=y\n"
"CONFIG_FEATURE_HTTPD_GZIP=y\n"
"CONFIG_IFCONFIG=y\n"
"CONFIG_FEATURE_IFCONFIG_STATUS=y\n"
"CONFIG_FEATURE_IFCONFIG_SLIP=y\n"
"CONFIG_FEATURE_IFCONFIG_MEMSTART_IOADDR_IRQ=y\n"
"CONFIG_FEATURE_IFCONFIG_HW=y\n"
"CONFIG_FEATURE_IFCONFIG_BROADCAST_PLUS=y\n"
"CONFIG_IFENSLAVE=y\n"
"CONFIG_IFPLUGD=y\n"
"CONFIG_IFUPDOWN=y\n"
"CONFIG_IFUPDOWN_IFSTATE_PATH=\"/var/run/ifstate\"\n"
"CONFIG_FEATURE_IFUPDOWN_IP=y\n"
"CONFIG_FEATURE_IFUPDOWN_IP_BUILTIN=y\n"
"# CONFIG_FEATURE_IFUPDOWN_IFCONFIG_BUILTIN is not set\n"
"CONFIG_FEATURE_IFUPDOWN_IPV4=y\n"
"CONFIG_FEATURE_IFUPDOWN_IPV6=y\n"
"CONFIG_FEATURE_IFUPDOWN_MAPPING=y\n"
"# CONFIG_FEATURE_IFUPDOWN_EXTERNAL_DHCP is not set\n"
"CONFIG_INETD=y\n"
"CONFIG_FEATURE_INETD_SUPPORT_BUILTIN_ECHO=y\n"
"CONFIG_FEATURE_INETD_SUPPORT_BUILTIN_DISCARD=y\n"
"CONFIG_FEATURE_INETD_SUPPORT_BUILTIN_TIME=y\n"
"CONFIG_FEATURE_INETD_SUPPORT_BUILTIN_DAYTIME=y\n"
"CONFIG_FEATURE_INETD_SUPPORT_BUILTIN_CHARGEN=y\n"
"CONFIG_FEATURE_INETD_RPC=y\n"
"CONFIG_IP=y\n"
"CONFIG_FEATURE_IP_ADDRESS=y\n"
"CONFIG_FEATURE_IP_LINK=y\n"
"CONFIG_FEATURE_IP_ROUTE=y\n"
"CONFIG_FEATURE_IP_ROUTE_DIR=\"/etc/iproute2\"\n"
"CONFIG_FEATURE_IP_TUNNEL=y\n"
"CONFIG_FEATURE_IP_RULE=y\n"
"CONFIG_FEATURE_IP_SHORT_FORMS=y\n"
"# CONFIG_FEATURE_IP_RARE_PROTOCOLS is not set\n"
"CONFIG_IPADDR=y\n"
"CONFIG_IPLINK=y\n"
"CONFIG_IPROUTE=y\n"
"CONFIG_IPTUNNEL=y\n"
"CONFIG_IPRULE=y\n"
"CONFIG_IPCALC=y\n"
"CONFIG_FEATURE_IPCALC_FANCY=y\n"
"CONFIG_FEATURE_IPCALC_LONG_OPTIONS=y\n"
"CONFIG_NETSTAT=y\n"
"CONFIG_FEATURE_NETSTAT_WIDE=y\n"
"CONFIG_FEATURE_NETSTAT_PRG=y\n"
"CONFIG_NSLOOKUP=y\n"
"CONFIG_NTPD=y\n"
"CONFIG_FEATURE_NTPD_SERVER=y\n"
"CONFIG_FEATURE_NTPD_CONF=y\n"
"CONFIG_PSCAN=y\n"
"CONFIG_ROUTE=y\n"
"CONFIG_SLATTACH=y\n"
"CONFIG_TCPSVD=y\n"
"CONFIG_TELNET=y\n"
"CONFIG_FEATURE_TELNET_TTYPE=y\n"
"CONFIG_FEATURE_TELNET_AUTOLOGIN=y\n"
"CONFIG_TELNETD=y\n"
"CONFIG_FEATURE_TELNETD_STANDALONE=y\n"
"CONFIG_FEATURE_TELNETD_INETD_WAIT=y\n"
"CONFIG_TFTP=y\n"
"CONFIG_TFTPD=y\n"
"CONFIG_FEATURE_TFTP_GET=y\n"
"CONFIG_FEATURE_TFTP_PUT=y\n"
"CONFIG_FEATURE_TFTP_BLOCKSIZE=y\n"
"CONFIG_FEATURE_TFTP_PROGRESS_BAR=y\n"
"# CONFIG_TFTP_DEBUG is not set\n"
"CONFIG_TRACEROUTE=y\n"
"CONFIG_TRACEROUTE6=y\n"
"CONFIG_FEATURE_TRACEROUTE_VERBOSE=y\n"
"# CONFIG_FEATURE_TRACEROUTE_SOURCE_ROUTE is not set\n"
"# CONFIG_FEATURE_TRACEROUTE_USE_ICMP is not set\n"
"CONFIG_TUNCTL=y\n"
"CONFIG_FEATURE_TUNCTL_UG=y\n"
"# CONFIG_UDHCPC6 is not set\n"
"CONFIG_UDHCPD=y\n"
"CONFIG_DHCPRELAY=y\n"
"CONFIG_DUMPLEASES=y\n"
"CONFIG_FEATURE_UDHCPD_WRITE_LEASES_EARLY=y\n"
"# CONFIG_FEATURE_UDHCPD_BASE_IP_ON_MAC is not set\n"
"CONFIG_DHCPD_LEASES_FILE=\"/var/lib/misc/udhcpd.leases\"\n"
"CONFIG_UDHCPC=y\n"
"CONFIG_FEATURE_UDHCPC_ARPING=y\n"
"CONFIG_FEATURE_UDHCPC_SANITIZEOPT=y\n"
"# CONFIG_FEATURE_UDHCP_PORT is not set\n"
"CONFIG_UDHCP_DEBUG=9\n"
"CONFIG_FEATURE_UDHCP_RFC3397=y\n"
"CONFIG_FEATURE_UDHCP_8021Q=y\n"
"CONFIG_UDHCPC_DEFAULT_SCRIPT=\"/usr/share/udhcpc/default.script\"\n"
"CONFIG_UDHCPC_SLACK_FOR_BUGGY_SERVERS=80\n"
"CONFIG_IFUPDOWN_UDHCPC_CMD_OPTIONS=\"-R -n\"\n"
"CONFIG_UDPSVD=y\n"
"CONFIG_VCONFIG=y\n"
"CONFIG_ZCIP=y\n"
"CONFIG_LPD=y\n"
"CONFIG_LPR=y\n"
"CONFIG_LPQ=y\n"
"CONFIG_MAKEMIME=y\n"
"CONFIG_FEATURE_MIME_CHARSET=\"us-ascii\"\n"
"CONFIG_POPMAILDIR=y\n"
"CONFIG_FEATURE_POPMAILDIR_DELIVERY=y\n"
"CONFIG_REFORMIME=y\n"
"CONFIG_FEATURE_REFORMIME_COMPAT=y\n"
"CONFIG_SENDMAIL=y\n"
"CONFIG_IOSTAT=y\n"
"CONFIG_LSOF=y\n"
"CONFIG_MPSTAT=y\n"
"CONFIG_NMETER=y\n"
"CONFIG_PMAP=y\n"
"CONFIG_POWERTOP=y\n"
"CONFIG_PSTREE=y\n"
"CONFIG_PWDX=y\n"
"CONFIG_SMEMCAP=y\n"
"CONFIG_TOP=y\n"
"CONFIG_FEATURE_TOP_CPU_USAGE_PERCENTAGE=y\n"
"CONFIG_FEATURE_TOP_CPU_GLOBAL_PERCENTS=y\n"
"CONFIG_FEATURE_TOP_SMP_CPU=y\n"
"CONFIG_FEATURE_TOP_DECIMALS=y\n"
"CONFIG_FEATURE_TOP_SMP_PROCESS=y\n"
"CONFIG_FEATURE_TOPMEM=y\n"
"CONFIG_UPTIME=y\n"
"CONFIG_FEATURE_UPTIME_UTMP_SUPPORT=y\n"
"CONFIG_FREE=y\n"
"CONFIG_FUSER=y\n"
"CONFIG_KILL=y\n"
"CONFIG_KILLALL=y\n"
"CONFIG_KILLALL5=y\n"
"CONFIG_PGREP=y\n"
"CONFIG_PIDOF=y\n"
"CONFIG_FEATURE_PIDOF_SINGLE=y\n"
"CONFIG_FEATURE_PIDOF_OMIT=y\n"
"CONFIG_PKILL=y\n"
"CONFIG_PS=y\n"
"# CONFIG_FEATURE_PS_WIDE is not set\n"
"# CONFIG_FEATURE_PS_LONG is not set\n"
"CONFIG_FEATURE_PS_TIME=y\n"
"CONFIG_FEATURE_PS_ADDITIONAL_COLUMNS=y\n"
"# CONFIG_FEATURE_PS_UNUSUAL_SYSTEMS is not set\n"
"CONFIG_RENICE=y\n"
"CONFIG_BB_SYSCTL=y\n"
"CONFIG_FEATURE_SHOW_THREADS=y\n"
"CONFIG_WATCH=y\n"
"CONFIG_RUNSV=y\n"
"CONFIG_RUNSVDIR=y\n"
"# CONFIG_FEATURE_RUNSVDIR_LOG is not set\n"
"CONFIG_SV=y\n"
"CONFIG_SV_DEFAULT_SERVICE_DIR=\"/var/service\"\n"
"CONFIG_SVLOGD=y\n"
"CONFIG_CHPST=y\n"
"CONFIG_SETUIDGID=y\n"
"CONFIG_ENVUIDGID=y\n"
"CONFIG_ENVDIR=y\n"
"CONFIG_SOFTLIMIT=y\n"
"# CONFIG_CHCON is not set\n"
"# CONFIG_FEATURE_CHCON_LONG_OPTIONS is not set\n"
"# CONFIG_GETENFORCE is not set\n"
"# CONFIG_GETSEBOOL is not set\n"
"# CONFIG_LOAD_POLICY is not set\n"
"# CONFIG_MATCHPATHCON is not set\n"
"# CONFIG_RESTORECON is not set\n"
"# CONFIG_RUNCON is not set\n"
"# CONFIG_FEATURE_RUNCON_LONG_OPTIONS is not set\n"
"# CONFIG_SELINUXENABLED is not set\n"
"# CONFIG_SETENFORCE is not set\n"
"# CONFIG_SETFILES is not set\n"
"# CONFIG_FEATURE_SETFILES_CHECK_OPTION is not set\n"
"# CONFIG_SETSEBOOL is not set\n"
"# CONFIG_SESTATUS is not set\n"
"CONFIG_ASH=y\n"
"CONFIG_ASH_BASH_COMPAT=y\n"
"# CONFIG_ASH_IDLE_TIMEOUT is not set\n"
"CONFIG_ASH_JOB_CONTROL=y\n"
"CONFIG_ASH_ALIAS=y\n"
"CONFIG_ASH_GETOPTS=y\n"
"CONFIG_ASH_BUILTIN_ECHO=y\n"
"CONFIG_ASH_BUILTIN_PRINTF=y\n"
"CONFIG_ASH_BUILTIN_TEST=y\n"
"CONFIG_ASH_HELP=y\n"
"CONFIG_ASH_CMDCMD=y\n"
"# CONFIG_ASH_MAIL is not set\n"
"CONFIG_ASH_OPTIMIZE_FOR_SIZE=y\n"
"CONFIG_ASH_RANDOM_SUPPORT=y\n"
"CONFIG_ASH_EXPAND_PRMT=y\n"
"CONFIG_CTTYHACK=y\n"
"CONFIG_HUSH=y\n"
"CONFIG_HUSH_BASH_COMPAT=y\n"
"CONFIG_HUSH_BRACE_EXPANSION=y\n"
"CONFIG_HUSH_HELP=y\n"
"CONFIG_HUSH_INTERACTIVE=y\n"
"CONFIG_HUSH_SAVEHISTORY=y\n"
"CONFIG_HUSH_JOB=y\n"
"CONFIG_HUSH_TICK=y\n"
"CONFIG_HUSH_IF=y\n"
"CONFIG_HUSH_LOOPS=y\n"
"CONFIG_HUSH_CASE=y\n"
"CONFIG_HUSH_FUNCTIONS=y\n"
"CONFIG_HUSH_LOCAL=y\n"
"CONFIG_HUSH_RANDOM_SUPPORT=y\n"
"CONFIG_HUSH_EXPORT_N=y\n"
"CONFIG_HUSH_MODE_X=y\n"
"# CONFIG_MSH is not set\n"
"CONFIG_FEATURE_SH_IS_ASH=y\n"
"# CONFIG_FEATURE_SH_IS_HUSH is not set\n"
"# CONFIG_FEATURE_SH_IS_NONE is not set\n"
"# CONFIG_FEATURE_BASH_IS_ASH is not set\n"
"# CONFIG_FEATURE_BASH_IS_HUSH is not set\n"
"CONFIG_FEATURE_BASH_IS_NONE=y\n"
"CONFIG_SH_MATH_SUPPORT=y\n"
"CONFIG_SH_MATH_SUPPORT_64=y\n"
"CONFIG_FEATURE_SH_EXTRA_QUIET=y\n"
"# CONFIG_FEATURE_SH_STANDALONE is not set\n"
"# CONFIG_FEATURE_SH_NOFORK is not set\n"
"CONFIG_FEATURE_SH_HISTFILESIZE=y\n"
"CONFIG_SYSLOGD=y\n"
"CONFIG_FEATURE_ROTATE_LOGFILE=y\n"
"CONFIG_FEATURE_REMOTE_LOG=y\n"
"CONFIG_FEATURE_SYSLOGD_DUP=y\n"
"CONFIG_FEATURE_SYSLOGD_CFG=y\n"
"CONFIG_FEATURE_SYSLOGD_READ_BUFFER_SIZE=256\n"
"CONFIG_FEATURE_IPC_SYSLOG=y\n"
"CONFIG_FEATURE_IPC_SYSLOG_BUFFER_SIZE=16\n"
"CONFIG_LOGREAD=y\n"
"CONFIG_FEATURE_LOGREAD_REDUCED_LOCKING=y\n"
"CONFIG_FEATURE_KMSG_SYSLOG=y\n"
"CONFIG_KLOGD=y\n"
"CONFIG_FEATURE_KLOGD_KLOGCTL=y\n"
"CONFIG_LOGGER=y\n"
;
#endif
