# Nonsense Mod Plans

Personal modding playground built on Ship of Harkinian (OoT PC port). Goal: turn the
hookshot into a gun, then escalate the whole town into GTA-style chaos.

## Build

Use the Makefile wrapper (Arch + Ninja, ccache auto-wired):

    make deps      # one time, installs gcc + deps (add ccache separately)
    make           # configure + generate soh.o2r + build
    make build     # iterate (incremental, uses ccache)
    make run       # launch soh.elf

First run prompts for a compatible OoT ROM. See docs/supportedHashes.json.

## Phase 1 - The Gun (in progress)

Approach: hijack the hookshot projectile actor directly rather than a clean new item.
All edits live in soh/src/overlays/actors/ovl_Arms_Hook/z_arms_hook.c.

Done:
- POW on hit: plays NA_SE_IT_BOMB_EXPLOSION as the gunshot crack.
- Bullet impact: EffectSsHitMark_Spawn with EFFECT_HITMARK_WHITE at the hook tip.
- Removed the chain visual (the gLinkAdultHookshotChainDL draw block in ArmsHook_Draw).
- Swapped the projectile model to the Broken Giant's Knife display list.
- Killed the player pull (removed the ArmsHook_PullPlayer call so Link is never reeled).
- Damage: collider AT flags set to DMG_SLASH_GIANT | DMG_SLASH_KOKIRI | DMG_ARROW_NORMAL
  | DMG_BOOMERANG, damage byte 0x10. Damage type macros live in
  include/z64collision_check.h.

TODO:
- Enable for young Link. Two gates: the age restriction in the player item-use
  validation (z_player.c), and the hand model / rightHandType check in ArmsHook_Draw
  (currently keyed to PLAYER_MODELTYPE_RH_HOOKSHOT with adult DLs). SoH has a
  Timeless Equipment enhancement that may cover the age gate.
- Reduce cooldown. Two knobs: the windup at Player_InitHookshotIA (unk_860 = -3, set
  toward 0 for instant fire) and the hook travel/return timer in z_arms_hook.c
  (the length value, lower 13 = faster refire but shorter range).
- Make it feel like a basic attack: combine zero windup plus short return timer for a
  tap-spammable weapon. A true B-button melee rebind is a bigger job (input routing in
  the player state machine), deferred.

## Phase 2 - GTA Mode (planned)

Turn townsfolk into a panicking, fighting crowd. Tiered by difficulty:

Easy - NPCs panic and flee:
- Use a GameInteractor global actor-update hook to intercept every NPC each frame.
- Compute a vector away from Link, push position/velocity along it, swap idle anim for
  run anim. Trigger panic when the player draws or fires the gun.
- One hook covers the whole town.

Medium - crowd reactions:
- Scream SFX, freeze-then-bolt, scatter from the gunshot point rather than from Link,
  knockback on hit. Layered onto the same hook.

Hard - NPCs attack each other (the real wall):
- OoT NPCs have no combat model (no attack collider, no damage output) and no faction or
  targeting system. Enemies hardcode their target as Link.
- Real free-for-all means writing new AI: give NPCs attack colliders, a target-selection
  routine, and aggro state.
- Doing it properly, no shortcuts.

## Key files and reference

- soh/src/overlays/actors/ovl_Arms_Hook/z_arms_hook.c - the gun projectile.
- soh/src/overlays/actors/ovl_player_actor/z_player.c - item actions, age gating, hookshot
  windup.
- include/z64collision_check.h - DMG_ damage type flags, collider struct definitions.
- include/z64player.h - PlayerItemAction enum.
- include/z64item.h - ItemID enum.
- docs/MODDING.md - SoH modding and GameInteractor overview.
