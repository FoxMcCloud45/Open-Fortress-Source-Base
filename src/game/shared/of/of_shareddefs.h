// ========= Copyright Open Fortress Developers, CC-BY-NC-SA ============
// Purpose: General definitions
// Author(s): ficool2, Fenteale, Kay, Ms
//

#include "shareddefs.h"

// OFSTATUS: INCOMPLETE  ( labeling )
enum OF_Collision_Group_t
{
	OF_COLLISION_GROUP_UNKNOWN20 = LAST_SHARED_COLLISION_GROUP,
	OF_COLLISION_GROUP_UNKNOWN21,
	OF_COLLISION_GROUP_UNKNOWN22,
	OF_COLLISION_GROUP_UNKNOWN23,
	// OFINFO: labelled as "TFCOLLISION_GROUP_ROCKETS" in public SDK code, shared/particlesystemquery.cpp
	OF_COLLISION_GROUP_ROCKETS,
	OF_COLLISION_GROUP_UNKNOWN25,
	OF_COLLISION_GROUP_PUMPKIN_BOMB,
	// OFINFO: this is called in FireRocket + FireArrow in CPointWeaponMimic, guessing its for projectiles?
	OF_COLLISION_GROUP_PROJECTILE,
};


// Sourced from sourcemod API
#define DMG_CRIT                DMG_ACID        // < Crits and minicrits
#define DMG_RADIUS_MAX          DMG_ENERGYBEAM  // < No damage falloff 
#define DMG_NOCLOSEDISTANCEMOD  DMG_POISON      // < Don't do damage falloff too close 
#define DMG_HALF_FALLOFF        DMG_RADIATION   // < 50% damage falloff
#define DMG_USEDISTANCEMOD      DMG_SLOWBURN    // < Do damage falloff 
#define DMG_IGNITE              DMG_PLASMA      // < Ignite victim 
#define DMG_USE_HITLOCATIONS    DMG_AIRBOAT     // < Do hit location damage (sniper rifle) 

#ifdef CLIENT_DLL
#define Shared_VarArgs VarArgs
#else
#define Shared_VarArgs UTIL_VarArgs
#endif

enum
{
	OF_TEAM_RED = FIRST_GAME_TEAM,
	OF_TEAM_BLUE,
	OF_TEAM_MERCENARY,

	OF_TEAM_COUNT
};

enum
{
	OF_WEAPON_MODE_PRIMARY = 0,
	OF_WEAPON_MODE_SECONDARY,
	OF_WEAPON_MODE_COUNT
};

enum
{
	OF_WEAPON_TYPE_PRIMARY = 0,
	OF_WEAPON_TYPE_SECONDARY,
	OF_WEAPON_TYPE_MELEE,
	OF_WEAPON_TYPE_GRENADE,
	OF_WEAPON_TYPE_BUILDING,
	OF_WEAPON_TYPE_PDA,
	OF_WEAPON_TYPE_ITEM1,
	OF_WEAPON_TYPE_ITEM2
};

// These values are approximate and gotten via limited testing
// using the override projectile type attribute in Live tf2
// couldn't get some of these to spawn, so for those i used the FireProjectile class as a reference
// however some i still couldnt figure out, those are marked as Unknown
// If you know a better way, feel free to update this
enum
{
	OF_PROJECTILE_TYPE_NONE = 0,		 // 0  "projectile_bullet"
	OF_PROJECTILE_TYPE_BULLET,           // 1  "projectile_bullet"
	OF_PROJECTILE_TYPE_ROCKET,           // 2  "projectile_rocket"
	OF_PROJECTILE_TYPE_PIPEBOMB,         // 3  "projectile_pipe"
	OF_PROJECTILE_TYPE_STICKYBOMB,       // 4  "projectile_pipe_remote"
	OF_PROJECTILE_TYPE_SYRINGE,          // 5  "projectile_syringe"
	OF_PROJECTILE_TYPE_FLARE,            // 6  "projectile_flare"
	OF_PROJECTILE_TYPE_JARATE,           // 7  "projectile_jar"
	OF_PROJECTILE_TYPE_ARROW,            // 8  "projectile_arrow"
	OF_PROJECTILE_TYPE_FLAMEROCKET,      // 9  Seems to be unused?
	OF_PROJECTILE_TYPE_MADMILK,          // 10 "projectile_jar_milk"
	OF_PROJECTILE_TYPE_CROSSBOW,         // 11 "projectile_healing_bolt"
	OF_PROJECTILE_TYPE_MANGLER,          // 12 "projectile_energy_ball"
	OF_PROJECTILE_TYPE_BISON,            // 13 "projectile_energy_ring" 
	OF_PROJECTILE_TYPE_STICKYJUMPER,     // 14 Defined only via items game
	OF_PROJECTILE_TYPE_CLEAVER,           // 15 "projectile_cleaver"
	OF_PROJECTILE_TYPE_UNKNOWN1,         // 16 
	OF_PROJECTILE_TYPE_CANNONBALL,       // 17 "projectile_cannonball"
	OF_PROJECTILE_TYPE_RANGER,           // 18 Defined only via items game
	OF_PROJECTILE_TYPE_ARROW_FESTIVE,    // 19 Defined only via items game
	OF_PROJECTILE_TYPE_UNKNOWN2,         // 20
	OF_PROJECTILE_TYPE_UNKNOWN3,         // 21
	OF_PROJECTILE_TYPE_JARATE_FESTIVE,   // 22 Defined only via items game
	OF_PROJECTILE_TYPE_CROSSBOW_FESTIVE, // 23 Defined only via items game
	OF_PROJECTILE_TYPE_JARATE_BREAD,     // 24 Defined only via items game
	OF_PROJECTILE_TYPE_MADMILK_BREAD,    // 25 Defined only via items game
	OF_PROJECTILE_TYPE_GRAPPLE,       	 // 26 "tf_projectile_grapplinghook"

	OF_PROJECTILE_TYPE_BALLOFFIRE,		 // 27? "tf_projectile_balloffire" Havent tried out projectile override in a while so these werent in my list
	OF_PROJECTILE_TYPE_GASPASSER,		 // 28? "projectile_jar_gas" 
	OF_PROJECTILE_TYPE_COUNT
};

enum
{
	OF_RELOAD_STAGE_NONE = 0,
	OF_RELOAD_STAGE_START,
	OF_RELOAD_STAGE_LOOP,
	OF_RELOAD_STAGE_END
};

// not all of these exist, compatibility only
// https://csrd.science/misc/datadump/current/tf_conds.txt
enum
{
	TF_COND_AIMING = 0,		// Sniper aiming, Heavy minigun.
	TF_COND_ZOOMED,
	TF_COND_DISGUISING,
	TF_COND_DISGUISED,
	TF_COND_STEALTHED,
	TF_COND_INVULNERABLE,
	TF_COND_TELEPORTED,
	TF_COND_TAUNTING,
	TF_COND_INVULNERABLE_WEARINGOFF,
	TF_COND_STEALTHED_BLINK,
	TF_COND_SELECTED_TO_TELEPORT,
	TF_COND_CRITBOOSTED,
	TF_COND_TMPDAMAGEBONUS,
	TF_COND_FEIGN_DEATH,
	TF_COND_PHASE,
	TF_COND_STUNNED,
	TF_COND_OFFENSEBUFF,
	TF_COND_SHIELD_CHARGE,
	TF_COND_DEMO_BUFF,
	TF_COND_ENERGY_BUFF,
	TF_COND_RADIUSHEAL,
	TF_COND_HEALTH_BUFF,
	TF_COND_BURNING,
	TF_COND_HEALTH_OVERHEALED,
	TF_COND_URINE,
	TF_COND_BLEEDING,
	TF_COND_DEFENSEBUFF,
	TF_COND_MAD_MILK,
	TF_COND_MEGAHEAL,
	TF_COND_REGENONDAMAGEBUFF,
	TF_COND_MARKEDFORDEATH,
	TF_COND_NOHEALINGDAMAGEBUFF,
	TF_COND_SPEED_BOOST,
	TF_COND_CRITBOOSTED_PUMPKIN,
	TF_COND_CRITBOOSTED_USER_BUFF,
	TF_COND_CRITBOOSTED_DEMO_CHARGE,
	TF_COND_SODAPOPPER_HYPE,
	TF_COND_CRITBOOSTED_FIRST_BLOOD,
	TF_COND_CRITBOOSTED_BONUS_TIME,
	TF_COND_CRITBOOSTED_CTF_CAPTURE,
	TF_COND_CRITBOOSTED_ON_KILL,
	TF_COND_CANNOT_SWITCH_FROM_MELEE,
	TF_COND_DEFENSEBUFF_NO_CRIT_BLOCK,
	TF_COND_REPROGRAMMED,
	TF_COND_CRITBOOSTED_RAGE_BUFF,
	TF_COND_DEFENSEBUFF_HIGH,
	TF_COND_SNIPERCHARGE_RAGE_BUFF,
	TF_COND_DISGUISE_WEARINGOFF,
	TF_COND_MARKEDFORDEATH_SILENT,
	TF_COND_DISGUISED_AS_DISPENSER,
	TF_COND_SAPPED,
	TF_COND_INVULNERABLE_HIDE_UNLESS_DAMAGE,
	TF_COND_INVULNERABLE_USER_BUFF,
	TF_COND_HALLOWEEN_BOMB_HEAD,
	TF_COND_HALLOWEEN_THRILLER,
	TF_COND_RADIUSHEAL_ON_DAMAGE,
	TF_COND_CRITBOOSTED_CARD_EFFECT,
	TF_COND_INVULNERABLE_CARD_EFFECT,
	TF_COND_MEDIGUN_UBER_BULLET_RESIST,
	TF_COND_MEDIGUN_UBER_BLAST_RESIST,
	TF_COND_MEDIGUN_UBER_FIRE_RESIST,
	TF_COND_MEDIGUN_SMALL_BULLET_RESIST,
	TF_COND_MEDIGUN_SMALL_BLAST_RESIST,
	TF_COND_MEDIGUN_SMALL_FIRE_RESIST,
	TF_COND_STEALTHED_USER_BUFF,
	TF_COND_MEDIGUN_DEBUFF,
	TF_COND_STEALTHED_USER_BUFF_FADING,
	TF_COND_BULLET_IMMUNE,
	TF_COND_BLAST_IMMUNE,
	TF_COND_FIRE_IMMUNE,
	TF_COND_PREVENT_DEATH,
	TF_COND_MVM_BOT_STUN_RADIOWAVE,
	TF_COND_HALLOWEEN_SPEED_BOOST,
	TF_COND_HALLOWEEN_QUICK_HEAL,
	TF_COND_HALLOWEEN_GIANT,
	TF_COND_HALLOWEEN_TINY,
	TF_COND_HALLOWEEN_IN_HELL,
	TF_COND_HALLOWEEN_GHOST_MODE,
	TF_COND_MINICRITBOOSTED_ON_KILL,
	TF_COND_OBSCURED_SMOKE,
	TF_COND_PARACHUTE_ACTIVE,
	TF_COND_BLASTJUMPING,
	TF_COND_HALLOWEEN_KART,
	TF_COND_HALLOWEEN_KART_DASH,
	TF_COND_BALLOON_HEAD,
	TF_COND_MELEE_ONLY,
	TF_COND_SWIMMING_CURSE,
	TF_COND_FREEZE_INPUT,
	TF_COND_HALLOWEEN_KART_CAGE,
	TF_COND_DONOTUSE_0,
	TF_COND_RUNE_STRENGTH,
	TF_COND_RUNE_HASTE,
	TF_COND_RUNE_REGEN,
	TF_COND_RUNE_RESIST,
	TF_COND_RUNE_VAMPIRE,
	TF_COND_RUNE_REFLECT,
	TF_COND_RUNE_PRECISION,
	TF_COND_RUNE_AGILITY,
	TF_COND_GRAPPLINGHOOK,
	TF_COND_GRAPPLINGHOOK_SAFEFALL,
	TF_COND_GRAPPLINGHOOK_LATCHED,
	TF_COND_GRAPPLINGHOOK_BLEEDING,
	TF_COND_AFTERBURN_IMMUNE,
	TF_COND_RUNE_KNOCKOUT,
	TF_COND_RUNE_IMBALANCE,
	TF_COND_CRITBOOSTED_RUNE_TEMP,
	TF_COND_PASSTIME_INTERCEPTION,
	TF_COND_SWIMMING_NO_EFFECTS,
	TF_COND_PURGATORY,
	TF_COND_RUNE_KING,
	TF_COND_RUNE_PLAGUE,
	TF_COND_RUNE_SUPERNOVA,
	TF_COND_PLAGUE,
	TF_COND_KING_BUFFED,
	TF_COND_TEAM_GLOWS,
	TF_COND_KNOCKED_INTO_AIR,
	TF_COND_COMPETITIVE_WINNER,
	TF_COND_COMPETITIVE_LOSER,
	TF_COND_HEALING_DEBUFF,
	TF_COND_PASSTIME_PENALTY_DEBUFF,
	TF_COND_GRAPPLED_TO_PLAYER,
	TF_COND_GRAPPLED_BY_PLAYER,
	TF_COND_PARACHUTE_DEPLOYED,
	TF_COND_GAS,
	TF_COND_BURNING_PYRO,
	TF_COND_ROCKETPACK,
	TF_COND_LOST_FOOTING,
	TF_COND_AIR_CURRENT,

	TF_COND_LAST
};

extern const char *g_aWeaponModePrefix[OF_WEAPON_MODE_COUNT];
extern const char *g_aProjectileTypeNames[OF_PROJECTILE_TYPE_COUNT];

// Needs to match the array below
#define AMMONAME_FIRST 1
#define AMMONAME_LAST 7

//OFHACK: g_aAmmoNames should probably be an extern + defined somewhere but isn't
// (oh well, just bloats the exe a bit)

// No longer the case, did it properly and moved it to of_shareddefs.cpp now - Kay
extern const char *g_aAmmoNames[AMMONAME_LAST];
extern const char *g_aTeamNames[OF_TEAM_COUNT];
extern const char* s_ValveMaps[][3];
extern const char* s_CommunityMaps[][3];

#define TF_DAMAGE_CRIT_MULTIPLIER	3
#define TF_GAMETYPE_ESCORT			3