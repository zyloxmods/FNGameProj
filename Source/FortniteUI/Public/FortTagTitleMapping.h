#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "FortTagTitleMapping.generated.h"

UCLASS(Blueprintable)
class UFortTagTitleMapping : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FText> TagTitleMap;
    
public:
    UFortTagTitleMapping();
};

