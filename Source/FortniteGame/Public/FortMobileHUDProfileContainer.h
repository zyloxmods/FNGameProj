#pragma once
#include "CoreMinimal.h"
#include "FortMobileCustomHUDProfile.h"
#include "FortMobileHUDProfileIdentifier.h"
#include "FortMobileHUDProfileContainer.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortMobileHUDProfileContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMobileHUDProfileIdentifier ActiveHUDProfileIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMobileCustomHUDProfile> CustomHUDProfiles;
    
public:
    FFortMobileHUDProfileContainer();
};

