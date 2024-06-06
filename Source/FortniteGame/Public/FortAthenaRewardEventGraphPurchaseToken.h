#pragma once
#include "CoreMinimal.h"
#include "EItemProfileType.h"
#include "FortAccountItemDefinition.h"
#include "FortAthenaRewardEventGraphPurchaseToken.generated.h"

class UAthenaRewardEventGraph;
class UFortRepeatableDailiesCardItemDefinition;

UCLASS(Blueprintable)
class UFortAthenaRewardEventGraphPurchaseToken : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemProfileType ProfileType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAthenaRewardEventGraph> RewardEventGraphDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortRepeatableDailiesCardItemDefinition> RepeatableDailiesCardItemDefinition;
    
public:
    UFortAthenaRewardEventGraphPurchaseToken(const FObjectInitializer& ObjectInitializer);
};

