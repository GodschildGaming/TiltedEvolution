#include <Structs/AnimationGraphDescriptorManager.h>
#include <Structs/Fallout4/AnimationGraphDescriptor_MutantHound.h>

enum Variables
{
    kbGetTimeStepEnable = 0,
    kfTimeStep = 1,
    kSpeed = 2,
    kTurnDelta = 3,
    kbHeadTrackingEnable = 4,
    kfHeadTrackingGainOn = 5,
    kfHeadTrackingGainOff = 6,
    kLookAtOutOfRange = 7,
    kcamerafromx = 8,
    kcamerafromy = 9,
    kcamerafromz = 10,
    kbGraphWantsHeadTracking = 11,
    km_worldFromModelFeedbackGain = 12,
    km_GainAlignWorldFromModel = 13,
    km_errorOutTranslation = 14,
    km_alignWithGroundRotation = 15,
    kbAnimationDriven = 16,
    kbSupportedDeathAnim = 17,
    kiState = 18,
    kiState_FEVHound = 19,
    kiGetUpType = 20,
    kiCombatState = 21,
    kbManualGraphChange = 22,
    kcHitReactionBodyPart = 23,
    kbHeadTrackingDebug = 24,
    kbGraphDriven = 25,
    kfSpineTwistGainAdj = 26,
    kfSpineTwistGain = 27,
    kSpineXTwist = 28,
    kSpineValueMinMax = 29,
    kSpineYTwist = 30,
    kSpineZTwist = 31,
    kcHitReactionDir = 32,
    kHeadZTwist = 33,
    kfHeadTwistGain = 34,
    kfHeadTwistGainAdj = 35,
    kHeadYTwist = 36,
    kHeadXTwist = 37,
    kHeadValueMinMax = 38,
    kbReactEnabled = 39,
    kfHitReactionEndTimer = 40,
    kiSyncTurnState = 41,
    kiNonCombatStandingState = 42,
    kiNonCombatLocomotionState = 43,
    kiSyncIdleLocomotion = 44,
    kiCombatStandingState = 45,
    kiCombatLocomotionState = 46,
    kIsAttackReady = 47,
    kbEnableAttackMod = 48,
    kbEquipOk = 49,
    kfRandomClipStartTimePercentage = 50,
    kbIsSynced = 51,
    kbGraphDrivenRotation = 52,
    kTurnDeltaSmoothed = 53,
    kidleTimeMax = 54,
    kidleTimeMin = 55,
    k_LimitAngleRight = 56,
    k_LimitAngleUp = 57,
    k_LimitAngleDown = 58,
    k_LimitAngleLeft = 59,
    k_LimitAngleLeft00 = 60,
    k_LimitAngle = 61,
    kiDynamicAnimSelector = 62,
    kiLocomotionState = 63,
    kwalkForwardSpeedMult = 64,
    ktrotSpeedMult = 65,
    krunSpeedMult = 66,
    kiSyncForwardState = 67,
    kDirection = 68,
    kwalkBackwardSpeedMult = 69,
    kbIsLaying = 70,
    kbIsSitting = 71,
    kbForceIdleStop = 72,
    kbAllowRotation = 73,
    kbAllowHeadTracking = 74,
    kLookAtChest_Enabled = 75,
    kLookAtSpine2_Enabled = 76,
    kbFreezeSpeedUpdate = 77,
    kiIsInSneak = 78,
    kbGraphWantsFootIK = 79,
    kbRenderFirstPersonInWorld = 80,
    kbDisableSpineTracking = 81,
    kIsPlayer = 82,
    kbBlockPOVSwitch = 83,
    kbBlockPipboy = 84,
    kPose = 85,
    kbAdjust1stPersonFOV = 86,
    kiRecoilSelector = 87,
    kstaggerDirection = 88,
    kstaggerMagnitude = 89,
    kIsBlocking = 90,
    kiSyncWalkRun = 91,
    krecoilShortMult = 92,
    kLookAtOutsideLimit = 93,
    kbDoNotInterrupt = 94,
    kLookAtLimitAngleDeg = 95,
    kLookAtChest_LimitAngleDeg = 96,
    kLookAtNeck_LimitAngleDeg = 97,
    kLookAtHead_LimitAngleDeg = 98,
    kLookAtHead_OnGain = 99,
    kLookAtAdditive = 100,
    kbEnableRoot_IsActiveMod = 101,
    kIsNPC = 102,
    kLookAtOnGain = 103,
    kLookAtOffGain = 104,
    kbTalkableWithItem = 105,
    kiTalkGenerator = 106,
    kbFreezeRotationUpdate = 107,
    kiPcapTalkGenerator = 108,
    kSpeedSmoothed = 109,
    kbIsInFlavor = 110,
};

AnimationGraphDescriptor_MutantHound::AnimationGraphDescriptor_MutantHound(
    AnimationGraphDescriptorManager& aManager)
{
    uint64_t key = 13422174473106868592;

    AnimationGraphDescriptorManager::Builder s_builder(aManager, key,
        AnimationGraphDescriptor(
            {
                kLookAtOutOfRange,
                kbAnimationDriven,
                kbGraphWantsHeadTracking,
                kbEquipOk,
                kcHitReactionDir,
                kIsAttackReady,
            },
            {
                kHeadXTwist,
                kHeadZTwist,
                kTurnDelta,
                kSpeedSmoothed,
                kSpineXTwist,
                kstaggerDirection,
                kTurnDeltaSmoothed,
                kHeadYTwist,
                kSpeed,
                krunSpeedMult,
                kSpineZTwist,
                kfHitReactionEndTimer,
                ktrotSpeedMult,
                kfTimeStep,
                kfHeadTwistGainAdj,
                kSpineYTwist,
                kfSpineTwistGainAdj,
                kDirection,
                kwalkForwardSpeedMult,
            },
            {
                kiDynamicAnimSelector,
                kiSyncTurnState,
                kiRecoilSelector,
                kcHitReactionBodyPart,
                kiSyncIdleLocomotion,
                kiCombatState,
                kiLocomotionState,
            }
        ));
}
