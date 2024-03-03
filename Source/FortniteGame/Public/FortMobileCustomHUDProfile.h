#pragma once
#include "CoreMinimal.h"
#include "FortMobileHUDProfileBase.h"
#include "FortMobileSchemaModificationContainer.h"
#include "FortMobileCustomHUDProfile.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortMobileCustomHUDProfile : public FFortMobileHUDProfileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMobileSchemaModificationContainer Modifications;
    
    FFortMobileCustomHUDProfile();
};

