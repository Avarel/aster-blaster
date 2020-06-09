#ifndef __ASTER_BLASTER_ENEMIES__
#define __ASTER_BLASTER_ENEMIES__

#include "aster_blaster_imports.h"

body_t *body_init_enemy_saw(vector_t pos, scene_t *scene, body_t *player);

body_t *body_init_enemy_shooter(vector_t pos, scene_t *scene, body_t *player);

void spawn_enemy_saw(scene_t *scene, body_t *player);

void spawn_enemy_shooter(scene_t *scene, body_t *player);

void shooter_enemy_all_shoot(scene_t *scene, body_t *player, game_bounds_t bounds, ast_sprites_list_t ast_sprites_list);

body_t *body_init_enemy_shooter_bullet(scene_t *scene, body_t *player, body_t *shooter, game_bounds_t bounds, ast_sprites_list_t ast_sprites_list);

void spawn_enemy_shooter_bullet(scene_t *scene, body_t *player, body_t *shooter, game_bounds_t bounds, ast_sprites_list_t ast_sprites_list);

body_t *body_init_boss(scene_t *scene);

void spawn_boss(scene_t *scene, body_t *movement_trigger, body_t *right_trigger, body_t *left_trigger);

body_t *body_init_boss_bomb(scene_t *scene, bosy_t *boss, game_bounds_t bound);

void spawn_boss_bomb(scene_t *scene, bosy_t *boss, game_bounds_t bound);

body_t *body_init_boss_bullet(scene_t *scene, bosy_t *bomb, game_bounds_t bound);

void spawn_boss_bullet(scene_t *scene, bosy_t *bomb, game_bounds_t bound);

#endif // #ifndef __ASTER_BLASTER_SETTINGS__