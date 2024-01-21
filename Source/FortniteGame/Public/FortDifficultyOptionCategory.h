#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortDifficultyOptionCategory.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortDifficultyOptionCategory : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasValueRange;
    
public:
    UFortDifficultyOptionCategory();
};

