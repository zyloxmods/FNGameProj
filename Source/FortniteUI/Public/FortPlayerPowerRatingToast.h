#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortPlayerPowerRatingToast.generated.h"

class UCommonTextBlock;
class UFortPlayerBanner;
class UFortUINotification;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerPowerRatingToast : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnToastFinished);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnToastFinished OnToastFinished;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPlayerBanner* Banner_MemberBanner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PowerRating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PowerDifference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Description;
    
public:
    UFortPlayerPowerRatingToast();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowToast();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetToast(UFortUINotification* Notification);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HideToast();
    
};

