#pragma once
#include "CoreMinimal.h"
#include "FortMobileHUDContextLayout.h"
#include "FortMobileHUDLayoutProfile.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEUI_API FFortMobileHUDLayoutProfile {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText ProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortMobileHUDContextLayout> ContextLayouts;
    
public:
    FFortMobileHUDLayoutProfile();
};

