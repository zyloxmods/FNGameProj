#pragma once
#include "CoreMinimal.h"
#include "AttributeRequirement.generated.h"

USTRUCT(BlueprintType)
struct FAttributeRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequirementsMet;
    
    FORTNITEUI_API FAttributeRequirement();
};

