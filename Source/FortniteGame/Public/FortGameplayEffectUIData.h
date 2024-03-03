#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectUIData.h"
#include "FortGameplayEffectUIData.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortGameplayEffectUIData : public UGameplayEffectUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TooltipName;
    
    UFortGameplayEffectUIData();
};

