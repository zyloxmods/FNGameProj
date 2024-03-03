#pragma once
#include "CoreMinimal.h"
#include "EStatCategory.h"
#include "FortReplicatedStatMapping.generated.h"

USTRUCT(BlueprintType)
struct FFortReplicatedStatMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatCategory StatCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    FORTNITEGAME_API FFortReplicatedStatMapping();
};

