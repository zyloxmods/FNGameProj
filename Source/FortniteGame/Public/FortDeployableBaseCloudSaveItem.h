#pragma once
#include "CoreMinimal.h"
#include "FortCloudSaveItem.h"
#include "FortTierProgression.h"
#include "FortDeployableBaseCloudSaveItem.generated.h"

UCLASS(Blueprintable)
class UFortDeployableBaseCloudSaveItem : public UFortCloudSaveItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTierProgression tier_progression;
    
public:
    UFortDeployableBaseCloudSaveItem();
};

