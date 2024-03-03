#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CreativeOptionVariableBase.generated.h"

USTRUCT(BlueprintType)
struct FCreativeOptionVariableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VariableTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FORTNITEGAME_API FCreativeOptionVariableBase();
};

