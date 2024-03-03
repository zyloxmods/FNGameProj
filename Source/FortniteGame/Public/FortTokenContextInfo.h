#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortTokenContextInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortTokenContextInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredContextTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    FORTNITEGAME_API FFortTokenContextInfo();
};

