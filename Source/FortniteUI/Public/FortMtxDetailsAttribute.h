#pragma once
#include "CoreMinimal.h"
#include "FortMtxDetailsAttribute.generated.h"

USTRUCT(BlueprintType)
struct FFortMtxDetailsAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Value;
    
    FORTNITEUI_API FFortMtxDetailsAttribute();
};

