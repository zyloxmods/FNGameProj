#pragma once
#include "CoreMinimal.h"
#include "FortMobileButtonBehaviorComponent_Visibility.h"
#include "TagVisibility.h"
#include "FortMobileButtonBehaviorComponent_TagVisibility.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortMobileButtonBehaviorComponent_TagVisibility : public UFortMobileButtonBehaviorComponent_Visibility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTagVisibility> TagVisibilities;
    
public:
    UFortMobileButtonBehaviorComponent_TagVisibility();
};

