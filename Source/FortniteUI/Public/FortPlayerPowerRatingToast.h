#pragma once
#include "CoreMinimal.h"
#include "FortToastWidget.h"
#include "FortPlayerPowerRatingToast.generated.h"

class UCommonTextBlock;
class UFortPlayerBanner;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerPowerRatingToast : public UFortToastWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PowerDifference;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPlayerBanner* Banner_MemberBanner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PowerRating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Description;
    
public:
    UFortPlayerPowerRatingToast();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowToast();
    
    UFUNCTION(BlueprintCallable)
    void HideToast();
    
};

