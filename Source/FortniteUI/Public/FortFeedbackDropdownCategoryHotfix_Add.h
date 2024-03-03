#pragma once
#include "CoreMinimal.h"
#include "FortFeedbackDropdownCategoryHotfix_Add.generated.h"

USTRUCT(BlueprintType)
struct FFortFeedbackDropdownCategoryHotfix_Add {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParentInternalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InternalName;
    
    FORTNITEUI_API FFortFeedbackDropdownCategoryHotfix_Add();
};

