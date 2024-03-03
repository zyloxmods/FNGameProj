#pragma once
#include "CoreMinimal.h"
#include "FortMobileHUDLayoutProfileSave.h"
#include "FortMobileHUDProfileBase.h"
#include "FortMobileHUDPreset.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortMobileHUDPreset : public FFortMobileHUDProfileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMobileHUDLayoutProfileSave HUDLayoutPreset;
    
    FFortMobileHUDPreset();
};

