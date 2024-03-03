#pragma once
#include "CoreMinimal.h"
#include "EFortItemType.h"
#include "FortItemFilterDefinition.generated.h"

USTRUCT(BlueprintType)
struct FFortItemFilterDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFortItemType> ItemTypeFilters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresItemDetails;
    
    FORTNITEUI_API FFortItemFilterDefinition();
};

