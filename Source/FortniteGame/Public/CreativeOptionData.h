#pragma once
#include "CoreMinimal.h"
#include "CreativeOptionData.generated.h"

USTRUCT(BlueprintType)
struct FCreativeOptionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FORTNITEGAME_API FCreativeOptionData();
};

