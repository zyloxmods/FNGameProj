#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AlterationMapping.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FAlterationMapping : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewAlteration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdditionalAlteration;
    
    FAlterationMapping();
};

