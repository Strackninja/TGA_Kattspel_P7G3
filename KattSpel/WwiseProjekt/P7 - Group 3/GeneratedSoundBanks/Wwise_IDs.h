/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Audiokinetic Wwise generated include file. Do not edit.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __WWISE_IDS_H__
#define __WWISE_IDS_H__

#include <AK/SoundEngine/Common/AkTypes.h>

namespace AK
{
    namespace EVENTS
    {
        static const AkUniqueID AMB_0 = 2061769230U;
        static const AkUniqueID AMB_1 = 2061769231U;
        static const AkUniqueID AMB_2 = 2061769228U;
        static const AkUniqueID AMB_3 = 2061769229U;
        static const AkUniqueID CATNIP_ACTIVATE = 2310699732U;
        static const AkUniqueID CATNIP_DEACTIVATE = 2919142181U;
        static const AkUniqueID CATNIP_IDLE = 3018716685U;
        static const AkUniqueID CATNIP_IDLE_STOP = 548162048U;
        static const AkUniqueID CATNIP_PICKUP = 1462856691U;
        static const AkUniqueID DOG_CANNON_FIRE = 3797152694U;
        static const AkUniqueID DOG_CANNON_OBJECT_HIT = 3378955245U;
        static const AkUniqueID DOG_DEATH = 2682195294U;
        static const AkUniqueID DOG_TURRET_ROTATION = 2273467139U;
        static const AkUniqueID DOG_TURRET_ROTATION_STOP = 4003985518U;
        static const AkUniqueID MUSIC_LVL0 = 3380345083U;
        static const AkUniqueID MUSIC_LVL1 = 3380345082U;
        static const AkUniqueID MUSIC_LVL2 = 3380345081U;
        static const AkUniqueID MUSIC_LVL3 = 3380345080U;
        static const AkUniqueID MUSIC_MENU = 1598298728U;
        static const AkUniqueID MUSIC_STOP_00 = 1960181536U;
        static const AkUniqueID MUSIC_STOP_01 = 1960181537U;
        static const AkUniqueID MUSIC_STOP_02 = 1960181538U;
        static const AkUniqueID MUSIC_STOP_03 = 1960181539U;
        static const AkUniqueID MUSIC_STOP_MENU = 1733092797U;
        static const AkUniqueID PLAYER_DEATH = 3083087645U;
        static const AkUniqueID PLAYER_DEATH_FALL = 1631631307U;
        static const AkUniqueID PLAYER_DOUBLE_JUMP = 1329115477U;
        static const AkUniqueID PLAYER_FOOTSTEP = 2453392179U;
        static const AkUniqueID PLAYER_JUMP = 1305133589U;
        static const AkUniqueID PLAYER_LAND_SOFT = 3052201669U;
        static const AkUniqueID PLAYER_RESPAWN = 2161713971U;
        static const AkUniqueID PLAYER_VAULT = 769234327U;
        static const AkUniqueID PLAYER_WALLRUN = 3354250256U;
        static const AkUniqueID UI_BACK = 2024222415U;
        static const AkUniqueID UI_CLICK = 2249769530U;
        static const AkUniqueID UI_CONFIRM = 216067002U;
        static const AkUniqueID UI_CONTINUE_GAME = 1603101806U;
        static const AkUniqueID UI_HOVER = 2118900976U;
        static const AkUniqueID UI_NEW_GAME = 655462189U;
        static const AkUniqueID UI_PAUSE = 2792155208U;
        static const AkUniqueID UI_RESUME = 2391028579U;
        static const AkUniqueID UI_RETURN_TO_MAIN_MENU = 777326674U;
        static const AkUniqueID UI_SELECT = 2774129122U;
        static const AkUniqueID WATERGUN_FIRE = 3833903647U;
        static const AkUniqueID WATERGUN_OBJECT_HIT = 236262596U;
    } // namespace EVENTS

    namespace STATES
    {
        namespace PLAYER_HEALTH
        {
            static const AkUniqueID GROUP = 215992295U;

            namespace STATE
            {
                static const AkUniqueID FULL = 2510516222U;
                static const AkUniqueID LOW = 545371365U;
                static const AkUniqueID NONE = 748895195U;
            } // namespace STATE
        } // namespace PLAYER_HEALTH

        namespace PLAYER_STATE
        {
            static const AkUniqueID GROUP = 4071417932U;

            namespace STATE
            {
                static const AkUniqueID CATNIP = 3223325804U;
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID NORMAL = 1160234136U;
            } // namespace STATE
        } // namespace PLAYER_STATE

    } // namespace STATES

    namespace SWITCHES
    {
        namespace FS_TYPE
        {
            static const AkUniqueID GROUP = 1742771999U;

            namespace SWITCH
            {
            } // namespace SWITCH
        } // namespace FS_TYPE

        namespace MATERIALS
        {
            static const AkUniqueID GROUP = 4050929301U;

            namespace SWITCH
            {
                static const AkUniqueID COBBLE = 3135525842U;
                static const AkUniqueID GRASS = 4248645337U;
                static const AkUniqueID GRAVEL = 2185786256U;
            } // namespace SWITCH
        } // namespace MATERIALS

    } // namespace SWITCHES

    namespace GAME_PARAMETERS
    {
        static const AkUniqueID DENSITY_FA_SSGRAIN = 2715217995U;
        static const AkUniqueID GP_AMBIENCE_VOLUME_PARAMETER = 1951402800U;
        static const AkUniqueID GP_MASTER_VOLUME_PARAMETER = 773250870U;
        static const AkUniqueID GP_MUSIC_VOLUME_PARAMETER = 922500145U;
        static const AkUniqueID GP_PLAYERGUNSHOT_PARAMETER = 2728428466U;
        static const AkUniqueID GP_SFX_VOLUME_PARAMETER = 3303758585U;
        static const AkUniqueID IMMERSION_FA_SSGRAIN = 2481728872U;
        static const AkUniqueID INSTRUMENT_FA_SSGRAIN = 2317409760U;
        static const AkUniqueID PLAYBACK_RATE = 1524500807U;
        static const AkUniqueID PROXIMITY_FA_SSGRAIN = 1791284502U;
        static const AkUniqueID RPM = 796049864U;
        static const AkUniqueID RPM_FA_SSGRAIN = 1656280998U;
        static const AkUniqueID SIMULATION_FA_SSGRAIN = 2428833394U;
        static const AkUniqueID SS_AIR_FEAR = 1351367891U;
        static const AkUniqueID SS_AIR_FREEFALL = 3002758120U;
        static const AkUniqueID SS_AIR_FURY = 1029930033U;
        static const AkUniqueID SS_AIR_MONTH = 2648548617U;
        static const AkUniqueID SS_AIR_PRESENCE = 3847924954U;
        static const AkUniqueID SS_AIR_RPM = 822163944U;
        static const AkUniqueID SS_AIR_SIZE = 3074696722U;
        static const AkUniqueID SS_AIR_STORM = 3715662592U;
        static const AkUniqueID SS_AIR_TIMEOFDAY = 3203397129U;
        static const AkUniqueID SS_AIR_TURBULENCE = 4160247818U;
    } // namespace GAME_PARAMETERS

    namespace BANKS
    {
        static const AkUniqueID INIT = 1355168291U;
        static const AkUniqueID AMB = 1117531639U;
        static const AkUniqueID MUSIC = 3991942870U;
        static const AkUniqueID SFX = 393239870U;
    } // namespace BANKS

    namespace BUSSES
    {
        static const AkUniqueID AMBIENCE_VOLUME = 2901143258U;
        static const AkUniqueID ENEMY_SOUNDS_BUS = 2668832989U;
        static const AkUniqueID ENVIRONMENTAL_BUS = 3942603440U;
        static const AkUniqueID MASTER_AUDIO_VOLUME_BUS = 949581066U;
        static const AkUniqueID MUSIC_BUS = 2680856269U;
        static const AkUniqueID MUSIC_VOLUME = 1006694123U;
        static const AkUniqueID PLAYER_SOUNDS_BUS = 4076418998U;
        static const AkUniqueID PLAYER_WEAPON_BUS = 2461149734U;
        static const AkUniqueID SFX_VOLUME = 1564184899U;
        static const AkUniqueID UI_BUS = 3247222208U;
    } // namespace BUSSES

    namespace AUDIO_DEVICES
    {
        static const AkUniqueID DEFAULT_MOTION_DEVICE = 4230635974U;
        static const AkUniqueID NO_OUTPUT = 2317455096U;
        static const AkUniqueID SYSTEM = 3859886410U;
    } // namespace AUDIO_DEVICES

}// namespace AK

#endif // __WWISE_IDS_H__
