
class RadioProtocolBase;
class AGM_RadioProtocolNoRadio: RadioProtocolBase {
    class CuratorWaypointPlaced;
    class CuratorWaypointPlacedAttack;
    class CuratorObjectPlaced;
    class curatorObjectDestroyed;
    class curatorModuleCAS;
    class SentFireNoTarget_1;
    class SentSupportRequestRGCASBombing;
    class SentNoTargetDefault;
    class SentEngageNoTargetDefault;
    class SentFireNoTargetDefault;
    class SentAttackNoTargetDefault;
    class SentEnemyDetectedMedium;
    class SentEnemyDetectedLong;
    class SentEnemyDetectedDangerClose;
    class SentEnemyDetectedClose;
    class SentEnemyDetectedVeryLong;
    class SentIsLeaderDefault;
    class SentCommandCompletedDefault;
    class SentFireReadyDefault;
    class SentCommandFailedDefault;
    class SentDestinationUnreacheableDefault;
    class SentObjectDestroyedDefault;
    class SentObjectDestroyedUnknownDefault;
    class SentClearDefault;
    class SentRepeatCommandDefault;
    class SentWhereAreYouDefault;
    class SentReportStatusDefault;
    class SentNotifyAttackDefault;
    class SentNotifyAttackSubgroupDefault;
    class SentConfirmMoveDefault;
    class SentConfirmAttackDefault;
    class SentConfirmOtherDefault;
    class SentUnitKilledDefault;
    class SentHealthCriticalDefault;
    class SentHealthNormalDefault;
    class SentReturnToFormationDefault;
    class SentLooseFormationDefault;
    class SentCmdFollowMeDefault;
    class SelectCmdMoveSentenceClose;
    class SelectCmdMoveSentenceVeryClose;
    class SelectCmdMoveSentenceFar;
    class SentEnemyDetectedMediumStealth;
    class SentSupportConfirmDefault;
    class SelectCmdMoveSentenceClose_1;
    class SelectCmdMoveSentenceVeryClose_1;
    class SelectCmdMoveSentenceFar_1;
    class SentSupportRequestRGCASHelicopter;
    class SentSupportRequestRGSupplyDrop;
    class SentSupportRequestRGUAV;
    class SentSupportRequestRGArty;
    class SentSupportRequestRGTransport;
    class SentRequestAcknowledgedSGCASBombing;
    class SentRequestAcknowledgedSGCASHelicopter;
    class SentRequestAcknowledgedSGSupplyDrop;
    class SentRequestAcknowledgedSGUAV;
    class SentRequestAcknowledgedSGArty;
    class SentRequestAcknowledgedTransport;
    class SentUnitDestroyedHQCASBombing;
    class SentUnitDestroyedHQCASHelicopter;
    class SentUnitDestroyedHQSupplyDrop;
    class SentUnitDestroyedHQUAV;
    class SentUnitDestroyedHQArty;
    class SentUnitDestroyedHQTransport;
    class SentRequestAccomplishedSGCASBombing;
    class SentRequestAccomplishedSGCASHelicopter;
    class SentRequestAccomplishedSGSupplyDrop;
    class SentRequestAccomplishedSGUAV;
    class SentRequestAccomplishedSGArty;
    class SentRequestAccomplishedSGTransport;
    class SentSupportAddedDuringMission;
    class SentArtySGSupportRoundsComplete;
    class SentTransportSGWelcomeAboard;
    class SentTransportSGLZCoordinatesSelected;
    class SelectCmdMoveSentenceLocation;
    class SelectCmdMoveSentenceMedium;
    class SentEnemyDetectedLongStealth;
    class SentEnemyDetectedDangerCloseStealth;
    class SentEnemyDetectedCloseStealth;
    class SentEnemyDetectedVeryLongStealth;
    class SentEngageDefault;
    class SelectCmdMoveSentenceLocation_1;
    class SelectCmdMoveSentenceMedium_1;
    class SentBehaviourSafeDefault;
    class SentBehaviourAwareDefault;
    class SentBehaviourCombatDefault;
    class SentOpenFireDefault;
    class SentCeaseFireInsideGroupDefault;
    class SentCeaseFireDefault;
    class SentEngageStealth;
    class SentFireNoTargetStealth;
    class SentAttackNoTargetStealth;
    class SentNoTargetStealth;
    class SentEngageNoTargetStealth;
    class SelectCmdMoveSentenceCloseStealth;
    class SelectCmdMoveSentenceVeryCloseStealth;
    class SelectCmdMoveSentenceFarStealth;
    class SelectCmdMoveSentenceLocationStealth;
    class SelectCmdMoveSentenceMediumStealth;
    class SentReturnToFormationStealth;
    class SentLooseFormationStealth;
    class SentCmdFollowMeStealth;
    class SentOpenFireStealth;
    class SentCeaseFireInsideGroupStealth;
    class SentBehaviourSafeStealth;
    class SentBehaviourAwareStealth;
    class SentBehaviourCombatStealth;
    class SentSupportConfirmStealth;
    class SentCommandFailedStealth;
    class SentObjectDestroyedStealth;
    class SentObjectDestroyedUnknownStealth;
    class SentCommandCompletedStealth;
    class SentFireReadyStealth;
    class SentIsLeaderStealth;
    class SentDestinationUnreacheableStealth;
    class SentClearStealth;
    class SentRepeatCommandStealth;
    class SentWhereAreYouStealth;
    class SentReportStatusStealth;
    class SentNotifyAttackStealth;
    class SentNotifyAttackSubgroupStealth;
    class SentConfirmMoveStealth;
    class SentConfirmAttackStealth;
    class SentConfirmOtherStealth;
    class SentUnitKilledStealth;
    class SentHealthCriticalStealth;
    class SentHealthNormalStealth;
    class SentGenReinforcementsConfirmed;
    class SentGenReinforcementsRejected;
    class SentGenReinforcementsArrived;
    class SentGenLeavingAO;
    class SentGenTime;
    class SentGenLosing;
    class SentGenLost;
    class SentGenComplete;
    class SentGenCmdSeize;
    class SentGenCmdDefend;
    class SentGenCmdRTB;
    class SentGenCmdTargetNeutralize;
    class SentGenCmdTargetProtect;
    class SentGenCmdTargetEscort;
    class SentGenCmdTargetFind;
    class SentGenIncoming;
    class SentGenBaseUnlockRespawn;
    class SentGenBaseUnlockVehicle;
    class SentGenBaseSideFriendlyWEST;
    class SentFXBreathingSlow;
    class SentFXBreathingFast;
    class SentFXHit;
    class SentFXDeath;
    class SentFXHurt;
    class SentFXEffort;
    class SentFXDrowning;
    class SentCeaseFireDefault_1;
    class SentGenBaseSideFriendlyEAST;
    class SentGenBaseSideFriendlyGUER;
    class SentGenBaseSideEnemyWEST;
    class SentGenBaseSideEnemyEAST;
    class SentGenBaseSideEnemyGUER;
    class SentTargetDefault;
    class SentTargetStealth;
    class Dummy;
};

class CfgVoice {
    class AGM_NoVoice {
        author = "$STR_AGM_Core_AGMTeam";
        protocol = "AGM_RadioProtocolNoRadio";
        variants[] = {1};
        directories[] = {"",""};
        identityTypes[] = {"Default"};
        scope = 2;
        voiceType = "";
        icon = "\a3\Ui_f\data\Map\Markers\Flags\nato_ca.paa";
        displayName = "$STR_AGM_Core_NoVoice";
    };
};
class CfgVoiceTypes {
	class AGM_NoVoice {
        name = "$STR_AGM_Core_NoVoice";
		voices[] = {"AGM_NoVoice","AGM_NoVoice","AGM_NoVoice"};
		preview = "AGM_NoVoice";
		alternative = "";
	};
};
