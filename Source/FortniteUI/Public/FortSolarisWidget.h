#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortSolarisWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSolarisWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreateDebugScaffolding;
    
public:
    UFortSolarisWidget();
};

