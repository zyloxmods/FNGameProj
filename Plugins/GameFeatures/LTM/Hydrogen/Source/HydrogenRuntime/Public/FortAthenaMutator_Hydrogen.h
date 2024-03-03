#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAthenaGamePhaseStep.h"
#include "FortAthenaMutator_GameModeBase.h"
#include "RespawnAndSpectateSelectManager.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "HydrogenPathNames.h"
#include "OnHydrogenTeamPointsChangedDelegate.h"
#include "OnInitializedHydrogenDelegate.h"
#include "OnWinningTeamDeclaredDelegate.h"
#include "TeamPointsEntry.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_Hydrogen.generated.h"

class AActor;
class AFortPlayerControllerAthena;
class AHydrogenObjectiveActor;
class IFortSafeZoneInterface;
class UFortSafeZoneInterface;
class UMaterialParameterCollection;
class UTexture2D;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_Hydrogen : public AFortAthenaMutator_GameModeBase, public IRespawnAndSpectateSelectManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bWinnerDeclared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat VictoryPointImbalanceRespawnTimeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HighVictoryPointImbalanceRespawnTimeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinRespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HydrogenTeamPointsChanged, meta=(AllowPrivateAccess=true))
    TArray<FTeamPointsEntry> HydrogenTeamPoints;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHydrogenTeamPointsChanged OnHydrogenTeamPointsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WinningTeam, meta=(AllowPrivateAccess=true))
    uint8 WinningTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WinningScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AHydrogenObjectiveActor*> CapturePointActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> NonCapturePointActorsForPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SafeZoneRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AircraftOffsetFromRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bShouldDropSupplyDropsBetweenCurrentAndNextSafeZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SupplyDropPercentDistanceToNextPathLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SupplyDropPercentSafeZoneRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MinimapMaterialParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinRespawnHeightAboveGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultRespawnLabelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DefaultRespawnTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultRespawnDisplayPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> DefaultRespawnCameraActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HydrogenCapturePointsPathsIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHydrogenPathNames> HydrogenCapturePointsPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HydrogenCapturePointsPathSpeedToNextNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickHydrogenStormShield_TimeBetweenTicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HydrogenCompassIconOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bStormActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float SecondsTilStormActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bAllowCheckWinnerWithOneTeamLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ObjectiveAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EOMBonusAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bOnlyCapturePointsInsideSafeZoneCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bAwardVictoryPointsWhenFullyCaptured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BonusVictoryPointsAwardedForCapturingPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BonusVictoryPointsAwardedForLockedCapturedPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HydrogenVictoryPointCheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HydrogenVictoryPointGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HydrogenCloseToVictoryPointGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HydrogenTotalTimeForOneCapturePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HydrogenMaxCapturePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HydrogenTotalTimeForMaxCapturePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HydrogenVictoryPointIncreaseReducedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HydrogenVictoryPointIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HydrogenVictoryPointRateIncreasePerPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HydrogenVictoryPointCheckTimePassed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SafeZoneCameraActor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HydrogenCapturePointsPathsIndexToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float StormHeadingYawReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PathGameplayTagToUse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInitializedHydrogen OnInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWinningTeamDeclared OnWinningTeamDeclared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InventoryItemTagsToCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchEndAnalyticsEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EarlyExitAnalyticsEventName;
    
    AFortAthenaMutator_Hydrogen();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCapturePointsCounted();
    
    UFUNCTION(BlueprintCallable)
    bool TickHydrogenStormShield(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetupSafeZoneRoute(const FVector StartVector, const FVector EndVector);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetCapturePointFillAmount(AHydrogenObjectiveActor* InCapturePointActor, uint8 InPlayerTeam) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void PositionHydrogenStormShield();
    
public:
    UFUNCTION(BlueprintCallable)
    void OwningTeamChange(AHydrogenObjectiveActor* Objective, uint8 NewTeam, uint8 OldTeam);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WinningTeam();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HydrogenTeamPointsChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterfaceConst, EAthenaGamePhaseStep GamePhaseStep);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInStormShield(FVector TestLocation) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GotoNextStormShieldNode();
    
public:
    UFUNCTION(BlueprintCallable)
    void GiveObjectiveAccolade(AFortPlayerControllerAthena* FortController);
    
    UFUNCTION(BlueprintCallable)
    void GiveEOMBonusAccolade();
    
protected:
    UFUNCTION(BlueprintCallable)
    float GetTimeToNextNode();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStormSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSortedActivePointIndices(TArray<int32>& OutSortedIndices) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetOwnedCapturePointCount(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    FVector GetNextActorOnPathLocation(int32 InPathIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AHydrogenObjectiveActor*> GetAllCapturePoints() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    FVector GetActorOnPathLocation(int32 InPathIndex);
    
    UFUNCTION(BlueprintCallable)
    void EndGame(uint8 Winner);
    
    UFUNCTION(BlueprintCallable)
    void CheckVictoryPoints(float TimePassed);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool bHasWinnerBeenDeclared() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool bHasStormStarted() const;
    
    UFUNCTION(BlueprintCallable)
    void AddBonusVictoryPointsForLockedCapturePoints(uint8 InTeam);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ActivateTheStormShield();
    
    
    // Fix for true pure virtual functions not being implemented
};

