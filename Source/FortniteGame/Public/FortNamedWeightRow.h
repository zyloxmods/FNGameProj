#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortNamedWeightRow.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortNamedWeightRow : public FTableRowBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> NamedWeightMap;
    
public:
    FFortNamedWeightRow();
};

