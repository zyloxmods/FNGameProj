#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortDailyRewardsItemData.h"
#include "FortDailyRewardsItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortDailyRewardsItem : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortDailyRewardsItemData ItemData;
    
public:
    UFortDailyRewardsItem();
};

