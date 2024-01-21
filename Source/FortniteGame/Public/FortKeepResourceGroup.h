#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortKeepResourceGroup.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortKeepResourceGroup : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Container;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ResourceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortItemDefinition> FullPath;
    
    FFortKeepResourceGroup();
};

