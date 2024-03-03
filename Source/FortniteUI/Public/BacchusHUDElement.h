#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "EBacchusHUDStateType.h"
#include "FortHUDState.h"
#include "FortMobileHUDElement.h"
#include "BacchusHUDElement.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UBacchusHUDElement : public UFortMobileHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideWhenNotUsingTouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdatesWithHUDState;
    
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
    EBacchusHUDStateType OnInBattleLabMode;
    
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
    EBacchusHUDStateType OnCarryingDBNO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBacchusHUDStateType OnCarryingHeldObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBacchusHUDStateType OnControllingRCPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBacchusHUDStateType OnInVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBacchusHUDStateType OnDrivingVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBacchusHUDStateType OnZiplining;
    
public:
    UBacchusHUDElement();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowHighlight(bool Show);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHUDStateUpdate(const FFortHUDState& NewState);
    
    UFUNCTION(BlueprintCallable)
    void HandleInputMethodChanged(ECommonInputType CurrentInputType);
    
};

