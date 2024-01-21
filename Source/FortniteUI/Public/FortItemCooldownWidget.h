#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortItemCooldownType.h"
#include "OnCooldownBookendDelegate.h"
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
    FOnCooldownBookend OnCooldownStarted_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCooldownBookend OnCooldownStopped_Delegate;
    
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
    void OnCooldownStopped(EFortItemCooldownType CooldownType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCooldownStarted(EFortItemCooldownType CooldownType);
    
};

