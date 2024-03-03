#pragma once
#include "CoreMinimal.h"
#include "FortUserWidget.h"
#include "FortResultsBadgeLootWidget.generated.h"

class UCommonBorder;

UCLASS(Blueprintable, EditInlineNew)
class UFortResultsBadgeLootWidget : public UFortUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonBorder* Border_LeechWarning;
    
public:
    UFortResultsBadgeLootWidget();
private:
    UFUNCTION(BlueprintCallable)
    void RecheckLeecherStatus();
    
};

