#pragma once
#include "CoreMinimal.h"
#include "FortMobileHUDContextLayoutSave.h"
#include "FortMobileHUDLayoutProfileSave.generated.h"

USTRUCT(BlueprintType)
struct FFortMobileHUDLayoutProfileSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMobileHUDContextLayoutSave> ContextLayouts;
    
    FORTNITEGAME_API FFortMobileHUDLayoutProfileSave();
};

