#pragma once
#include "CoreMinimal.h"
#include "FortItemFilterDefinition.h"
#include "FortItemSorterDefinition.h"
#include "FortHeroLoadoutHeroPickerTabConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FFortHeroLoadoutHeroPickerTabConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortItemFilterDefinition Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortItemSorterDefinition Sorter;
    
    FORTNITEUI_API FFortHeroLoadoutHeroPickerTabConfiguration();
};

