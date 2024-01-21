#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "EBacchusHUDStateType.h"
#include "HUDLayoutDataEntry.h"
#include "GameplayTagContainer.h"
#include "FortHUDElementWidget.h"
#include "FortHUDState.h"
#include "HUDLayoutToolInterface.h"
#include "BacchusHUDElement.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBacchusHUDElement : public UFortHUDElementWidget, public IHUDLayoutToolInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInLayoutMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VisualType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideWhenNotUsingTouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBacchusHUDStateType OnInBuildMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBacchusHUDStateType OnInCombatMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBacchusHUDStateType OnInEditMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBacchusHUDStateType OnInCreativeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBacchusHUDStateType IsFreeFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBacchusHUDStateType IsGliding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBacchusHUDStateType CanOpenChute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBacchusHUDStateType InLockedBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBacchusHUDStateType InUnlockedBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBacchusHUDStateType OnTargeting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBacchusHUDStateType OnUsingScopeTargeting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBacchusHUDStateType OnCanTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBacchusHUDStateType OnCanUseScopeTargeting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBacchusHUDStateType OnCrouching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBacchusHUDStateType OnCanUseSecondaryAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBacchusHUDStateType OnDBNO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBacchusHUDStateType OnControllingRCPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBacchusHUDStateType OnInVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBacchusHUDStateType OnDrivingVehicle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHUDLayoutDataEntry DefaultEntry;
    
public:
    UBacchusHUDElement();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHUDStateUpdate(const FFortHUDState& NewState);
    
    UFUNCTION(BlueprintCallable)
    void HandleInputMethodChanged(ECommonInputType CurrentInputType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag BP_GetMobileVisualType() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

