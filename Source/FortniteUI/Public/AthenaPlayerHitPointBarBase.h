#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "EFortHitPointModificationReason.h"
#include "EHealthBarType.h"
#include "AthenaPlayerHitPointBarBase.generated.h"

class UAthenaPlayerViewModel;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaPlayerHitPointBarBase : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaPlayerViewModel* PlayerVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHealthBarType BarType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeginDeltaInterpDelayMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeginDeltaInterpDelayMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueLast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastToCurrentUpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDisplayShieldBar;
    
public:
    UAthenaPlayerHitPointBarBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProgressBarFillColors(FLinearColor ColorA, FLinearColor ColorB);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnValueChangedWithReason(float Value, EFortHitPointModificationReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMaxValueChanged(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeltaChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDBNOStateChanged(bool IsDBNO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastValuePercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentValuePercentage() const;
    
};

