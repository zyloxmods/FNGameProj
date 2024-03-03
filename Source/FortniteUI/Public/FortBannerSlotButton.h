#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FortBannerSlotButton.generated.h"

class UFortPlayerBanner;

UCLASS(Blueprintable, EditInlineNew)
class UFortBannerSlotButton : public UCommonButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPlayerBanner* PlayerBanner;
    
public:
    UFortBannerSlotButton();
protected:
    UFUNCTION()
    void HandleInventoryUpdated(const TSet<FString>& ItemChangeFlags, int64 ProfileRevision);
    
};

