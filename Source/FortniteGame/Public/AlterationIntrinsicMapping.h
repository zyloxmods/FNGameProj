#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AlterationIntrinsicMapping.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FAlterationIntrinsicMapping : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewAlteration;
    
    FAlterationIntrinsicMapping();
};

