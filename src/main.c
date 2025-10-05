#include <sys/types.h>
#include <sys/param.h>
#include <sys/module.h>
#include <sys/mount.h>
#include <sys/vnode.h>
#include <sys/malloc.h>
#include <sys/errno.h>
#include <sys/kernel.h>
#include <sys/systm.h>


static int arcfs_mount(struct mount *mp) {
  int* op = 0;
  *op = 0;

  printf("[ArcFS::main.c] mount\n");
  return EOPNOTSUPP;
}

static int arcfs_unmount(struct mount *mp, int mntflags) {
  printf("[Arcfs::main.c] unmount\n");
  return EOPNOTSUPP;
}

static int arcfs_root(struct mount *mp, int mntflags, struct vnode **vpp) {
  return EOPNOTSUPP;
}

static int arcfs_statfs(struct mount* mp, struct statfs *sbp) {
  return EOPNOTSUPP;
}

static struct vfsops arcfs_vfsops = {
  .vfs_mount = arcfs_mount,
  .vfs_unmount = arcfs_unmount,
  .vfs_root = arcfs_root,
  .vfs_statfs = arcfs_statfs,
  // .vfs_sync =
};

VFS_SET(arcfs_vfsops, arcfs, 0);
MODULE_VERSION(arcfs, 1);
