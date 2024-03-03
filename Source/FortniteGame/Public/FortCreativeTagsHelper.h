#pragma once
#include "CoreMinimal.h"
#include "FortCreativeTagsHelper.generated.h"

USTRUCT(BlueprintType)
struct FFortCreativeTagsHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CreativeTags;
    
    FORTNITEGAME_API FFortCreativeTagsHelper();
};

