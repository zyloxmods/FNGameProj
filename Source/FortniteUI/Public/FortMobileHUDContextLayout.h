#pragma once
#include "CoreMinimal.h"
#include "FortMobileHUDContextLayout.generated.h"

class UFortMobileHUDContextModel;

USTRUCT(BlueprintType)
struct FORTNITEUI_API FFortMobileHUDContextLayout {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMobileHUDContextModel* HUDContextModel;
    
public:
    FFortMobileHUDContextLayout();
};

