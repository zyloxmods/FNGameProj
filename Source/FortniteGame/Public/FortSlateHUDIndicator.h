#pragma once
#include "CoreMinimal.h"
#include "FortActorIndicatorInterface.h"
#include "FortIndicator.h"
#include "FortSlateHUDIndicator.generated.h"

UCLASS(Blueprintable)
class UFortSlateHUDIndicator : public UFortIndicator, public IFortActorIndicatorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bClampToScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShowClampToScreenArrow;
    
    UFortSlateHUDIndicator();
    
    // Fix for true pure virtual functions not being implemented
};

