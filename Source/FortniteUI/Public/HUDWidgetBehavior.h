#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HUDWidgetBehavior.generated.h"

class UFortMobileHudWidgetContentComponent;

UCLASS(Blueprintable)
class FORTNITEUI_API UHUDWidgetBehavior : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HUDLayoutToolName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortMobileHudWidgetContentComponent*> HudWidgetContentComponents;
    
public:
    UHUDWidgetBehavior();
};

