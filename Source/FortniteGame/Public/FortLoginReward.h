#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortLoginReward.generated.h"

class UFortAccountItemDefinition;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortLoginReward : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAccountItemDefinition> ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMajorReward;
    
    FFortLoginReward();
};

