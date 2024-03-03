#pragma once
#include "CoreMinimal.h"
#include "FortHealthBarComponentData.generated.h"

USTRUCT(BlueprintType)
struct FFortHealthBarComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    FORTNITEGAME_API FFortHealthBarComponentData();
};

