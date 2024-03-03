#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AlterationNamedExclusions.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FAlterationNamedExclusions : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ExclusionNames;
    
    FAlterationNamedExclusions();
};

