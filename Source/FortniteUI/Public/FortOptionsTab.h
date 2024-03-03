#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "ESettingTab.h"
#include "OnTabActivatedDelegate.h"
#include "OnTabDeactivatedDelegate.h"
#include "OnTabSettingChangedDelegate.h"
#include "FortOptionsTab.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortOptionsTab : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabSettingChanged OnTabSettingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabActivated OnTabActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabDeactivated OnTabDeactivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESettingTab TabType;
    
    UFortOptionsTab();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateOptionsTab();
    
    UFUNCTION(BlueprintCallable)
    void TempNew_UpdateOptionsTab();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetOptionsToDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsControllerDefaultInputType() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAthena();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateTab();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CenterOnTab();
    
public:
    UFUNCTION(BlueprintCallable)
    bool AreParentalControlsEnabled();
    
    UFUNCTION(BlueprintCallable)
    void ActivateTab();
    
};

