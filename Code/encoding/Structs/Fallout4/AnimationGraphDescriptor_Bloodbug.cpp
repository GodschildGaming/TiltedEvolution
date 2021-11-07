#include <Structs/AnimationGraphDescriptorManager.h>
#include <Structs/Fallout4/AnimationGraphDescriptor_Bloodbug.h>

enum Variables
{
    kbAllowRotation = 0,
    kbAnimationDriven = 1,
    kbGraphDriven = 2,
    kiState = 3,
    kiState_BloodbugDefault = 4,
    kfTimeStep = 5,
    kfSpineTwistGainAdj = 6,
    kfSpineTwistGain = 7,
    kSpineXTwist = 8,
    kSpineYTwist = 9,
    kSpineZTwist = 10,
    kiGetUpType = 11,
    kiCombatState = 12,
    kcHitReactionDir = 13,
    kcHitReactionBodyPart = 14,
    kbManualGraphChange = 15,
    kbGraphWantsHeadTracking = 16,
    kbHeadTrackingEnabled = 17,
    kLookAtOutOfRange = 18,
    kfHeadTrackingGainOn = 19,
    kfHeadTrackingGainOff = 20,
    kcamerafromx = 21,
    kcamerafromy = 22,
    kcamerafromz = 23,
    kfHitReactionEndTimer = 24,
    kiSyncTurnState = 25,
    kiNonCombatStandingState = 26,
    kiNonCombatLocomotionState = 27,
    kiSyncIdleLocomotion = 28,
    kSpeed = 29,
    kiCombatStandingState = 30,
    kiCombatLocomotionState = 31,
    kIsAttackReady = 32,
    kbEnableAttackMod = 33,
    kDirection = 34,
    kbEquipOk = 35,
    kbIsSynced = 36,
    kbGraphDrivenRotation = 37,
    kfRandomClipStartTimePercentage = 38,
    kidleTimeMax = 39,
    kidleTimeMin = 40,
    kUnknown = 41,
    kiSyncDirectionState = 42,
    kiDynamicAnimSelector = 43,
    kbAllowHeadTracking = 44,
    kLookAtChest_Enabled = 45,
    kLookAtSpine2_Enabled = 46,
    kbFreezeSpeedUpdate = 47,
    kiIsInSneak = 48,
    kbGraphWantsFootIK = 49,
    kbRenderFirstPersonInWorld = 50,
    kbDisableSpineTracking = 51,
    kIsPlayer = 52,
    kbBlockPOVSwitch = 53,
    kbBlockPipboy = 54,
    kPose = 55,
    kbAdjust1stPersonFOV = 56,
    kiRecoilSelector = 57,
    kstaggerDirection = 58,
    kstaggerMagnitude = 59,
    kTurnDelta = 60,
    kIsBlocking = 61,
    kiSyncWalkRun = 62,
    krecoilShortMult = 63,
    kLookAtOutsideLimit = 64,
    kbForceIdleStop = 65,
    kbDoNotInterrupt = 66,
    kLookAtLimitAngleDeg = 67,
    kLookAtChest_LimitAngleDeg = 68,
    kLookAtNeck_LimitAngleDeg = 69,
    kLookAtHead_LimitAngleDeg = 70,
    kLookAtHead_OnGain = 71,
    kLookAtAdditive = 72,
    kbEnableRoot_IsActiveMod = 73,
    kIsNPC = 74,
    kLookAtOnGain = 75,
    kLookAtOffGain = 76,
    kbTalkableWithItem = 77,
    kiTalkGenerator = 78,
    kbFreezeRotationUpdate = 79,
    kiPcapTalkGenerator = 80,
    kSpeedSmoothed = 81,
    kTurnDeltaSmoothed = 82,
    kbIsInFlavor = 83,
};

AnimationGraphDescriptor_Bloodbug::AnimationGraphDescriptor_Bloodbug(
    AnimationGraphDescriptorManager& aManager)
{
    uint64_t key = 7385599169756089322;

    AnimationGraphDescriptorManager::Builder s_builder(aManager, key,
        AnimationGraphDescriptor(
            {
                kbGraphDrivenRotation,
                kbManualGraphChange,
                kbIsSynced,
                kIsAttackReady,
                kbGraphDriven,
                kbAnimationDriven,
                kbEquipOk,
                kLookAtOutOfRange,
            },
            {
                kstaggerDirection,
                kSpineZTwist,
                kTurnDeltaSmoothed,
                kTurnDelta,
                kSpineYTwist,
                kSpeedSmoothed,
                kDirection,
                kSpeed,
                kstaggerMagnitude,
            },
            {
                kiSyncIdleLocomotion,
                kcHitReactionBodyPart,
                kiRecoilSelector,
                kiCombatState,
                kiSyncTurnState,
                kiSyncDirectionState,
            }
        ));
}
