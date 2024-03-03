#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AthenaGameMessageData.h"
#include "ControlPointAssetData.h"
#include "ControlPointInstanceData.h"
#include "ControlPointSpawnData.h"
#include "EAthenaGamePhase.h"
#include "EAthenaGamePhaseStep.h"
#include "FortAthenaMutator.h"
#include "FortRespawnLogicData.h"
#include "FortAthenaMutator_Disco.generated.h"

class AAthenaCapturePoint;
class AFortPlayerStateAthena;
class IFortSafeZoneInterface;
class UFortSafeZoneInterface;

UCLASS(Blueprintable)
class AFortAthenaMutator_Disco : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat GoalScoreToWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PointAccrualFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LastRespawnableSafeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LastSafeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRespawnLogicData RespawnLogicData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 LastRespawnableSafeZoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRespawnWarningGiven;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastSafeZoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlPointAssetData ControlPointAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControlPointSpawnData> ControlPointSpawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FControlPointInstanceData> SpawnedControlPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> DancingPlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> PrevDancingPlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeUntilPointAccrual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SentDiscoOpenedMessagesIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_Intro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_FirstCapturePointsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_SecondCapturePointsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_ThirdCapturePointsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_LastCapturePointsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_CapturePointsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_CapturePointsDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_EnemyCapturedAllPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_AlliesCapturedAllPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_AllyCapturePointLost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_EnemyAboutToWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_AlliesAboutToWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_NoMoreRespawnsWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_NoMoreRespawns;
    
public:
    AFortAthenaMutator_Disco();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMutatorGameplayEvent(int32 EventId, int32 EventParam1, int32 EventParam2, int32 EventParam3);
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase GamePhase);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCaptureLockBroken(AAthenaCapturePoint* CapturePoint, uint8 LockTeam, uint8 BreakTeam);
    
    UFUNCTION(BlueprintCallable)
    void OnCaptureLock(AAthenaCapturePoint* CapturePoint, uint8 LockTeam, bool bIsNewLock);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsRespawningAllowed();
    
};

