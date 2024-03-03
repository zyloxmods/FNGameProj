#pragma once
#include "CoreMinimal.h"
#include "FortMobileActionButton.h"
#include "Templates/SubclassOf.h"
#include "FortLookStickV2.generated.h"

class UHUDWidgetBehavior;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLookStickV2 : public UFortMobileActionButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHUDWidgetBehavior> ForcedBehaviorClass;
    
public:
    UFortLookStickV2();
};

