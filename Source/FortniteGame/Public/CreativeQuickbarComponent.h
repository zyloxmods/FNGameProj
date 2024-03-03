#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "OnCreativeQuickbarActiveChangedDelegate.h"
#include "OnCreativeQuickbarClutchReleasedNoActionDelegate.h"
#include "OnCreativeQuickbarEquippedChangedDelegate.h"
#include "OnItemAddedToCreativeQuickbarDelegate.h"
#include "OnItemAddedToMoveToolDelegate.h"
#include "CreativeQuickbarComponent.generated.h"

class AActor;
class AFortWeapon;
class UFortCreativeUserPrefabItemDefinition;
class UFortItemDefinition;
class UFortPlaysetWorldItemDefinition;
class UInputComponent;
class ULevelSaveRecord;
class UObjectInteractionBehavior;

UCLASS(Blueprintable, ClassGroup=Custom, Within=FortPlayerControllerGameplay, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UCreativeQuickbarComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeQuickbarActiveChanged OnCreativeQuickbarActiveChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeQuickbarEquippedChanged OnCreativeQuickbarEquippedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeQuickbarClutchReleasedNoAction OnCreativeQuickbarClutchReleasedNoAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemAddedToMoveTool OnItemAddedToMoveTool;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemAddedToCreativeQuickbar OnItemAddedToCreativeQuickbar;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCreativeQuickbarActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCreativeQuickbarEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortCreativeUserPrefabItemDefinition*> QuickbarSlotItemDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPlaysetWorldItemDefinition* QuickbarSlotPlaysetItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSaveRecord* CurrentQuickbarRequestSaveRecord;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* CreativeQuickbarInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* CreativeQuickbarActiveInputComponent;
    
public:
    UCreativeQuickbarComponent();
    UFUNCTION(BlueprintCallable)
    void SetIsQuickbarEquipped(bool bIsEquipped);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAddToQuickBar(const TArray<AActor*>& Actors, const int32 DesiredSlotIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAddItemToQuickBar(const UFortItemDefinition* ItemDefinition, const int32 DesiredSlotIndexconst, FGuid PreviousItemGuid, bool bUseVolumeToSpawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PopulateQuickbarSlotFromSelection(int32 SlotIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuickbarActive() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleQuickbarClutchReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleQuickbarClutchPressed();
    
    UFUNCTION(BlueprintCallable)
    void HandleMoveToolInteractionStarted(UObjectInteractionBehavior* InteractionMode);
    
    UFUNCTION(BlueprintCallable)
    void HandleMoveToolInteractionEnded();
    
    UFUNCTION(BlueprintCallable)
    void HandleInputMethodChanged(ECommonInputType CurrentInputType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleCreativeQuickbarReleased(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleCreativeQuickbarPressed(int32 SlotIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void ExecuteDelayedAddItemToQuickbar(const UFortItemDefinition* ItemDefinition, const int32 DesiredSlotIndex, bool bUseVolumeToSpawn);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteDelayedAddItemToMoveTool(const UFortItemDefinition* ItemDefinition, bool bUseVolume);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAddToQuickBarComplete(const int32 SlotPutIn, FGuid ItemGuid, const UFortItemDefinition* Playset, bool UseDelayedAddToQuickbar, bool bUseVolumeToSpawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateQuickbarSlot(int32 SlotIndex);
    
};

