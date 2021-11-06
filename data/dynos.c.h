#ifndef DYNOS_C_H
#define DYNOS_C_H
#ifndef __cplusplus

#include "dynos.h"

//
// Options menu
//

int dynos_opt_get_value(const char *name);
void dynos_opt_set_value(const char *name, int value);
void dynos_opt_add_action(const char *funcname, bool (*funcptr)(const char *), bool overwrite);
//
// Update
//

void *dynos_update_cmd(void *cmd);
void dynos_update_gfx();
void dynos_update_opt(void *pad);

//
// Gfx
//

int dynos_gfx_import_texture(void **output, void *ptr, int tile, void *grapi, void **hashmap, void *pool, int *poolpos, int poolsize);
void dynos_gfx_swap_animations(void *ptr);

//
// Musics
//

bool dynos_music_load_presets_from_dynos_folder(const char *filename, const char *folder);
void dynos_music_play(const char *name);
void dynos_music_multi_play(const char *name);
void dynos_music_stop();
void dynos_music_pause();
void dynos_music_resume();
bool dynos_music_is_playing(const char *name);

//
// Sounds
//

bool dynos_sound_load_presets_from_dynos_folder(const char *filename, const char *folder);
void dynos_sound_play(const char *name, float *pos);
void dynos_sound_stop(unsigned char bank);
bool dynos_sound_is_playing(const char *name);

//
// Jingles
//

bool dynos_jingle_load_presets_from_dynos_folder(const char *filename, const char *folder);
void dynos_jingle_play(const char *name);
void dynos_jingle_stop();
void dynos_jingle_pause();
void dynos_jingle_resume();
bool dynos_jingle_is_playing(const char *name);

#endif
#endif
