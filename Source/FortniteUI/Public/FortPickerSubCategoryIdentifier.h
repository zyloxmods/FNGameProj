#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortPickerSubCategoryIdentifier.generated.h"

USTRUCT(BlueprintType)
struct FFortPickerSubCategoryIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    FORTNITEUI_API FFortPickerSubCategoryIdentifier();
};

