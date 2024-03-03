#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortMobileButtonBehaviorComponent.generated.h"

class UFortMobileActionButtonBehavior;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class FORTNITEUI_API UFortMobileButtonBehaviorComponent : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMobileActionButtonBehavior* ButtonBehavior;
    
public:
    UFortMobileButtonBehaviorComponent();
};

