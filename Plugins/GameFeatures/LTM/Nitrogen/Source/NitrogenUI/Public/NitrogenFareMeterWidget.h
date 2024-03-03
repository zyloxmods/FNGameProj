#pragma once
#include "CoreMinimal.h"
#include "NitrogenBonusStat.h"
#include "NitrogenFareInteractionData.h"
#include "ENitrogenFareObjectiveDisplayState.h"
#include "NitrogenWidgetBase.h"
#include "NitrogenFareMeterWidget.generated.h"

class AFortPlayerState;
class ANitrogenFare;
class UCommonTextBlock;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UNitrogenFareMeterWidget : public UNitrogenWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* DeliveryTimeObjectiveText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* BonusObjectiveText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FastDeliveryTimeLeftText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* FarePortrait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* FareNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANitrogenFare* CurrentFare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bThresholdAwardCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFareBonusObjectiveComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PortraitMaterialParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BorderPercentMaterialParameterName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerState* PassengerPlayerState;
    
public:
    UNitrogenFareMeterWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCurrentFareTimedDeliveryObjectiveState(const ENitrogenFareObjectiveDisplayState DisplayState, const bool bPlayAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCurrentFareBonusObjectiveState(const ENitrogenFareObjectiveDisplayState DisplayState, const bool bPlayAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCurrentFareBaseRewardValue(const int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFareBonusFinshed(bool BonusCompleted);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndFare(bool bFareCompleted);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBeginInteraction(const FNitrogenFareInteractionData& FareInteractionData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginFare();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActiveBonusUpdated(FNitrogenBonusStat& BonusStat, float Value, bool bShouldAwardBonus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FastDeliveryTimeUpdate(float RemainingTimeRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BonusProgressUpdate(float BonusProgressRatio);
    
};

