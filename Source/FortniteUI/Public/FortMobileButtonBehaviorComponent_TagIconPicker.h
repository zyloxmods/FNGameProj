#pragma once
#include "CoreMinimal.h"
#include "FortMobileButtonBehaviorComponent_IconPicker.h"
#include "IconPicker.h"
#include "FortMobileButtonBehaviorComponent_TagIconPicker.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortMobileButtonBehaviorComponent_TagIconPicker : public UFortMobileButtonBehaviorComponent_IconPicker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIconPicker> SpriteOverrides;
    
public:
    UFortMobileButtonBehaviorComponent_TagIconPicker();
};

