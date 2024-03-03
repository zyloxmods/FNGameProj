#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
#include "AthenaGameMessageData.h"
#include "EAthenaGamePhase.h"
#include "EWaxState.h"
#include "FortAthenaMutator.h"
#include "Templates/SubclassOf.h"
#include "WaxEventSignatureDelegate.h"
#include "WaxEventSignature_NoParamsDelegate.h"
#include "WaxNoStormZone.h"
#include "WaxPartOverrideData.h"
#include "WaxPlayerDataArray.h"
#include "WaxRespawnLogicData.h"
#include "WaxTokenFlashSignatureDelegate.h"
#include "WaxVisibilityModifiers.h"
#include "FortAthenaMutator_Wax.generated.h"

class AFortAthena_WaxToken;
class AFortGameModePickup_Wax;
class AFortPlayerPawnAthena;
class AFortPlayerStateAthena;
class UFortWorldItemDefinition;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_Wax : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Leaders, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> TeamLeadersInOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> PlayerLeadersInOrder;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaxEventSignature OnFlyingTokensApplied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaxEventSignature OnTokensAwarded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaxEventSignature OnTokensCollected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaxEventSignature_NoParams PodiumChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaxTokenFlashSignature OnPendingFlashes;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaxEventSignature_NoParams AnyTokenChange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LeaderSpecialActorCategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortAthena_WaxToken> TokenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortGameModePickup_Wax> TokenPickupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* PickupItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TokenSpawnBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TokensToWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TokensToStartWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TokenPercentDropOnElim_Podium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TokenPercentDropOnElim_Commoner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TokensAwardedPerEliminationOnKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ThresholdShowTeamFlashAt_One;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ThresholdShowTeamFlashAt_Two;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ThresholdShowTeamFlashAt_Three;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ThresholdShowEnemyFlashAt_One;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ThresholdShowEnemyFlashAt_Two;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ThresholdShowEnemyFlashAt_Three;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BigTokenAmountForSingleElim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MediumTokenAmountForSingleElim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UseLiteralTokenAward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TokensToMarkPermanentlyMaxTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DrawSecondGenTokensOnCompass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LivesToStartPlayerWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PodiumSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaxNoStormZone> NoStormZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<EWaxState, FWaxVisibilityModifiers> VisibilityModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<EWaxState, FScalableFloat> StateTokenCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DistanceConsideredNearbyForUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat VelocityConsideredMovingForUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TimeConsideredRecentForUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaxRespawnLogicData RespawnSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaxStateAboveWhichLeadersDrawSpecialStyleOnUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaxLeadersMaximumCompassDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MapLeaderboard_TeamBased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AboutToWinPopup_TeamBased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PodiumIcons_TeamBased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush FirstPlaceCompassBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SecondPlaceCompassBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ThirdPlaceCompassBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush FirstPlaceSquadmateCompassBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SecondPlaceSquadmateCompassBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ThirdPlaceSquadmateCompassBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush FirstPlaceMapBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SecondPlaceMapBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ThirdPlaceMapBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush FirstPlaceSquadmateMapBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SecondPlaceSquadmateMapBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ThirdPlaceSquadmateMapBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UseSquadPlacementIconsOnMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UseSquadPlacementIconsOnCompass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SquadPlacementScaleOnMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SquadPlacementOffsetPct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TokenThresholdAboveWhichToWarn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_EnemyToWinSoon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_PlayerToWinSoon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_PlayerTookWaxLead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_PlayerLostWaxLead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_WaxLeaderChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_IntroOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_IntroTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_IntroThree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ShowTextOnEnteringSpecialBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SkinMetaTagsToSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaxPartOverrideData> OverrideParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShouldSwapSkins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FWaxPlayerDataArray PlayerData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AFortPlayerStateAthena*, float> TimeSinceLastFireMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* LastEligibleLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* FirstPlaceIfAboveThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* SecondPlaceIfAboveThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* ThirdPlaceIfAboveThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, AFortPlayerStateAthena*> TopPlayerInSquadID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortGameModePickup_Wax*> WaxPickupsToDraw;
    
public:
    AFortAthenaMutator_Wax();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TokensCollected(AFortPlayerStateAthena* Player, int32 Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TokensAwarded(AFortPlayerStateAthena* Player, int32 Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldBeUI_Visible(AFortPlayerStateAthena* Player) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Leaders();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerRespawn_Audio();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNewGamePhase(EAthenaGamePhase NewPhase);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNearingEnd_Audio();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameEnd_Audio();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerTeamLeader(AFortPlayerStateAthena* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerMovingOrShooting(AFortPlayerStateAthena* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInPodium(AFortPlayerStateAthena* Player) const;
    
    UFUNCTION(BlueprintCallable)
    void GetWaxUI_Info(float& MyPercent, float& Enemy1Pct, float& Enemy2Pct, float& Enemy3Pct, int32& MyRank);
    
    UFUNCTION(BlueprintCallable)
    int32 GetTokensToWinBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTokensForPlayer(AFortPlayerStateAthena* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerTeamScore(AFortPlayerStateAthena* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerTeamPlacement(AFortPlayerStateAthena* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerPlacement(AFortPlayerStateAthena* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerLives(AFortPlayerStateAthena* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWaxState GetCurrentWaxState(AFortPlayerStateAthena* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FlyingTokensApplied(AFortPlayerStateAthena* Player, int32 Amount);
    
private:
    UFUNCTION(BlueprintCallable)
    void CommonDeadPawn(AFortPlayerPawnAthena* DeadPawn);
    
};

