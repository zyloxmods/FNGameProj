#pragma once
#include "CoreMinimal.h"
#include "Components/Button.h"
#include "FortButtonInternalWidget.generated.h"

UCLASS(Blueprintable)
class UFortButtonInternalWidget : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsClickable;
    
    UFortButtonInternalWidget();
};

