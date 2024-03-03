#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "GameplayTagContainer.h"
#include "FortAIDataProvider_Ability.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortAIDataProvider_Ability : public UAIDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AbilityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AbilityBehaviorDistanceTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BehaviorDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTargetSelectionRange;
    
    UFortAIDataProvider_Ability();
};

