#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "EFireModeType.h"
#include "OnFireModeChangeDelegate.h"
#include "OnOpenCloseFireModePanelDelegate.h"
#include "HUDLayoutToolContext.generated.h"

UCLASS(Blueprintable, NonTransient)
class UHUDLayoutToolContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOpenCloseFireModePanel OnOpenCloseFireModePanelDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFireModeChange OnFireModeChangeDelegate;
    
    UHUDLayoutToolContext();
    UFUNCTION(BlueprintCallable)
    void SetFireModeOpenState(bool bNewlyOpened);
    
    UFUNCTION(BlueprintCallable)
    void SetFireMode(EFireModeType NewFireMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomFireMode(bool bAutofireEnabled, bool bTapToShootEnabled, bool bAlwaysShowDedicatedButton);
    
    UFUNCTION(BlueprintCallable)
    void OnFireModeSelected(bool bWasFireModeTutorialSkipped);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFireModeAvailable(EFireModeType NewFireMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFireModeOpenState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFireMode(EFireModeType& FireMode, bool& bAutofireEnabled, bool& bTapToShootEnabled, bool& bAlwaysShowDedicatedButton) const;
    
};

