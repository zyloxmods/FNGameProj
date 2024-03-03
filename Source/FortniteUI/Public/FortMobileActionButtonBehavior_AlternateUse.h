#pragma once
#include "CoreMinimal.h"
#include "FortMobileActionButtonBehavior.h"
#include "FortMobileActionButtonBehavior_AlternateUse.generated.h"

class UPaperSprite;

UCLASS(Blueprintable)
class FORTNITEUI_API UFortMobileActionButtonBehavior_AlternateUse : public UFortMobileActionButtonBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* DBNOHoistSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* DBNOPlaceSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* HeldObjectPlaceSprite;
    
public:
    UFortMobileActionButtonBehavior_AlternateUse();
};

