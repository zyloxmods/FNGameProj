#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerFeedbackFlags.h"
#include "FortFeedbackDropdownCategoryHotfix_Modify.generated.h"

USTRUCT(BlueprintType)
struct FFortFeedbackDropdownCategoryHotfix_Modify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InternalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPlayerFeedbackFlags Flag;
    
    FORTNITEUI_API FFortFeedbackDropdownCategoryHotfix_Modify();
};

