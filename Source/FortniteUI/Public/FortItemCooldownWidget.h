#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortItemCooldownType.h"
#include "OnAmmoRegenerationUpdatedDelegate.h"
#include "OnCooldownStartedDelegate.h"
#include "OnCooldownStoppedDelegate.h"
#include "OnCooldownUpdatedDelegate.h"
#include "FortItemCooldownWidget.generated.h"

class UCommonTextBlock;
class UFortWorldItem;
class UImage;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew)
class UFortItemCooldownWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCooldownStarted OnCooldownStarted_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCooldownStopped OnCooldownStopped_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCooldownUpdated OnCooldownUpdated_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAmmoRegenerationUpdated OnAmmoRegenerationUpdated_Delegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* CooldownText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CooldownImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CooldownChargingImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CooldownMaterialParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFortItemCooldownType> CooldownTypesSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CooldownPercentageMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAmmoRegenAvailableState;
    
public:
    UFortItemCooldownWidget();
    UFUNCTION(BlueprintCallable)
    void TryStartUpdateCooldown_BP();
    
    UFUNCTION(BlueprintCallable)
    void SetItem(const UFortWorldItem* InWorldItem);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWorldItemDestroyed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCooldownUpdated(EFortItemCooldownType CooldownType, float CooldownDuration, float CooldownRemaining, float CooldownPercentage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCooldownStopped(EFortItemCooldownType CooldownType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCooldownStarted(EFortItemCooldownType CooldownType, float CooldownDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAmmoRegenerationUpdated(bool bOutAmmoRegenAvailableState);
    
};

