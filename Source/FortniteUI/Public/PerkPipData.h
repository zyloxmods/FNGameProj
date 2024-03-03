#pragma once
#include "CoreMinimal.h"
#include "PerkPipData.generated.h"

class UFortAccoladeItemDefinition;

USTRUCT(BlueprintType)
struct FPerkPipData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAccoladeItemDefinition* AccoladeItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfPips;
    
    FORTNITEUI_API FPerkPipData();
};

