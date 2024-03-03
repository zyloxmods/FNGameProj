#pragma once
#include "CoreMinimal.h"
#include "CreativeIslandDescriptionTag.generated.h"

USTRUCT(BlueprintType)
struct FCreativeIslandDescriptionTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    FORTNITEGAME_API FCreativeIslandDescriptionTag();
};

