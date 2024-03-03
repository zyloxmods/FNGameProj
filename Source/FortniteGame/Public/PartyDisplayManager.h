#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameFramework/OnlineReplStructs.h"
#include "InputCoreTypes.h"
#include "InputCoreTypes.h"
#include "ClickedPartyPlayerDelegateDelegate.h"
#include "FortAthenaLoadout.h"
#include "HeroSlotInfo.h"
#include "OnPrefabForCurrentlyDisplayedItemChangedDelegate.h"
#include "OnPrefabForCurrentlyDisplayedItemReadyDelegate.h"
#include "PartyDisplayManager.generated.h"

class AFortPlayerPawn;
class UFortItem;
class UMaterialInstance;
class UMeshComponent;
class UObject;

UCLASS(Blueprintable)
class FORTNITEGAME_API APartyDisplayManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PlacementActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* VaultPlacementActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* VaultWeaponPlacementActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClickedPartyPlayerDelegate OnClickedPartyPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClickedPartyPlayerDelegate OnBeginCursorOverPartyPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClickedPartyPlayerDelegate OnEndCursorOverPartyPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPrefabForCurrentlyDisplayedItemReady OnItemDisplayReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPrefabForCurrentlyDisplayedItemChanged OnPrefabForCurrentlyDisplayedItemChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* PlayerInMatchHoloMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayingCelebrateFX;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FHeroSlotInfo> HeroPlayerPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAthenaLoadout CurrentlyDisplayedCosmeticLoadout;
    
public:
    APartyDisplayManager();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowItem(const UFortItem* ItemToView, const FGuid& RequestID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupPrefabVisuals();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResOutPawnFromLobby(AFortPlayerPawn* Pawn, int32 PartyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayLevelUpEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayEvolutionEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerPawnAddedToLobby(AFortPlayerPawn* Pawn);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnTouchReleased(TEnumAsByte<ETouchIndex::Type> FingerIndex, AActor* TouchedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnEndCursorOver(AActor* TouchedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnClicked(AActor* TouchedActor, FKey ButtonPressed);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnBeginCursorOver(AActor* TouchedActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMeshLODStreamingFinished();
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyPrefabChanged(AActor* PrefabActor, UFortItem* CurrentItem);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleLoadingAssetsForItemCompleted(UFortItem* ItemWhoseAssetsWereLoaded, const TArray<UObject*>& LoadedAssets, const FGuid& RequestID);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemsShown(const TArray<UFortItem*>& ItemShown, const FGuid& RequestID);
    
    UFUNCTION(BlueprintCallable)
    void HandleCharacterCustomizationFinished(AFortPlayerPawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetPrefabActorForCurrentDisplayedItem() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetPlayerIdFromPartyMemberIndex(int32 PartyMemberIndex) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPartyMemberIndexByPlayerPawn(const AFortPlayerPawn* PlayerPawn, int32& OutPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetMeshForCurrentDisplayedItem(UMeshComponent*& OutDisplayedMesh);
    
    UFUNCTION(BlueprintCallable)
    AFortPlayerPawn* GetHeroPlayerPawnForCurrentDisplayedItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortAthenaLoadout GetCosmeticLoadoutForCurrentDisplayedItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CharacterCustomizationFinished(AFortPlayerPawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void BeginLoadingAssetsForItem(UFortItem* ItemToView, const TArray<TSoftObjectPtr<UObject>>& AssetsToLoad, const FGuid& RequestID);
    
};

