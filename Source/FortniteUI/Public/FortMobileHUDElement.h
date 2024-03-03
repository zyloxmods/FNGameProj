#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortHUDElementWidget.h"
#include "FortMobileHUDElement.generated.h"

class UScaleBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortMobileHUDElement : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SizePropertyTag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForcedZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* ScaleBox_HUDWidgetScale;
    
public:
    UFortMobileHUDElement();
};

