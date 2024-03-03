#pragma once
#include "CoreMinimal.h"
#include "AthenaHUDSituationalFeedback.h"
#include "AthenaGenericKeyBindsFeedback.generated.h"

class AFortPlayerControllerGameplay;
class AFortWeapon;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaGenericKeyBindsFeedback : public UAthenaHUDSituationalFeedback {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FText> GenericActions;
    
public:
    UAthenaGenericKeyBindsFeedback();
private:
    UFUNCTION(BlueprintCallable)
    void ReattachEmoteComponent();
    
    UFUNCTION(BlueprintCallable)
    void HandleWeaponHUDKeyActionUpdated(AFortWeapon* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PreviousWeapon);
    
    UFUNCTION(BlueprintCallable)
    void HandleTetherChanged(bool bIsTethered);
    
    UFUNCTION(BlueprintCallable)
    void HandleSavedTabChanged(bool IsTabSaved);
    
    UFUNCTION(BlueprintCallable)
    void HandleKeybindsChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleGhostModeChanged(AFortPlayerControllerGameplay* GameplayPC, bool bEnteredGhostMode);
    
    UFUNCTION(BlueprintCallable)
    void HandleGenericActionRemoved(FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    void HandleGenericActionAdded(FName ActionName, FText DescriptionText);
    
    UFUNCTION(BlueprintCallable)
    void HandleEnterExitVehicle();
    
    UFUNCTION(BlueprintCallable)
    void HandleDBNOCarryPlayerChanged(bool bIsCarrying);
    
};

