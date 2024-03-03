#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
#include "AshtonStoneData.h"
#include "AshtonStoneSpawnData.h"
#include "AshtonStoneState.h"
#include "AthenaGameMessageData.h"
#include "EAshtonStoneStateType.h"
#include "EAshtonStoneType.h"
#include "EAthenaGamePhaseStep.h"
#include "FortAthenaMutator.h"
#include "FortRespawnLogicData.h"
#include "OnAshtonStoneListChangedDelegate.h"
#include "OnAshtonVillainRespawnsRemainingChangedDelegate.h"
#include "FortAthenaMutator_Ashton.generated.h"

class AFortGameModePickup;
class AFortPlayerController;
class AFortPlayerControllerAthena;
class IFortSafeZoneInterface;
class UFortSafeZoneInterface;
class UFortGadgetItemDefinition;
class UFortItemDefinition;
class UFortWorldItemDefinition;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_Ashton : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAshtonStoneListChanged OnStoneListChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAshtonVillainRespawnsRemainingChanged OnVillainRespawnsRemainingChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat GameOverDelay;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAshtonStoneData StoneDataList[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAshtonStoneSpawnData StoneSpawnDataList[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StoneList, meta=(AllowPrivateAccess=true))
    TArray<FAshtonStoneState> StoneList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAshtonStoneState> CachedStoneList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_VillainLeaderLocationForSnapSound, meta=(AllowPrivateAccess=true))
    FVector VillainLeaderLocationForSnapSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_VillainLeaderLocationForDeathSound, meta=(AllowPrivateAccess=true))
    FVector VillainLeaderLocationForDeathSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_VillainLeaderLocationForSound, meta=(AllowPrivateAccess=true))
    FVector VillainLeaderLocationForSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag JimInventoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag JimPickupTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VillainTeamTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HeroTeamTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ForceEquipTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush MapEnemyBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MapEnemyScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* AutoEquipController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGadgetItemDefinition* VillainLeaderItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortWorldItemDefinition*> VillainItemDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerControllerAthena* VillainLeaderPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRespawnLogicData RespawnLogicData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumVillainRespawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_NumVillainRespawnsRemaining, meta=(AllowPrivateAccess=true))
    int32 NumVillainRespawnsRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PromoteNextVillainLeaderDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat VillainsDisplayStoneIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 CachedNumCapturedStones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_IntroVillain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_IntroHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_RespawnVillain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_RespawnHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_HeroFollowMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_FirstStoneComingVillain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_FirstStoneComingHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_StoneComingVillain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_StoneComingHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_FirstStoneCapturedVillain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_FirstStoneCapturedHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_StoneCapturedVillain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_StoneCapturedHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_OneStoneLeftVillain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_OneStoneLeftHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_FinalStoneComingVillain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_FinalStoneComingHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_EliminatedThanosVillain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_EliminatedThanosHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_RespawnThanosVillain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_RespawnThanosHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_StonesCompleteVillain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_StonesCompleteHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_VillainArmyDepletedVillain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_VillainArmyDepletedHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_NoMoreRespawns;
    
public:
    AFortAthenaMutator_Ashton();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SelectNextVillainLeader();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_VillainLeaderLocationForSound();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_VillainLeaderLocationForSnapSound();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_VillainLeaderLocationForDeathSound();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StoneList();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NumVillainRespawnsRemaining();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayVillainLeaderSpawnedSound(FVector SoundLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayVillainLeaderSnapSound(FVector SoundLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayVillainLeaderDiedSound(FVector SoundLocation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPickupSpawnedAndReady(AFortGameModePickup* PickupObj, const UFortItemDefinition* PickupItemDef);
    
    UFUNCTION(BlueprintCallable)
    void OnPickupDestroying(AFortGameModePickup* PickupObj, const UFortItemDefinition* PickupItemDef);
    
    UFUNCTION(BlueprintCallable)
    void OnMutatorGameplayEvent(int32 EventId, int32 EventParam1, int32 EventParam2, int32 EventParam3);
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
    
public:
    UFUNCTION(BlueprintCallable)
    EAshtonStoneStateType GetStoneState(EAshtonStoneType StoneType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumCapturedStones(const TArray<FAshtonStoneState>& TestList);
    
};

