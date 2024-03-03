#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AttributeSet.h"
#include "NitrogenBonusStat.h"
#include "NitrogenWidgetBase.h"
#include "NitrogenFareBonusWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UNitrogenFareBonusWidget : public UNitrogenWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_BonusIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bEnableReminders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bLoopReminders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat InitialReminderDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ReminderFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ShowWidgetTimerHandle;
    
public:
    UNitrogenFareBonusWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowBonus();
    
    UFUNCTION(BlueprintCallable)
    void OnEndFare(bool bFareCompleted);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginFare();
    
    UFUNCTION(BlueprintCallable)
    void OnActiveBonusUpdated(FNitrogenBonusStat& BonusStat, float Value, bool ShouldAwardBonus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideBonus();
    
};

