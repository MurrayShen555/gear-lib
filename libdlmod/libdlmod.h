/******************************************************************************
 * Copyright (C) 2014-2015
 * file:    libdlmod.h
 * author:  gozfree <gozfree@163.com>
 * created: 2015-11-09 18:51
 * updated: 2015-11-09 18:51
 ******************************************************************************/
#ifndef _LIBDLMOD_H_
#define _LIBDLMOD_H_

#include <libgzf.h>

#ifdef __cplusplus
extern "C" {
#endif

struct dl_handle {
    void *handle;
};

struct dl_handle *dl_load(const char *path_name);
int dl_capability(struct dl_handle *dl, const char *mod_name,
                struct capability_desc *desc);

void *dl_get_func(struct dl_handle *dl, const char *name);
void dl_unload(struct dl_handle *dl);



#ifdef __cplusplus
}
#endif
#endif
