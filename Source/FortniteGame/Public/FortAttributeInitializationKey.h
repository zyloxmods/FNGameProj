#pragma once
#include "CoreMinimal.h"
#include "FortAttributeInitializationKey.generated.h"

USTRUCT(BlueprintType)
struct FFortAttributeInitializationKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttributeInitCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttributeInitSubCategory;
    
    FORTNITEGAME_API FFortAttributeInitializationKey();
};

