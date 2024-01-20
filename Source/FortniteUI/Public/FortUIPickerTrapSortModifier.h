#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "FortUIPickerTrapSortModifier.generated.h"

USTRUCT(BlueprintType)
struct FFortUIPickerTrapSortModifier : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery ItemTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoreBonus;
    
    FORTNITEUI_API FFortUIPickerTrapSortModifier();
};

