#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OutpostItemUpgradeData.generated.h"

class UFortOutpostItemDefinition;

USTRUCT(BlueprintType)
struct FOutpostItemUpgradeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortOutpostItemDefinition> ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequiredItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequiredAccountItems;
    
    FORTNITEGAME_API FOutpostItemUpgradeData();
};

